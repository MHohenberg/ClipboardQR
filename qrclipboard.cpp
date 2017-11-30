#include "qrclipboard.h"
#include "ui_qrclipboard.h"
#include "qfile.h"
#include "qclipboard.h"
#include "qmessagebox.h"
#include <qrencode.h>

QRClipboard::QRClipboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QRClipboard)
{
    ui->setupUi(this);
}

QRClipboard::~QRClipboard()
{
    delete ui;
}

void QRClipboard::on_pushButton_2_clicked()
{
    QApplication::quit();
}

void QRClipboard::on_pushButton_clicked()
{

    QClipboard *q = QApplication::clipboard();
    QString clipContents = q->text();


    ui->qrBereich->setQRData(clipContents);
    ui->qrBereich->repaint();

}
