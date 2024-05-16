#include "wininsercaobatalhao.h"
#include "ui_wininsercaobatalhao.h"
#include "Aplicacao.h"
#include <vector>
#include <string>

WinInsercaoBatalhao::WinInsercaoBatalhao(QWidget *parent, unsigned f) :
    QDialog(parent),
    ui(new Ui::WinInsercaoBatalhao),
    flag(f)
{
    ui->setupUi(this);
}

WinInsercaoBatalhao::~WinInsercaoBatalhao()
{
    delete ui;
}

void WinInsercaoBatalhao::on_Ok_clicked()
{
    std::vector<std::string> Ntupla;

    QString idBatalhao = ui->lineEditIdBatalhao->text();
    QString cidade = ui->lineEditCidade->text();
    QString endereco = ui->lineEditendereco->text();
    QString idCoronel = ui->lineEditIdCoronel->text();



    Ntupla.insert(Ntupla.end(), idBatalhao.toStdString());
    Ntupla.insert(Ntupla.end(), cidade.toStdString());
    Ntupla.insert(Ntupla.end(), endereco.toStdString());
    Ntupla.insert(Ntupla.end(), idCoronel.toStdString());



    Aplicacao aplicacao;
    aplicacao.insercao(Ntupla, flag);
    this->close();
}


void WinInsercaoBatalhao::on_Cancelar_clicked()
{
    this->close();
}

