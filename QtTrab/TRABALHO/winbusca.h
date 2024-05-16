#ifndef WINBUSCA_H
#define WINBUSCA_H

#include <QDialog>

namespace Ui {
class WinBusca;
}

class WinBusca : public QDialog
{
    Q_OBJECT

public:
    explicit WinBusca(QWidget *parent, unsigned f);
    ~WinBusca();

private slots:
    void on_Ok_clicked();

    void on_Cancelar_clicked();

private:
    Ui::WinBusca *ui;
    unsigned flag;
};

#endif // WINBUSCA_H
