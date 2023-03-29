#ifndef CART_H
#define CART_H

#include <QDialog>

namespace Ui {
class Cart;
}

class Cart : public QDialog
{
    Q_OBJECT

public:
    explicit Cart(int*, QWidget *parent = nullptr);
    ~Cart();

private slots:
    void on_pushButton_Recharge_clicked();

private:
    Ui::Cart *ui;
    int* balanceRef;
};

#endif // CART_H
