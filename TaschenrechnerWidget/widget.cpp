#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pbtRechnen_clicked()
{
    int ergebnis;

    if (ui->Zeichen ->currentIndex() == 0) {ergebnis = ui ->Zahl1 ->value() + ui ->Zahl2 ->value();
        ui ->Ergebnis ->setValue(ergebnis);

    }
    else
        if (ui->Zeichen ->currentIndex() == 1) {ergebnis = ui ->Zahl1 ->value() - ui ->Zahl2 ->value();
        ui ->Ergebnis ->setValue(ergebnis);

    }
    else
        if (ui->Zeichen ->currentIndex() == 2) {ergebnis = ui ->Zahl1 ->value() * ui ->Zahl2 ->value();
        ui ->Ergebnis ->setValue(ergebnis);

    }
    else
        if (ui->Zeichen ->currentIndex() == 3) {ergebnis = ui ->Zahl1 ->value() / ui ->Zahl2 ->value();
        ui ->Ergebnis ->setValue(ergebnis);
    }

}


