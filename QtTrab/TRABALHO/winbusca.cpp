#include "winbusca.h"
#include "ui_winbusca.h"
#include "Aplicacao.h"
#include <vector>
#include <string.h>
#include <QMessageBox>

WinBusca::WinBusca(QWidget *parent, unsigned f) :
    QDialog(parent),
    ui(new Ui::WinBusca),
    flag(f)
{
    ui->setupUi(this);
}

WinBusca::~WinBusca()
{
    delete ui;
}

void WinBusca::on_Ok_clicked()
{
    QString atributo = ui->lineEditAtributo->text();
    QString elemento = ui->lineEditElementoAtt->text();

    std::string Satributo = atributo.toStdString();
    std::string Selemento = elemento.toStdString();

    std::vector<std::vector<std::string>> result_busca;

    Aplicacao aplicacao;
    result_busca=aplicacao.busca(Satributo, Selemento, flag);

    QString Tuplas="";

    for(int i=0; i<result_busca.size(); i++){
        for(int j=0; j<result_busca[0].size(); j++){
            Tuplas+=(QString::fromUtf8(result_busca[i][j].c_str())+" ");
        }
        Tuplas+="\n";
    }

    QMessageBox::about(this, "adda", Tuplas);

}


void WinBusca::on_Cancelar_clicked()
{
    this->close();
}

