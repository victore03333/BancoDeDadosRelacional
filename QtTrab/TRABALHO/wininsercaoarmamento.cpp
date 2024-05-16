#include "wininsercaoarmamento.h"
#include "ui_wininsercaoarmamento.h"
#include "Aplicacao.h"
#include <vector>
#include <string>

WinInsercaoArmamento::WinInsercaoArmamento(QWidget *parent, unsigned f) :
    QDialog(parent),
    ui(new Ui::WinInsercaoArmamento),
    flag(f)
{
    ui->setupUi(this);
}

WinInsercaoArmamento::~WinInsercaoArmamento()
{
    delete ui;
}

void WinInsercaoArmamento::on_Ok_clicked()
{
    std::vector<std::string> Ntupla;

    QString idArmamento = ui->lineEditIdArm->text();
    QString tipoArma = ui->lineEditTipoArm->text();
    QString nome = ui->lineEditNome->text();
    QString idBatalhao = ui->lineEditidBatalhao->text();
    QString datFabric = ui->lineEditDatFabric->text();
    QString componentes = ui->lineEditComponente->text();


    Ntupla.insert(Ntupla.end(), idArmamento.toStdString());
    Ntupla.insert(Ntupla.end(), tipoArma.toStdString());
    Ntupla.insert(Ntupla.end(), nome.toStdString());
    Ntupla.insert(Ntupla.end(), idBatalhao.toStdString());
    Ntupla.insert(Ntupla.end(), datFabric.toStdString());
    Ntupla.insert(Ntupla.end(), componentes.toStdString());


    Aplicacao aplicacao;
    aplicacao.insercao(Ntupla, flag);
    this->close();
}


void WinInsercaoArmamento::on_Cancelar_clicked()
{
    this->close();
}

