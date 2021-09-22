#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    lbl = new QLabel;
    QPixmap pix("D:/picture.jpeg");
    lbl->resize(pix.size());
    lbl->setPixmap(pix);

    headlbl = new QLabel("TOP SECRET");
    loginlbl = new QLabel("&Login:");
    passwordlbl = new QLabel("&Password:");
    inputLogin = new QLineEdit;
    inputPassword = new QLineEdit;
    outputText = new QLineEdit;
    enterBtn = new QPushButton("&Enter");
    mlayout = new QVBoxLayout;
    h1layout = new QHBoxLayout;
    h2layout = new QHBoxLayout;

    loginlbl->setBuddy(inputLogin);
    passwordlbl->setBuddy(inputPassword);

    headlbl->setFrameStyle(QFrame::Box | QFrame::Raised);
    headlbl->setLineWidth(2);
    headlbl->setFixedHeight(50);


    inputPassword->setEchoMode(QLineEdit::Password);
    outputText->setDisabled(true);

    connect(enterBtn, &QPushButton::clicked, this, &Widget::checkEnter);

    h1layout->addWidget(loginlbl);
    h1layout->addWidget(inputLogin);
    h2layout->addWidget(passwordlbl);
    h2layout->addWidget(inputPassword);

    mlayout->addWidget(headlbl);
    mlayout->addLayout(h1layout);
    mlayout->addLayout(h2layout);
    mlayout->addWidget(outputText);
    mlayout->addWidget(enterBtn);

    setLayout(mlayout);

}

Widget::~Widget()
{
}

void Widget::checkEnter()
{
    if (inputLogin->text() == "admin" && inputPassword->text() == "12345")
    {
        outputText->setText("Accepted!");
        lbl->show();
    }
    else
    {
        outputText->setText("Access denied!");
    }

    inputLogin->clear();
    inputPassword->clear();
}



