#ifndef WIDGET_H
#define WIDGET_H

#include <QLabel>
#include <QLineEdit>
#include <QPixmap>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>


class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
private:
    QLabel      * const lbl;
    QLabel      * const headlbl;
    QLabel      * const loginlbl;
    QLabel      * const passwordlbl;
    QLineEdit   * const inputLogin;
    QLineEdit   * const inputPassword;
    QLineEdit   * const outputText;
    QPushButton * const enterBtn;
    QVBoxLayout * const mlayout;
    QHBoxLayout * const h1layout;
    QHBoxLayout * const h2layout;
private slots:
    void checkEnter();


};
#endif // WIDGET_H
