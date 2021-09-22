#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    headlbl = new QLabel("TOP SECRET");
    textlbl = new QLabel("&Text: ");
    passwordlbl = new QLabel("&Password: ");
    inputText = new QLineEdit;
    inputPassword = new QLineEdit;
    outputText = new QLineEdit;
    enterBtn = new QPushButton("Enter");
    mlayout = new QVBoxLayout;

    textlbl->setBuddy(inputText);
    passwordlbl->setBuddy(inputPassword);

    headlbl->setFrameStyle(QFrame::Box | QFrame::Raised);
    headlbl->setLineWidth(2);
    headlbl->setFixedHeight(50);


    inputPassword->setEchoMode(QLineEdit::Password);
    outputText->setDisabled(true);

    connect(inputText, &QLineEdit::textChanged, outputText, &QLineEdit::setText);
    connect(enterBtn, &QPushButton::clicked, this, &Widget::checkEnter);

    mlayout->addWidget(headlbl);
    mlayout->addWidget(textlbl);
    mlayout->addWidget(outputText);
    mlayout->addWidget(inputText);
    mlayout->addWidget(passwordlbl);
    mlayout->addWidget(inputPassword);
    mlayout->addWidget(enterBtn);

    setLayout(mlayout);

}

Widget::~Widget()
{
}

void Widget::checkEnter()
{
    if (inputText->text() == "123")
    {
        outputText->setText("Accepted!");
    }
    else
    {
        outputText->setText("Wrong input!!!");
    }

    //inputText->clear();
}
