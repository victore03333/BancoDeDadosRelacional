#include "wininsercaobrigada.h"
#include "ui_wininsercaobrigada.h"
#include "Aplicacao.h"
#include <vector>
#include <string>

WinInsercaoBrigada::WinInsercaoBrigada(QWidget *parent, unsigned f) :
    QDialog(parent),
    ui(new Ui::WinInsercaoBrigada),
    flag(f)
{
    ui->setupUi(this);
}

WinInsercaoBrigada::~WinInsercaoBrigada()
{
    delete ui;
}

void WinInsercaoBrigada::on_Ok_clicked()
{
    std::vector<std::string> Ntupla;

    QString idBrigada = ui->lineEditBrigada->text();
    QString setor = ui->lineEditSetor->text();
    QString tipoBrigada = ui->lineEditTipoBrigada->text();
    QString idBatalhao = ui->lineEditIdentbatalhao->text();
    QString idSoldado = ui->lineEditSoldado->text();
    QString idTenente = ui->lineEditIdentTenente->text();


    Ntupla.insert(Ntupla.end(), idBrigada.toStdString());
    Ntupla.insert(Ntupla.end(), setor.toStdString());
    Ntupla.insert(Ntupla.end(), tipoBrigada.toStdString());
    Ntupla.insert(Ntupla.end(), idBatalhao.toStdString());
    Ntupla.insert(Ntupla.end(), idSoldado.toStdString());
    Ntupla.insert(Ntupla.end(), idTenente.toStdString());


    Aplicacao aplicacao;
    aplicacao.insercao(Ntupla, flag);
    this->close();
}


void WinInsercaoBrigada::on_Cancelar_clicked()
{
    this->close();
}

