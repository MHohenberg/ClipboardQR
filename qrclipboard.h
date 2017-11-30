#ifndef QRCLIPBOARD_H
#define QRCLIPBOARD_H

#include <QMainWindow>

namespace Ui {
class QRClipboard;
}

class QRClipboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit QRClipboard(QWidget *parent = 0);
    ~QRClipboard();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();

private:
    Ui::QRClipboard *ui;

};

#endif // QRCLIPBOARD_H
