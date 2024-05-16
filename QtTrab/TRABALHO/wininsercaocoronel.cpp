#include "wininsercaocoronel.h"
#include "ui_wininsercaocoronel.h"
#include "Aplicacao.h"
#include "vector"
#include "string"

winInsercaoCoronel::winInsercaoCoronel(QWidget *parent, unsigned  f) :
    QDialog(parent),
    ui(new Ui::winInsercaoCoronel),
    flag(f)
{
    ui->setupUi(this);
}

winInsercaoCoronel::~winInsercaoCoronel()
{
    delete ui;
}

void winInsercaoCoronel::on_Ok_clicked()
{
    std::vector<std::string> Ntupla;

    QString idMilirar = ui->lineEditMilitar->text();
    QString nome = ui->lineEditNome->text();
    QString idade = ui->lineEditIdade->text();
    QString datNasc = ui->lineEditDatNasc->text();
    QString CPF = ui->lineEditCPF->text();
    QString idCoronel = ui->lineEditIdCoronel->text();
    QString condecoracao = ui->lineEditCondec->text();

    Ntupla.insert(Ntupla.end(), idMilirar.toStdString());
    Ntupla.insert(Ntupla.end(), nome.toStdString());
    Ntupla.insert(Ntupla.end(), idade.toStdString());
    Ntupla.insert(Ntupla.end(), datNasc.toStdString());
    Ntupla.insert(Ntupla.end(), CPF.toStdString());
    Ntupla.insert(Ntupla.end(), idCoronel.toStdString());
    Ntupla.insert(Ntupla.end(), condecoracao.toStdString());

    Aplicacao aplicacao;
    aplicacao.insercao(Ntupla, flag);
    this->close();
}


void winInsercaoCoronel::on_Cancelar_clicked()
{
    this->close();
}

