#ifndef HOWTOMAPPER_H
#define HOWTOMAPPER_H

#include <QDialog>

namespace Ui {
class HowtoMapper;
}

class HowtoMapper : public QDialog
{
    Q_OBJECT

public:
    explicit HowtoMapper(QWidget *parent = nullptr);
    ~HowtoMapper();

private slots:
    void on_pushButton_clicked();

private:
    Ui::HowtoMapper *ui;
};

#endif // HOWTOMAPPER_H
