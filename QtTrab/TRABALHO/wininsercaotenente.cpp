#include "wininsercaotenente.h"
#include "ui_wininsercaotenente.h"
#include "Aplicacao.h"

WinInsercaoTenente::WinInsercaoTenente(QWidget *parent, unsigned f) :
    QDialog(parent),
    ui(new Ui::WinInsercaoTenente),
    flag(f)
{
    ui->setupUi(this);
}

WinInsercaoTenente::~WinInsercaoTenente()
{
    delete ui;
}

void WinInsercaoTenente::on_Ok_clicked()
{
    std::vector<std::string> Ntupla;

    QString idMilirar = ui->lineEditMilitar->text();
    QString nome = ui->lineEditNome->text();
    QString idade = ui->lineEditIdade->text();
    QString datNasc = ui->lineEditDatNasc->text();
    QString CPF = ui->lineEditCPF->text();
    QString idTenente = ui->lineEditIdTenente->text();
    QString tempDeComand = ui->lineEditTempComand->text();

    Ntupla.insert(Ntupla.end(), idMilirar.toStdString());
    Ntupla.insert(Ntupla.end(), nome.toStdString());
    Ntupla.insert(Ntupla.end(), idade.toStdString());
    Ntupla.insert(Ntupla.end(), datNasc.toStdString());
    Ntupla.insert(Ntupla.end(), CPF.toStdString());
    Ntupla.insert(Ntupla.end(), idTenente.toStdString());
    Ntupla.insert(Ntupla.end(), tempDeComand.toStdString());

    Aplicacao aplicacao;
    aplicacao.insercao(Ntupla, flag);
    this->close();
}


void WinInsercaoTenente::on_Cancelar_clicked()
{
    this->close();
}

