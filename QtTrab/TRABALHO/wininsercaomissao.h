#ifndef WININSERCAOMISSAO_H
#define WININSERCAOMISSAO_H

#include <QDialog>

namespace Ui {
class WinInsercaoMissao;
}

class WinInsercaoMissao : public QDialog
{
    Q_OBJECT

public:
    explicit WinInsercaoMissao(QWidget *parent, unsigned f);
    ~WinInsercaoMissao();

private slots:
    void on_Ok_clicked();

    void on_Cancelar_clicked();

private:
    Ui::WinInsercaoMissao *ui;
    unsigned flag;
};

#endif // WININSERCAOMISSAO_H
