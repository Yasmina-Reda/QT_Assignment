#ifndef SIGNIN_H
#define SIGNIN_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SignIn; }
QT_END_NAMESPACE

class SignIn : public QMainWindow
{
    Q_OBJECT

public:
    SignIn(QWidget *parent = nullptr);
    ~SignIn();

private slots:

    void on_pushButton_signin_clicked();

private:
    Ui::SignIn *ui;
    int size=8;
    QString userN[8]={"Nakajima","Dazai","Kunikida", "Yosano", "Kyoka", "Akutagawa", "Rampo", "Chuuya"};
    QString Pswds[8]={"BBTML18","NLH22", "Doppo22", "TSND25", "DSnow14", "RSHMN20", "WBD26","FTTS22"};
    int AccBalance[8]={10,5000,2500,750,200,3000,500,10000};
};
#endif // SIGNIN_H
