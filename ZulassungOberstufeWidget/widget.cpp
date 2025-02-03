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





void Widget::on_berechnen_clicked()
{
    int ergebnis;

    if((ui->NoteDeutsch->value()>=5)
        &&(ui->NoteMathe->value()>=5)
        &&(ui->NoteEnglisch->value()>=5)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Zugelassen");

    if ((ui->NoteDeutsch->value()>=5)
        &&(ui->NoteMathe->value()>=5)
        &&(ui->NoteEnglisch->value()>=5)
        &&(ui->NoteLeistungskurs->value()<5))

    ui->Ergebnis->setText("Nicht Zugelassen");

    //Deutsch Unterpunktet//

    if ((ui->NoteDeutsch->value()<5)
        &&(ui->NoteMathe->value()>=7)
        &&(ui->NoteEnglisch->value()>=7)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Zugelassen");

    if ((ui->NoteDeutsch->value()<5)
        &&(ui->NoteMathe->value()>=10)
        &&(ui->NoteEnglisch->value()>=5)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Zugelassen");

    if ((ui->NoteDeutsch->value()<5)
        &&(ui->NoteMathe->value()>=5)
        &&(ui->NoteEnglisch->value()>=10)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Zugelassen");

    if ((ui->NoteDeutsch->value()<5)
        &&(ui->NoteMathe->value()<7)
        &&(ui->NoteEnglisch->value()>=7)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Nicht Zugelassen");

    if ((ui->NoteDeutsch->value()<5)
        &&(ui->NoteMathe->value()>=7)
        &&(ui->NoteEnglisch->value()<7)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Nicht Zugelassen");


    //Mathe Unterpunktet//

    if ((ui->NoteDeutsch->value()>=7)
        &&(ui->NoteMathe->value()<5)
        &&(ui->NoteEnglisch->value()>=7)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Zugelassen");

    if ((ui->NoteDeutsch->value()>=10)
        &&(ui->NoteMathe->value()<5)
        &&(ui->NoteEnglisch->value()>=5)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Zugelassen");

    if ((ui->NoteDeutsch->value()>=5)
        &&(ui->NoteMathe->value()<5)
        &&(ui->NoteEnglisch->value()>=10)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Zugelassen");

    if ((ui->NoteDeutsch->value()<7)
        &&(ui->NoteMathe->value()<5)
        &&(ui->NoteEnglisch->value()>=7)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Nicht Zugelassen");

    if ((ui->NoteDeutsch->value()>=7)
        &&(ui->NoteMathe->value()<5)
        &&(ui->NoteEnglisch->value()<7)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Nicht Zugelassen");

    //Englisch Unterpunktet//

    if ((ui->NoteDeutsch->value()>=7)
        &&(ui->NoteMathe->value()>=7)
        &&(ui->NoteEnglisch->value()<5)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Zugelassen");

    if ((ui->NoteDeutsch->value()>=10)
        &&(ui->NoteMathe->value()>=5)
        &&(ui->NoteEnglisch->value()<5)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Zugelassen");

    if ((ui->NoteDeutsch->value()>=5)
        &&(ui->NoteMathe->value()>=10)
        &&(ui->NoteEnglisch->value()<5)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Zugelassen");

    if ((ui->NoteDeutsch->value()<7)
        &&(ui->NoteMathe->value()>=7)
        &&(ui->NoteEnglisch->value()<5)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Nicht Zugelassen");

    if ((ui->NoteDeutsch->value()>=7)
        &&(ui->NoteMathe->value()<7)
        &&(ui->NoteEnglisch->value()<5)
        &&(ui->NoteLeistungskurs->value()>=5))

    ui->Ergebnis->setText("Nicht Zugelassen");
}


