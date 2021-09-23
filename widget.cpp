#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent),
      lbl           (new QLabel),
      headlbl       (new QLabel("TOP SECRET")),
      loginlbl      (new QLabel("&Login")),
      passwordlbl   (new QLabel("&Password")),
      inputLogin    (new QLineEdit),
      inputPassword (new QLineEdit),
      outputText    (new QLineEdit),
      enterBtn      (new QPushButton("&Enter")),
      mlayout       (new QVBoxLayout),
      h1layout      (new QHBoxLayout),
      h2layout      (new QHBoxLayout)
{
    loginlbl        ->      setBuddy(inputLogin);
    passwordlbl     ->      setBuddy(inputPassword);

    headlbl         ->      setFrameStyle(QFrame::Box | QFrame::Raised);

    inputPassword   ->      setEchoMode(QLineEdit::Password);
    outputText      ->      setDisabled(true);

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
    setMaximumSize(250,250);
    setMinimumSize(200,200);

}

Widget::~Widget()
{
    delete lbl;
    delete headlbl;
    delete loginlbl;
    delete passwordlbl;
    delete inputLogin;
    delete inputPassword;
    delete outputText;
    delete enterBtn;
    delete mlayout;
    delete h1layout;
    delete h2layout;
}

void Widget::checkEnter()
{
    if (inputLogin->text() == "admin" && inputPassword->text() == "12345")
    {
        outputText->setText("Accepted!");
        QPixmap pix("D:/picture.jpeg");
        lbl->resize(pix.size());
        lbl->setPixmap(pix);
        lbl->show();
    }
    else
    {
        outputText->setText("Access denied!");
    }

    inputLogin->clear();
    inputPassword->clear();
}



