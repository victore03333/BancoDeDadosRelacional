#ifndef OPERACOES_H
#define OPERACOES_H

#include <QDialog>

namespace Ui {
class Operacoes;
}

class Operacoes : public QDialog
{
    Q_OBJECT

public:
    explicit Operacoes(QWidget *parent, unsigned f);
    ~Operacoes();

private slots:
    void on_pushButtonInsercao_clicked();

    void on_pushButtonRemocao_clicked();

    void on_pushButtonBusca_clicked();

    void on_pushButtonModificacao_clicked();

private:
    Ui::Operacoes *ui;
    unsigned flag;
};

#endif // OPERACOES_H
