#ifndef HOWTO_H
#define HOWTO_H

#include <QDialog>

namespace Ui {
class Howto;
}

class Howto : public QDialog
{
    Q_OBJECT

public:
    explicit Howto(QWidget *parent = nullptr);
    ~Howto();

public slots:
    void showDescription(const QString &text);

private slots:
    void on_okButton_clicked();

private:
    Ui::Howto *ui;
};

#endif // HOWTO_H
