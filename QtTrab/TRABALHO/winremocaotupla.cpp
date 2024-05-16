#include "winremocaotupla.h"
#include "ui_winremocaotupla.h"
#include "Aplicacao.h"
#include <string>

WinRemocaoTupla::WinRemocaoTupla(QWidget *parent, unsigned f) :
    QDialog(parent),
    ui(new Ui::WinRemocaoTupla),
    flag(f)
{
    ui->setupUi(this);
}

WinRemocaoTupla::~WinRemocaoTupla()
{
    delete ui;
}

void WinRemocaoTupla::on_Ok_clicked()
{
    QString atributo = ui->lineEditAtributo->text();
    QString elemento = ui->lineEditElemento->text();

    std::string Satributo = atributo.toStdString();
    std::string Selemento = elemento.toStdString();

    Aplicacao aplicacao;
    aplicacao.remocao(Satributo, Selemento, flag);
    this->close();

}


void WinRemocaoTupla::on_Cancelar_clicked()
{
    this->close();
}

