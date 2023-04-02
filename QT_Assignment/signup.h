#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>

namespace Ui {
class signUp;
}

class signUp : public QDialog
{
    Q_OBJECT

public:
    explicit signUp(QString[], QString[],int[],int&,int,QWidget *parent = nullptr);
    ~signUp();

private slots:
    void on_pushButton_clicked();

private:
    Ui::signUp *ui;
    bool exist;
    QString* userNames;
    QString* passwords;
    int* accounts;
    int* size;
    int maxSize;
};

#endif // SIGNUP_H
