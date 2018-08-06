#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    dlg=new serialwindow;

    MainWindow::init_table();
    //初始化表格

    //初始化标签页默认第一页
    ui->tabWidget->setCurrentIndex(0);

    //隐藏表+居中
    //page1
    ui->powersys_table->verticalHeader()->setVisible(false);
    ui->powersys_table->horizontalHeader()->setStretchLastSection(true);
    ui->powersys_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->gasnode_table->verticalHeader()->setVisible(false);
    ui->gasnode_table->horizontalHeader()->setStretchLastSection(true);
    ui->gasnode_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->gaspipe_table->verticalHeader()->setVisible(false);
    ui->gaspipe_table->horizontalHeader()->setStretchLastSection(true);
    ui->gaspipe_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->heatsys_table->verticalHeader()->setVisible(false);
    ui->heatsys_table->horizontalHeader()->setStretchLastSection(true);
    ui->heatsys_table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    //page2
    ui->elecnode_value->verticalHeader()->setVisible(false);
    ui->elecnode_value->horizontalHeader()->setStretchLastSection(true);
    ui->elecnode_value->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->elecpipe_value->verticalHeader()->setVisible(false);
    ui->elecpipe_value->horizontalHeader()->setStretchLastSection(true);
    ui->elecpipe_value->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->gasnode_value->verticalHeader()->setVisible(false);
    ui->gasnode_value->horizontalHeader()->setStretchLastSection(true);
    ui->gasnode_value->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->gaspipe_value->verticalHeader()->setVisible(false);
    ui->gaspipe_value->horizontalHeader()->setStretchLastSection(true);
    ui->gaspipe_value->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->heatnode_value->verticalHeader()->setVisible(false);
    ui->heatnode_value->horizontalHeader()->setStretchLastSection(true);
    ui->heatnode_value->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->heatpipe_value->verticalHeader()->setVisible(false);
    ui->heatpipe_value->horizontalHeader()->setStretchLastSection(true);
    ui->heatpipe_value->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);



    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget_2->setCurrentIndex(0);

    //tab1
    for(int i=0;i<13;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j<3)
            {
                ui->powersys_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->heatsys_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
            }
            else
            {
                ui->heatsys_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
            }
        }
    }

    for(int i=0;i<7;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(i<6)
            {
                ui->gasnode_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->gaspipe_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
            }
            else
            {
                ui->gasnode_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
            }
        }
    }

    //tab2
    for(int i=0;i<13;i++)
    {
        if(i<5)
        {
            for(int j=0;j<3;j++)
            {
                ui->elecnode_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->elecpipe_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->gaspipe_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->heatnode_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->heatpipe_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
            }
            for(int j=0;j<2;j++)
            {
                ui->gasnode_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
            }
        }
        else if(i>=5 && i<7)
        {
            for(int j=0;j<3;j++)
            {
                ui->elecnode_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->elecpipe_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->gaspipe_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->heatnode_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->heatpipe_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
            }
        }
        else if(i>=7 && i<11)
        {
            for(int j=0;j<3;j++)
            {
                ui->elecnode_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->elecpipe_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->heatnode_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->heatpipe_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
            }
        }
        else if(i>=11 && i<12)
        {
            for(int j=0;j<3;j++)
            {
                ui->elecnode_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->elecpipe_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->heatpipe_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
            }
        }
        else
        {
            for(int j=0;j<3;j++)
            {
                ui->elecnode_value->item(i,j)->setTextAlignment(Qt::AlignCenter);
            }
        }
    }

    ui->powersys_table->setColumnHidden(1,true);
    ui->powersys_table->setColumnHidden(2,false);

    ui->gasnode_table->setColumnHidden(1,true);
    ui->gasnode_table->setColumnHidden(2,false);

    ui->gaspipe_table->setColumnHidden(1,true);
    ui->gaspipe_table->setColumnHidden(2,false);

    ui->heatsys_table->setColumnHidden(1,true);
    ui->heatsys_table->setColumnHidden(3,true);
    ui->heatsys_table->setColumnHidden(2,false);
    ui->heatsys_table->setColumnHidden(4,false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_clicked()
{
    int p = ui->stackedWidget->currentIndex();
    ui->stackedWidget->setCurrentIndex((p+3)%4);

}

void MainWindow::on_pushButton_5_clicked()
{
    int p = ui->stackedWidget->currentIndex();
    ui->stackedWidget->setCurrentIndex((p+5)%4);
}

void MainWindow::on_pushButton_2_clicked()
{
    if(ui->pushButton_2->text() == tr("变成并网"))          //变成并网条件（1）
    {
        ui->pushButton_2->setText(tr("变成不并网"));

        ui->powersys_table->setColumnHidden(1,false);
        ui->powersys_table->setColumnHidden(2,true);

        ui->gasnode_table->setColumnHidden(1,false);
        ui->gasnode_table->setColumnHidden(2,true);

        ui->gaspipe_table->setColumnHidden(1,false);
        ui->gaspipe_table->setColumnHidden(2,true);

        ui->heatsys_table->setColumnHidden(1,false);
        ui->heatsys_table->setColumnHidden(3,false);
        ui->heatsys_table->setColumnHidden(2,true);
        ui->heatsys_table->setColumnHidden(4,true);

    }
    else                                            //变成不并网条件（2）（初始）
    {
        ui->pushButton_2->setText(tr("变成并网"));

        ui->powersys_table->setColumnHidden(1,true);
        ui->powersys_table->setColumnHidden(2,false);

        ui->gasnode_table->setColumnHidden(1,true);
        ui->gasnode_table->setColumnHidden(2,false);

        ui->gaspipe_table->setColumnHidden(1,true);
        ui->gaspipe_table->setColumnHidden(2,false);

        ui->heatsys_table->setColumnHidden(1,true);
        ui->heatsys_table->setColumnHidden(3,true);
        ui->heatsys_table->setColumnHidden(2,false);
        ui->heatsys_table->setColumnHidden(4,false);
    }
}


void MainWindow::init_table()
{
    for(int i=0;i<13;i++)
    {
        for(int j=1;j<=2;j++)
        {
            ui->powersys_table->setItem(i,j,new QTableWidgetItem(ps1[i][j-1]));
            ui->powersys_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
        }

        for(int j=1;j<=2;j++)
        {
            ui->heatsys_table->setItem(i,j,new QTableWidgetItem(ht1_offer[i][j-1]));
            ui->heatsys_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
        }
        for(int j=3;j<=4;j++)
        {
            ui->heatsys_table->setItem(i,j,new QTableWidgetItem(ht1_back[i][j-3]));
            ui->heatsys_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
        }
    }
    for(int i=0;i<7;i++)
    {
        if(i<6)
        {
            for(int j=1;j<=2;j++)
            {
                ui->gasnode_table->setItem(i,j,new QTableWidgetItem(gn1[i][j-1]));
                ui->gaspipe_table->setItem(i,j,new QTableWidgetItem(gp1[i][j-1]));

                ui->gasnode_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->gaspipe_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
            }
        }
        else
        {
            for(int j=1;j<=2;j++)
            {
                ui->gasnode_table->setItem(i,j,new QTableWidgetItem(gn1[i][j-1]));
                ui->gasnode_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
            }
        }
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    int p = ui->stackedWidget_2->currentIndex();
    ui->stackedWidget_2->setCurrentIndex((p+4)%5);
}

void MainWindow::on_pushButton_6_clicked()
{
    int p = ui->stackedWidget_2->currentIndex();
    ui->stackedWidget_2->setCurrentIndex((p+6)%5);
}

void MainWindow::on_pushButton_clicked()
{
    static bool flag = false;

    if(flag==false)
    {
        ui->pushButton->setText(tr("← 还原参数"));

        dlg->setWindowTitle(QStringLiteral("Serialport_Data"));
        dlg->show();
        dlg->clear_data();
        dlg->send_data();

        for(int i=0;i<13;i++)
        {
            for(int j=1;j<=2;j++)
            {
                ui->powersys_table->setItem(i,j,new QTableWidgetItem(ps2[i][j-1]));
                ui->powersys_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->powersys_table->item(i,j)->setBackground(QBrush(QColor(255,255,0,125)));

                ui->heatsys_table->setItem(i,j,new QTableWidgetItem(ht2_offer[i][j-1]));
                ui->heatsys_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->heatsys_table->item(i,j)->setBackground(QBrush(QColor(255,255,0,125)));

                ui->stackedWidget->setCurrentIndex(0);
            }
        }
        ui->heatnode_value->item(0,1)->setText("0.8");
        ui->heatnode_value->item(1,1)->setText("0.6");
        ui->heatnode_value->item(0,1)->setBackground(QBrush(QColor(255,0,0,125)));
        ui->heatnode_value->item(1,1)->setBackground(QBrush(QColor(255,0,0,125)));
    }
    else
    {
        dlg->clear_data();
        dlg->hide();

        ui->pushButton->setText(tr("← 修改参数"));
        for(int i=0;i<13;i++)
        {
            for(int j=1;j<=2;j++)
            {
                ui->powersys_table->setItem(i,j,new QTableWidgetItem(ps1[i][j-1]));
                ui->powersys_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->powersys_table->item(i,j)->setBackground(QBrush(QColor(85, 241, 255)));

                ui->heatsys_table->setItem(i,j,new QTableWidgetItem(ht1_offer[i][j-1]));
                ui->heatsys_table->item(i,j)->setTextAlignment(Qt::AlignCenter);
                ui->heatsys_table->item(i,j)->setBackground(QBrush(QColor(85, 241, 255)));

                ui->stackedWidget->setCurrentIndex(0);
            }
        }
        ui->heatnode_value->item(0,1)->setText("0.2");
        ui->heatnode_value->item(1,1)->setText("0.2");
        ui->heatnode_value->item(0,1)->setBackground(QBrush(QColor(85, 241, 255)));
        ui->heatnode_value->item(1,1)->setBackground(QBrush(QColor(85, 241, 255)));
    }

    flag =!flag;
}
