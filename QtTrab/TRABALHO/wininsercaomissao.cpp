#include "wininsercaomissao.h"
#include "ui_wininsercaomissao.h"
#include "Aplicacao.h""
#include <vector>
#include <string>

WinInsercaoMissao::WinInsercaoMissao(QWidget *parent, unsigned f) :
    QDialog(parent),
    ui(new Ui::WinInsercaoMissao),
    flag(f)
{
    ui->setupUi(this);
}

WinInsercaoMissao::~WinInsercaoMissao()
{
    delete ui;
}

void WinInsercaoMissao::on_Ok_clicked()
{
    std::vector<std::string> Ntupla;

    QString idMissao = ui->lineEditIdMissao->text();
    QString TipoMissao = ui->lineEditTipoMissao->text();
    QString objetivo = ui->lineEditObjetivo->text();
    QString idBrigada = ui->lineEditBrigadaResponsavel->text();

    Ntupla.insert(Ntupla.end(), idMissao.toStdString());
    Ntupla.insert(Ntupla.end(), TipoMissao.toStdString());
    Ntupla.insert(Ntupla.end(), objetivo.toStdString());
    Ntupla.insert(Ntupla.end(), idBrigada.toStdString());

    Aplicacao aplicacao;
    aplicacao.insercao(Ntupla, flag);
    this->close();
}


void WinInsercaoMissao::on_Cancelar_clicked()
{
    this->close();
}

