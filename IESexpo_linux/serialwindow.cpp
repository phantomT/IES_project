#include "serialwindow.h"
#include "ui_serialwindow.h"

serialwindow::serialwindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::serialwindow)
{
    ui->setupUi(this);

    //查找可用端口
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort serial;
        serial.setPort(info);
            if(serial.open(QIODevice::ReadWrite))
            {
                serialname=serial.portName();
                serial.close();
            }
    }

    serial = new QSerialPort;
    serial->setPortName(serialname);
    serial->open(QIODevice::ReadWrite);
    serial->setBaudRate(115200);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    QObject::connect(serial,&QSerialPort::readyRead,this,&serialwindow::read_data);

}

serialwindow::~serialwindow()
{
    delete ui;
}

void serialwindow::read_data()
{
    QByteArray buf;
    buf = serial->readAll();
    if(!buf.isEmpty())
    {
        QString str = ui->recievetxt->toPlainText();
        str += tr(buf);
        ui->recievetxt->clear();
        ui->recievetxt->append(str);
    }
    buf.clear();
}

void serialwindow::send_data()
{
    serial->write("start");
}

void serialwindow::clear_data()
{
    //serial->write("clear");
    ui->recievetxt->clear();
}
