#ifndef SERIALWINDOW_H
#define SERIALWINDOW_H

#include <QDialog>
#include <QDataStream>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

namespace Ui {
class serialwindow;
}

class serialwindow : public QDialog
{
    Q_OBJECT

public:
    explicit serialwindow(QWidget *parent = 0);
    ~serialwindow();
    QString serialname;

public slots:
    void read_data();
    void send_data();
    void clear_data();

private:
    Ui::serialwindow *ui;
    QSerialPort *serial;
};

#endif // SERIALWINDOW_H
