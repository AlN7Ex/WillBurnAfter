#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QLabel * headlbl;
    QLabel * textlbl;
    QLabel * passwordlbl;
    QLineEdit * inputText;
    QLineEdit * outputText;
    QLineEdit * inputPassword;
    QPushButton * enterBtn;
    QVBoxLayout * mlayout;
private slots:
    void checkEnter();


};
#endif // WIDGET_H
