#include "operacoes.h"
#include "ui_operacoes.h"

#include "wininsercaocoronel.h"
#include "wininsercaotenente.h"
#include "wininsercaosoldado.h"
#include "wininsercaobrigada.h"
#include "wininsercaobatalhao.h"
#include "wininsercaoarmamento.h"
#include "wininsercaomissao.h"

#include "winremocaotupla.h"

#include "winbusca.h"

#include "winmodificacao.h"

Operacoes::Operacoes(QWidget *parent, unsigned f) :
    QDialog(parent),
    ui(new Ui::Operacoes),
    flag(f)
{
    ui->setupUi(this);
}

Operacoes::~Operacoes()
{
    delete ui;
}

void Operacoes::on_pushButtonInsercao_clicked()
{
        if(flag==1){
            winInsercaoCoronel form(nullptr, flag);
            form.exec();
        }
        if(flag==2){
            WinInsercaoTenente form(nullptr, flag);
            form.exec();
        }
        if(flag==3){
            WinInsercaoSoldado form(nullptr, flag);
            form.exec();
        }
        if(flag==4){
            WinInsercaoBrigada form(nullptr, flag);
            form.exec();
        }
        if(flag==5){
            WinInsercaoBatalhao form(nullptr, flag);
            form.exec();
        }
        if(flag==6){
            WinInsercaoArmamento form(nullptr, flag);
            form.exec();
        }
        if(flag==7){
            WinInsercaoMissao form(nullptr, flag);
            form.exec();
        }


}


void Operacoes::on_pushButtonRemocao_clicked()
{
    WinRemocaoTupla form(nullptr, flag);
    form.exec();

}


void Operacoes::on_pushButtonBusca_clicked()
{
    WinBusca form(nullptr, flag);
    form.exec();
}



void Operacoes::on_pushButtonModificacao_clicked()
{
    WinModificacao form(nullptr, flag);
    form.exec();
}

