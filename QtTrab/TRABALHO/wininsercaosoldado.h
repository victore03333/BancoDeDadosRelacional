#ifndef WININSERCAOSOLDADO_H
#define WININSERCAOSOLDADO_H

#include <QDialog>

namespace Ui {
class WinInsercaoSoldado;
}

class WinInsercaoSoldado : public QDialog
{
    Q_OBJECT

public:
    explicit WinInsercaoSoldado(QWidget *parent, unsigned f);
    ~WinInsercaoSoldado();

private slots:
    void on_Ok_clicked();

    void on_Cancelar_clicked();

private:
    Ui::WinInsercaoSoldado *ui;
    unsigned flag;
};

#endif // WININSERCAOSOLDADO_H
