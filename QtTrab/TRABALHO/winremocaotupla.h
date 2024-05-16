#ifndef WINREMOCAOTUPLA_H
#define WINREMOCAOTUPLA_H

#include <QDialog>

namespace Ui {
class WinRemocaoTupla;
}

class WinRemocaoTupla : public QDialog
{
    Q_OBJECT

public:
    explicit WinRemocaoTupla(QWidget *parent, unsigned f);
    ~WinRemocaoTupla();

private slots:
    void on_Ok_clicked();

    void on_Cancelar_clicked();

private:
    Ui::WinRemocaoTupla *ui;
    unsigned flag;
};

#endif // WINREMOCAOTUPLA_H
