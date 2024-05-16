#ifndef WININSERCAOTENENTE_H
#define WININSERCAOTENENTE_H

#include <QDialog>

namespace Ui {
class WinInsercaoTenente;
}

class WinInsercaoTenente : public QDialog
{
    Q_OBJECT

public:
    explicit WinInsercaoTenente(QWidget *parent, unsigned f);
    ~WinInsercaoTenente();

private slots:
    void on_Ok_clicked();

    void on_Cancelar_clicked();

private:
    Ui::WinInsercaoTenente *ui;
    unsigned flag;
};

#endif // WININSERCAOTENENTE_H
