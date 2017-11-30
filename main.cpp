#include "qrclipboard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QRClipboard w;
    w.show();

    return a.exec();
}
