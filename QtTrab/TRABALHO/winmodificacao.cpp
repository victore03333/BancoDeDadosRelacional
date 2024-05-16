#include "winmodificacao.h"
#include "ui_winmodificacao.h"
#include "Aplicacao.h"
#include <string>

WinModificacao::WinModificacao(QWidget *parent, unsigned f) :
    QDialog(parent),
    ui(new Ui::WinModificacao),
    flag(f)
{
    ui->setupUi(this);
}

WinModificacao::~WinModificacao()
{
    delete ui;
}

void WinModificacao::on_Ok_clicked()
{
    QString atributo = ui->lineEditAtributo->text();
    QString elemento = ui->lineEditElemento->text();
    QString novoElemento = ui->lineEditNovoElemento->text();

    std::string Satributo = atributo.toStdString();
    std::string Selemento = elemento.toStdString();
    std::string SnovoElemento = novoElemento.toStdString();

    Aplicacao aplicacao;
    aplicacao.modificacao(Satributo, Selemento, SnovoElemento, flag);
    this->close();
}


void WinModificacao::on_Cancelar_clicked()
{
    this->close();
}

