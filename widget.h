#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QPixmap>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QLabel * lbl;
    QLabel * headlbl;
    QLabel * loginlbl;
    QLabel * passwordlbl;
    QLineEdit * inputLogin;
    QLineEdit * outputText;
    QLineEdit * inputPassword;
    QPushButton * enterBtn;
    QVBoxLayout * mlayout;
    QHBoxLayout * h1layout;
    QHBoxLayout * h2layout;
private slots:
    void checkEnter();


};
#endif // WIDGET_H
