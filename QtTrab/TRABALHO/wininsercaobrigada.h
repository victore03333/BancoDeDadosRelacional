#ifndef WININSERCAOBRIGADA_H
#define WININSERCAOBRIGADA_H

#include <QDialog>

namespace Ui {
class WinInsercaoBrigada;
}

class WinInsercaoBrigada : public QDialog
{
    Q_OBJECT

public:
    explicit WinInsercaoBrigada(QWidget *parent, unsigned f);
    ~WinInsercaoBrigada();

private slots:
    void on_Ok_clicked();

    void on_Cancelar_clicked();

private:
    Ui::WinInsercaoBrigada *ui;
    unsigned flag;
};

#endif // WININSERCAOBRIGADA_H
