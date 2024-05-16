#ifndef WININSERCAOBATALHAO_H
#define WININSERCAOBATALHAO_H

#include <QDialog>

namespace Ui {
class WinInsercaoBatalhao;
}

class WinInsercaoBatalhao : public QDialog
{
    Q_OBJECT

public:
    explicit WinInsercaoBatalhao(QWidget *parent, unsigned f);
    ~WinInsercaoBatalhao();

private slots:
    void on_Ok_clicked();

    void on_Cancelar_clicked();

private:
    Ui::WinInsercaoBatalhao *ui;
    unsigned flag;
};

#endif // WININSERCAOBATALHAO_H
