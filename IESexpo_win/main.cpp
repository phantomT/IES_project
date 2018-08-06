#include "mainwindow.h"
#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString strpath = QApplication::applicationDirPath();
    strpath += "/icon.ico";

    MainWindow w;
    w.setWindowTitle(QStringLiteral("IES-SHOW"));

    a.setWindowIcon(QIcon(strpath));

    w.show();

    return a.exec();
}
