#include "wininsercaosoldado.h"
#include "ui_wininsercaosoldado.h"
#include "Aplicacao.h"
#include <vector>
#include<string>

WinInsercaoSoldado::WinInsercaoSoldado(QWidget *parent, unsigned f) :
    QDialog(parent),
    ui(new Ui::WinInsercaoSoldado),
    flag(f)
{
    ui->setupUi(this);
}

WinInsercaoSoldado::~WinInsercaoSoldado()
{
    delete ui;
}

void WinInsercaoSoldado::on_Ok_clicked()
{
    std::vector<std::string> Ntupla;

    QString idMilirar = ui->lineEditMilitar->text();
    QString nome = ui->lineEditNome->text();
    QString idade = ui->lineEditIdade->text();
    QString datNasc = ui->lineEditDatNasc->text();
    QString CPF = ui->lineEditCPF->text();
    QString idSoldado = ui->lineEditIdSoldado->text();
    QString datIngress = ui->lineEditDatdeIngress->text();

    Ntupla.insert(Ntupla.end(), idMilirar.toStdString());
    Ntupla.insert(Ntupla.end(), nome.toStdString());
    Ntupla.insert(Ntupla.end(), idade.toStdString());
    Ntupla.insert(Ntupla.end(), datNasc.toStdString());
    Ntupla.insert(Ntupla.end(), CPF.toStdString());
    Ntupla.insert(Ntupla.end(), idSoldado.toStdString());
    Ntupla.insert(Ntupla.end(), datIngress.toStdString());

    Aplicacao aplicacao;
    aplicacao.insercao(Ntupla, flag);
    this->close();
}


void WinInsercaoSoldado::on_Cancelar_clicked()
{
    this->close();
}

