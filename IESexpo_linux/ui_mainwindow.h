/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_7;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *authorname;
    QStackedWidget *stackedWidget;
    QWidget *ps_table;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QTableWidget *powersys_table;
    QWidget *gn_table;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QTableWidget *gasnode_table;
    QWidget *gp_table;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QTableWidget *gaspipe_table;
    QWidget *hn_table;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QTableWidget *heatsys_table;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_20;
    QTableWidget *heatnode_value;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QComboBox *comboBox;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QComboBox *comboBox_3;
    QLabel *label_9;
    QComboBox *comboBox_4;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QComboBox *comboBox_5;
    QLabel *label_12;
    QComboBox *comboBox_6;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_14;
    QComboBox *comboBox_7;
    QLabel *label_15;
    QComboBox *comboBox_8;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_17;
    QComboBox *comboBox_9;
    QLabel *label_18;
    QComboBox *comboBox_10;
    QLabel *label_19;
    QVBoxLayout *verticalLayout_8;
    QStackedWidget *stackedWidget_2;
    QWidget *page;
    QGridLayout *gridLayout_8;
    QLabel *label_21;
    QTableWidget *elecnode_value;
    QWidget *page_2;
    QGridLayout *gridLayout_9;
    QLabel *label_22;
    QTableWidget *elecpipe_value;
    QWidget *page_3;
    QGridLayout *gridLayout_12;
    QLabel *label_25;
    QTableWidget *heatpipe_value;
    QWidget *page_4;
    QGridLayout *gridLayout_11;
    QLabel *label_24;
    QTableWidget *gasnode_value;
    QWidget *page_5;
    QGridLayout *gridLayout_10;
    QLabel *label_23;
    QTableWidget *gaspipe_value;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QLabel *authorname_2;
    QWidget *tab_3;
    QGridLayout *gridLayout_14;
    QWidget *widget_2;
    QWidget *tab_4;
    QGridLayout *gridLayout_15;
    QWidget *widget_3;
    QWidget *widget_4;
    QWidget *tab_5;
    QGridLayout *gridLayout_13;
    QLabel *label_26;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(709, 412);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(480, 320));
        MainWindow->setMaximumSize(QSize(1920, 1080));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setPointSize(13);
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_7 = new QGridLayout(centralWidget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setEnabled(true);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(140, 0));
        widget->setStyleSheet(QStringLiteral("image: url(:/new/img/IES.png);"));

        verticalLayout->addWidget(widget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMaximumSize(QSize(16777215, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"border-color: rgb(197, 197, 251);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalLayout->setStretch(0, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 6);

        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(8);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMaximumSize(QSize(16777215, 50));
        pushButton_4->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(170, 170, 255);"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(tab);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setMaximumSize(QSize(16777215, 50));
        pushButton_5->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color: rgb(170, 170, 255);"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        authorname = new QLabel(tab);
        authorname->setObjectName(QStringLiteral("authorname"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(authorname->sizePolicy().hasHeightForWidth());
        authorname->setSizePolicy(sizePolicy1);
        authorname->setMinimumSize(QSize(139, 30));
        authorname->setMaximumSize(QSize(16777215, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Viner Hand ITC"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        authorname->setFont(font2);
        authorname->setCursor(QCursor(Qt::BlankCursor));
        authorname->setStyleSheet(QStringLiteral("font: 10pt \"Viner Hand ITC\";"));
        authorname->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(authorname, 1, 2, 1, 1);

        stackedWidget = new QStackedWidget(tab);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(0, 0));
        stackedWidget->setBaseSize(QSize(0, 300));
        stackedWidget->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(85, 241, 255);"));
        ps_table = new QWidget();
        ps_table->setObjectName(QStringLiteral("ps_table"));
        gridLayout_3 = new QGridLayout(ps_table);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setSizeConstraint(QLayout::SetNoConstraint);
        label = new QLabel(ps_table);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);
        label->setMaximumSize(QSize(16777215, 50));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label);

        powersys_table = new QTableWidget(ps_table);
        if (powersys_table->columnCount() < 3)
            powersys_table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        powersys_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        powersys_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        powersys_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (powersys_table->rowCount() < 13)
            powersys_table->setRowCount(13);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        powersys_table->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        powersys_table->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        powersys_table->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        powersys_table->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        powersys_table->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        powersys_table->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        powersys_table->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        powersys_table->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        powersys_table->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        powersys_table->setVerticalHeaderItem(9, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        powersys_table->setVerticalHeaderItem(10, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        powersys_table->setVerticalHeaderItem(11, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        powersys_table->setVerticalHeaderItem(12, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(0, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(0, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(0, 2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(1, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(1, 1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(1, 2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(2, 0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(2, 1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(2, 2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(3, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(3, 1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(3, 2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(4, 0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(4, 1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(4, 2, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(5, 0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(5, 1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(5, 2, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(6, 0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(6, 1, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(6, 2, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(7, 0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(7, 1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(7, 2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(8, 0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(8, 1, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(8, 2, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(9, 0, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(9, 1, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(9, 2, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(10, 0, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(10, 1, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(10, 2, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(11, 0, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(11, 1, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(11, 2, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        __qtablewidgetitem52->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(12, 0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        __qtablewidgetitem53->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(12, 1, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        __qtablewidgetitem54->setTextAlignment(Qt::AlignCenter);
        powersys_table->setItem(12, 2, __qtablewidgetitem54);
        powersys_table->setObjectName(QStringLiteral("powersys_table"));
        powersys_table->setEnabled(true);
        powersys_table->setAutoScroll(true);
        powersys_table->setShowGrid(true);
        powersys_table->setGridStyle(Qt::DashLine);
        powersys_table->setSortingEnabled(false);
        powersys_table->setWordWrap(true);
        powersys_table->setCornerButtonEnabled(true);

        verticalLayout_3->addWidget(powersys_table);


        gridLayout_3->addLayout(verticalLayout_3, 0, 0, 1, 1);

        stackedWidget->addWidget(ps_table);
        gn_table = new QWidget();
        gn_table->setObjectName(QStringLiteral("gn_table"));
        gridLayout_4 = new QGridLayout(gn_table);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_2 = new QLabel(gn_table);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);
        label_2->setMaximumSize(QSize(16777215, 50));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);

        gasnode_table = new QTableWidget(gn_table);
        if (gasnode_table->columnCount() < 3)
            gasnode_table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        gasnode_table->setHorizontalHeaderItem(0, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        gasnode_table->setHorizontalHeaderItem(1, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        gasnode_table->setHorizontalHeaderItem(2, __qtablewidgetitem57);
        if (gasnode_table->rowCount() < 7)
            gasnode_table->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        gasnode_table->setVerticalHeaderItem(0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        gasnode_table->setVerticalHeaderItem(1, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        gasnode_table->setVerticalHeaderItem(2, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        gasnode_table->setVerticalHeaderItem(3, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        gasnode_table->setVerticalHeaderItem(4, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        gasnode_table->setVerticalHeaderItem(5, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        gasnode_table->setVerticalHeaderItem(6, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        gasnode_table->setItem(0, 0, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        gasnode_table->setItem(1, 0, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        gasnode_table->setItem(2, 0, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        gasnode_table->setItem(3, 0, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        gasnode_table->setItem(4, 0, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        gasnode_table->setItem(5, 0, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        gasnode_table->setItem(6, 0, __qtablewidgetitem71);
        gasnode_table->setObjectName(QStringLiteral("gasnode_table"));
        gasnode_table->setGridStyle(Qt::DashLine);

        verticalLayout_4->addWidget(gasnode_table);


        gridLayout_4->addLayout(verticalLayout_4, 0, 0, 1, 1);

        stackedWidget->addWidget(gn_table);
        gp_table = new QWidget();
        gp_table->setObjectName(QStringLiteral("gp_table"));
        gridLayout_5 = new QGridLayout(gp_table);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_3 = new QLabel(gp_table);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setMaximumSize(QSize(16777215, 50));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);

        gaspipe_table = new QTableWidget(gp_table);
        if (gaspipe_table->columnCount() < 3)
            gaspipe_table->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        gaspipe_table->setHorizontalHeaderItem(0, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        gaspipe_table->setHorizontalHeaderItem(1, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        gaspipe_table->setHorizontalHeaderItem(2, __qtablewidgetitem74);
        if (gaspipe_table->rowCount() < 6)
            gaspipe_table->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        gaspipe_table->setVerticalHeaderItem(0, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        gaspipe_table->setVerticalHeaderItem(1, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        gaspipe_table->setVerticalHeaderItem(2, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        gaspipe_table->setVerticalHeaderItem(3, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        gaspipe_table->setVerticalHeaderItem(4, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        gaspipe_table->setVerticalHeaderItem(5, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        __qtablewidgetitem81->setTextAlignment(Qt::AlignCenter);
        gaspipe_table->setItem(0, 0, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        __qtablewidgetitem82->setTextAlignment(Qt::AlignCenter);
        gaspipe_table->setItem(1, 0, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        __qtablewidgetitem83->setTextAlignment(Qt::AlignCenter);
        gaspipe_table->setItem(2, 0, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        __qtablewidgetitem84->setTextAlignment(Qt::AlignCenter);
        gaspipe_table->setItem(3, 0, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        __qtablewidgetitem85->setTextAlignment(Qt::AlignCenter);
        gaspipe_table->setItem(4, 0, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        __qtablewidgetitem86->setTextAlignment(Qt::AlignCenter);
        gaspipe_table->setItem(5, 0, __qtablewidgetitem86);
        gaspipe_table->setObjectName(QStringLiteral("gaspipe_table"));
        gaspipe_table->setTextElideMode(Qt::ElideRight);
        gaspipe_table->setGridStyle(Qt::DashLine);

        verticalLayout_5->addWidget(gaspipe_table);


        gridLayout_5->addLayout(verticalLayout_5, 0, 0, 1, 1);

        stackedWidget->addWidget(gp_table);
        hn_table = new QWidget();
        hn_table->setObjectName(QStringLiteral("hn_table"));
        gridLayout_6 = new QGridLayout(hn_table);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(hn_table);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);
        label_4->setMaximumSize(QSize(16777215, 50));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        heatsys_table = new QTableWidget(hn_table);
        if (heatsys_table->columnCount() < 5)
            heatsys_table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        heatsys_table->setHorizontalHeaderItem(0, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        heatsys_table->setHorizontalHeaderItem(1, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        heatsys_table->setHorizontalHeaderItem(2, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        heatsys_table->setHorizontalHeaderItem(3, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        heatsys_table->setHorizontalHeaderItem(4, __qtablewidgetitem91);
        if (heatsys_table->rowCount() < 13)
            heatsys_table->setRowCount(13);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        heatsys_table->setVerticalHeaderItem(0, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        heatsys_table->setVerticalHeaderItem(1, __qtablewidgetitem93);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        heatsys_table->setVerticalHeaderItem(2, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        heatsys_table->setVerticalHeaderItem(3, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        heatsys_table->setVerticalHeaderItem(4, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        heatsys_table->setVerticalHeaderItem(5, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        heatsys_table->setVerticalHeaderItem(6, __qtablewidgetitem98);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        heatsys_table->setVerticalHeaderItem(7, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        heatsys_table->setVerticalHeaderItem(8, __qtablewidgetitem100);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        heatsys_table->setVerticalHeaderItem(9, __qtablewidgetitem101);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        heatsys_table->setVerticalHeaderItem(10, __qtablewidgetitem102);
        QTableWidgetItem *__qtablewidgetitem103 = new QTableWidgetItem();
        heatsys_table->setVerticalHeaderItem(11, __qtablewidgetitem103);
        QTableWidgetItem *__qtablewidgetitem104 = new QTableWidgetItem();
        heatsys_table->setVerticalHeaderItem(12, __qtablewidgetitem104);
        QTableWidgetItem *__qtablewidgetitem105 = new QTableWidgetItem();
        heatsys_table->setItem(0, 0, __qtablewidgetitem105);
        QTableWidgetItem *__qtablewidgetitem106 = new QTableWidgetItem();
        __qtablewidgetitem106->setTextAlignment(Qt::AlignCenter);
        heatsys_table->setItem(0, 1, __qtablewidgetitem106);
        QTableWidgetItem *__qtablewidgetitem107 = new QTableWidgetItem();
        heatsys_table->setItem(1, 0, __qtablewidgetitem107);
        QTableWidgetItem *__qtablewidgetitem108 = new QTableWidgetItem();
        heatsys_table->setItem(2, 0, __qtablewidgetitem108);
        QTableWidgetItem *__qtablewidgetitem109 = new QTableWidgetItem();
        heatsys_table->setItem(3, 0, __qtablewidgetitem109);
        QTableWidgetItem *__qtablewidgetitem110 = new QTableWidgetItem();
        heatsys_table->setItem(4, 0, __qtablewidgetitem110);
        QTableWidgetItem *__qtablewidgetitem111 = new QTableWidgetItem();
        heatsys_table->setItem(5, 0, __qtablewidgetitem111);
        QTableWidgetItem *__qtablewidgetitem112 = new QTableWidgetItem();
        heatsys_table->setItem(6, 0, __qtablewidgetitem112);
        QTableWidgetItem *__qtablewidgetitem113 = new QTableWidgetItem();
        heatsys_table->setItem(7, 0, __qtablewidgetitem113);
        QTableWidgetItem *__qtablewidgetitem114 = new QTableWidgetItem();
        heatsys_table->setItem(8, 0, __qtablewidgetitem114);
        QTableWidgetItem *__qtablewidgetitem115 = new QTableWidgetItem();
        heatsys_table->setItem(9, 0, __qtablewidgetitem115);
        QTableWidgetItem *__qtablewidgetitem116 = new QTableWidgetItem();
        heatsys_table->setItem(10, 0, __qtablewidgetitem116);
        QTableWidgetItem *__qtablewidgetitem117 = new QTableWidgetItem();
        heatsys_table->setItem(11, 0, __qtablewidgetitem117);
        QTableWidgetItem *__qtablewidgetitem118 = new QTableWidgetItem();
        heatsys_table->setItem(12, 0, __qtablewidgetitem118);
        heatsys_table->setObjectName(QStringLiteral("heatsys_table"));
        sizePolicy.setHeightForWidth(heatsys_table->sizePolicy().hasHeightForWidth());
        heatsys_table->setSizePolicy(sizePolicy);
        heatsys_table->setMinimumSize(QSize(299, 305));
        heatsys_table->setGridStyle(Qt::DashLine);
        heatsys_table->horizontalHeader()->setCascadingSectionResizes(false);
        heatsys_table->horizontalHeader()->setStretchLastSection(false);
        heatsys_table->verticalHeader()->setCascadingSectionResizes(false);
        heatsys_table->verticalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(heatsys_table);


        gridLayout_6->addLayout(verticalLayout_2, 0, 0, 1, 1);

        stackedWidget->addWidget(hn_table);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 3);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_8 = new QHBoxLayout(tab_2);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        sizePolicy2.setHeightForWidth(label_20->sizePolicy().hasHeightForWidth());
        label_20->setSizePolicy(sizePolicy2);
        label_20->setFont(font1);
        label_20->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(85, 241, 255);"));
        label_20->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_20);

        heatnode_value = new QTableWidget(tab_2);
        if (heatnode_value->columnCount() < 3)
            heatnode_value->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem119 = new QTableWidgetItem();
        heatnode_value->setHorizontalHeaderItem(0, __qtablewidgetitem119);
        QTableWidgetItem *__qtablewidgetitem120 = new QTableWidgetItem();
        heatnode_value->setHorizontalHeaderItem(1, __qtablewidgetitem120);
        QTableWidgetItem *__qtablewidgetitem121 = new QTableWidgetItem();
        heatnode_value->setHorizontalHeaderItem(2, __qtablewidgetitem121);
        if (heatnode_value->rowCount() < 11)
            heatnode_value->setRowCount(11);
        QTableWidgetItem *__qtablewidgetitem122 = new QTableWidgetItem();
        heatnode_value->setVerticalHeaderItem(0, __qtablewidgetitem122);
        QTableWidgetItem *__qtablewidgetitem123 = new QTableWidgetItem();
        heatnode_value->setVerticalHeaderItem(1, __qtablewidgetitem123);
        QTableWidgetItem *__qtablewidgetitem124 = new QTableWidgetItem();
        heatnode_value->setVerticalHeaderItem(2, __qtablewidgetitem124);
        QTableWidgetItem *__qtablewidgetitem125 = new QTableWidgetItem();
        heatnode_value->setVerticalHeaderItem(3, __qtablewidgetitem125);
        QTableWidgetItem *__qtablewidgetitem126 = new QTableWidgetItem();
        heatnode_value->setVerticalHeaderItem(4, __qtablewidgetitem126);
        QTableWidgetItem *__qtablewidgetitem127 = new QTableWidgetItem();
        heatnode_value->setVerticalHeaderItem(5, __qtablewidgetitem127);
        QTableWidgetItem *__qtablewidgetitem128 = new QTableWidgetItem();
        heatnode_value->setVerticalHeaderItem(6, __qtablewidgetitem128);
        QTableWidgetItem *__qtablewidgetitem129 = new QTableWidgetItem();
        heatnode_value->setVerticalHeaderItem(7, __qtablewidgetitem129);
        QTableWidgetItem *__qtablewidgetitem130 = new QTableWidgetItem();
        heatnode_value->setVerticalHeaderItem(8, __qtablewidgetitem130);
        QTableWidgetItem *__qtablewidgetitem131 = new QTableWidgetItem();
        heatnode_value->setVerticalHeaderItem(9, __qtablewidgetitem131);
        QTableWidgetItem *__qtablewidgetitem132 = new QTableWidgetItem();
        heatnode_value->setVerticalHeaderItem(10, __qtablewidgetitem132);
        QTableWidgetItem *__qtablewidgetitem133 = new QTableWidgetItem();
        heatnode_value->setItem(0, 0, __qtablewidgetitem133);
        QTableWidgetItem *__qtablewidgetitem134 = new QTableWidgetItem();
        heatnode_value->setItem(0, 1, __qtablewidgetitem134);
        QTableWidgetItem *__qtablewidgetitem135 = new QTableWidgetItem();
        heatnode_value->setItem(0, 2, __qtablewidgetitem135);
        QTableWidgetItem *__qtablewidgetitem136 = new QTableWidgetItem();
        heatnode_value->setItem(1, 0, __qtablewidgetitem136);
        QTableWidgetItem *__qtablewidgetitem137 = new QTableWidgetItem();
        heatnode_value->setItem(1, 1, __qtablewidgetitem137);
        QTableWidgetItem *__qtablewidgetitem138 = new QTableWidgetItem();
        heatnode_value->setItem(1, 2, __qtablewidgetitem138);
        QTableWidgetItem *__qtablewidgetitem139 = new QTableWidgetItem();
        heatnode_value->setItem(2, 0, __qtablewidgetitem139);
        QTableWidgetItem *__qtablewidgetitem140 = new QTableWidgetItem();
        heatnode_value->setItem(2, 1, __qtablewidgetitem140);
        QTableWidgetItem *__qtablewidgetitem141 = new QTableWidgetItem();
        heatnode_value->setItem(2, 2, __qtablewidgetitem141);
        QTableWidgetItem *__qtablewidgetitem142 = new QTableWidgetItem();
        heatnode_value->setItem(3, 0, __qtablewidgetitem142);
        QTableWidgetItem *__qtablewidgetitem143 = new QTableWidgetItem();
        heatnode_value->setItem(3, 1, __qtablewidgetitem143);
        QTableWidgetItem *__qtablewidgetitem144 = new QTableWidgetItem();
        heatnode_value->setItem(3, 2, __qtablewidgetitem144);
        QTableWidgetItem *__qtablewidgetitem145 = new QTableWidgetItem();
        heatnode_value->setItem(4, 0, __qtablewidgetitem145);
        QTableWidgetItem *__qtablewidgetitem146 = new QTableWidgetItem();
        heatnode_value->setItem(4, 1, __qtablewidgetitem146);
        QTableWidgetItem *__qtablewidgetitem147 = new QTableWidgetItem();
        heatnode_value->setItem(4, 2, __qtablewidgetitem147);
        QTableWidgetItem *__qtablewidgetitem148 = new QTableWidgetItem();
        heatnode_value->setItem(5, 0, __qtablewidgetitem148);
        QTableWidgetItem *__qtablewidgetitem149 = new QTableWidgetItem();
        heatnode_value->setItem(5, 1, __qtablewidgetitem149);
        QTableWidgetItem *__qtablewidgetitem150 = new QTableWidgetItem();
        heatnode_value->setItem(5, 2, __qtablewidgetitem150);
        QTableWidgetItem *__qtablewidgetitem151 = new QTableWidgetItem();
        heatnode_value->setItem(6, 0, __qtablewidgetitem151);
        QTableWidgetItem *__qtablewidgetitem152 = new QTableWidgetItem();
        heatnode_value->setItem(6, 1, __qtablewidgetitem152);
        QTableWidgetItem *__qtablewidgetitem153 = new QTableWidgetItem();
        heatnode_value->setItem(6, 2, __qtablewidgetitem153);
        QTableWidgetItem *__qtablewidgetitem154 = new QTableWidgetItem();
        heatnode_value->setItem(7, 0, __qtablewidgetitem154);
        QTableWidgetItem *__qtablewidgetitem155 = new QTableWidgetItem();
        heatnode_value->setItem(7, 1, __qtablewidgetitem155);
        QTableWidgetItem *__qtablewidgetitem156 = new QTableWidgetItem();
        heatnode_value->setItem(7, 2, __qtablewidgetitem156);
        QTableWidgetItem *__qtablewidgetitem157 = new QTableWidgetItem();
        heatnode_value->setItem(8, 0, __qtablewidgetitem157);
        QTableWidgetItem *__qtablewidgetitem158 = new QTableWidgetItem();
        heatnode_value->setItem(8, 1, __qtablewidgetitem158);
        QTableWidgetItem *__qtablewidgetitem159 = new QTableWidgetItem();
        heatnode_value->setItem(8, 2, __qtablewidgetitem159);
        QTableWidgetItem *__qtablewidgetitem160 = new QTableWidgetItem();
        heatnode_value->setItem(9, 0, __qtablewidgetitem160);
        QTableWidgetItem *__qtablewidgetitem161 = new QTableWidgetItem();
        heatnode_value->setItem(9, 1, __qtablewidgetitem161);
        QTableWidgetItem *__qtablewidgetitem162 = new QTableWidgetItem();
        heatnode_value->setItem(9, 2, __qtablewidgetitem162);
        QTableWidgetItem *__qtablewidgetitem163 = new QTableWidgetItem();
        heatnode_value->setItem(10, 0, __qtablewidgetitem163);
        QTableWidgetItem *__qtablewidgetitem164 = new QTableWidgetItem();
        heatnode_value->setItem(10, 1, __qtablewidgetitem164);
        QTableWidgetItem *__qtablewidgetitem165 = new QTableWidgetItem();
        heatnode_value->setItem(10, 2, __qtablewidgetitem165);
        heatnode_value->setObjectName(QStringLiteral("heatnode_value"));
        heatnode_value->setStyleSheet(QStringLiteral("background-color: rgb(85, 241, 255);"));

        verticalLayout_7->addWidget(heatnode_value);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);
        label_5->setMinimumSize(QSize(0, 12));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(label_5);

        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(comboBox);

        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);
        label_6->setMinimumSize(QSize(0, 12));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(label_6);

        comboBox_2 = new QComboBox(tab_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        sizePolicy2.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(comboBox_2);

        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setMinimumSize(QSize(0, 12));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(label_7);

        horizontalLayout_2->setStretch(4, 3);

        verticalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setMinimumSize(QSize(0, 12));
        label_8->setFont(font3);
        label_8->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_3->addWidget(label_8);

        comboBox_3 = new QComboBox(tab_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        sizePolicy2.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(comboBox_3);

        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setMinimumSize(QSize(0, 12));
        label_9->setFont(font3);
        label_9->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_3->addWidget(label_9);

        comboBox_4 = new QComboBox(tab_2);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        sizePolicy2.setHeightForWidth(comboBox_4->sizePolicy().hasHeightForWidth());
        comboBox_4->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(comboBox_4);

        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);
        label_10->setMinimumSize(QSize(0, 12));
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_3->addWidget(label_10);

        horizontalLayout_3->setStretch(4, 3);

        verticalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_11 = new QLabel(tab_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);
        label_11->setMinimumSize(QSize(0, 12));
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_4->addWidget(label_11);

        comboBox_5 = new QComboBox(tab_2);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        sizePolicy2.setHeightForWidth(comboBox_5->sizePolicy().hasHeightForWidth());
        comboBox_5->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(comboBox_5);

        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy2.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy2);
        label_12->setMinimumSize(QSize(0, 12));
        label_12->setFont(font3);
        label_12->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_4->addWidget(label_12);

        comboBox_6 = new QComboBox(tab_2);
        comboBox_6->setObjectName(QStringLiteral("comboBox_6"));
        sizePolicy2.setHeightForWidth(comboBox_6->sizePolicy().hasHeightForWidth());
        comboBox_6->setSizePolicy(sizePolicy2);

        horizontalLayout_4->addWidget(comboBox_6);

        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        sizePolicy2.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy2);
        label_13->setMinimumSize(QSize(0, 12));
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_4->addWidget(label_13);

        horizontalLayout_4->setStretch(4, 3);

        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);
        label_14->setMinimumSize(QSize(0, 12));
        label_14->setFont(font3);
        label_14->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_5->addWidget(label_14);

        comboBox_7 = new QComboBox(tab_2);
        comboBox_7->setObjectName(QStringLiteral("comboBox_7"));
        sizePolicy2.setHeightForWidth(comboBox_7->sizePolicy().hasHeightForWidth());
        comboBox_7->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(comboBox_7);

        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy2.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy2);
        label_15->setMinimumSize(QSize(0, 12));
        label_15->setFont(font3);
        label_15->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_5->addWidget(label_15);

        comboBox_8 = new QComboBox(tab_2);
        comboBox_8->setObjectName(QStringLiteral("comboBox_8"));
        sizePolicy2.setHeightForWidth(comboBox_8->sizePolicy().hasHeightForWidth());
        comboBox_8->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(comboBox_8);

        label_16 = new QLabel(tab_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        sizePolicy2.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy2);
        label_16->setMinimumSize(QSize(0, 12));
        label_16->setFont(font3);
        label_16->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_5->addWidget(label_16);

        horizontalLayout_5->setStretch(4, 3);

        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        sizePolicy2.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy2);
        label_17->setMinimumSize(QSize(0, 12));
        label_17->setFont(font3);
        label_17->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_6->addWidget(label_17);

        comboBox_9 = new QComboBox(tab_2);
        comboBox_9->setObjectName(QStringLiteral("comboBox_9"));
        sizePolicy2.setHeightForWidth(comboBox_9->sizePolicy().hasHeightForWidth());
        comboBox_9->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(comboBox_9);

        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        sizePolicy2.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy2);
        label_18->setMinimumSize(QSize(0, 12));
        label_18->setFont(font3);
        label_18->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_6->addWidget(label_18);

        comboBox_10 = new QComboBox(tab_2);
        comboBox_10->setObjectName(QStringLiteral("comboBox_10"));
        sizePolicy2.setHeightForWidth(comboBox_10->sizePolicy().hasHeightForWidth());
        comboBox_10->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(comboBox_10);

        label_19 = new QLabel(tab_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        sizePolicy2.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy2);
        label_19->setMinimumSize(QSize(0, 12));
        label_19->setFont(font3);
        label_19->setStyleSheet(QString::fromUtf8("font: 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_6->addWidget(label_19);

        horizontalLayout_6->setStretch(4, 3);

        verticalLayout_6->addLayout(horizontalLayout_6);


        verticalLayout_7->addLayout(verticalLayout_6);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 6);
        verticalLayout_7->setStretch(2, 3);

        horizontalLayout_8->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        stackedWidget_2 = new QStackedWidget(tab_2);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setStyleSheet(QStringLiteral("background-color: rgb(85, 241, 255);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        gridLayout_8 = new QGridLayout(page);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_21 = new QLabel(page);
        label_21->setObjectName(QStringLiteral("label_21"));
        sizePolicy2.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy2);
        label_21->setFont(font1);
        label_21->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_21->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_21, 0, 0, 1, 1);

        elecnode_value = new QTableWidget(page);
        if (elecnode_value->columnCount() < 3)
            elecnode_value->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem166 = new QTableWidgetItem();
        elecnode_value->setHorizontalHeaderItem(0, __qtablewidgetitem166);
        QTableWidgetItem *__qtablewidgetitem167 = new QTableWidgetItem();
        elecnode_value->setHorizontalHeaderItem(1, __qtablewidgetitem167);
        QTableWidgetItem *__qtablewidgetitem168 = new QTableWidgetItem();
        elecnode_value->setHorizontalHeaderItem(2, __qtablewidgetitem168);
        if (elecnode_value->rowCount() < 13)
            elecnode_value->setRowCount(13);
        QTableWidgetItem *__qtablewidgetitem169 = new QTableWidgetItem();
        elecnode_value->setVerticalHeaderItem(0, __qtablewidgetitem169);
        QTableWidgetItem *__qtablewidgetitem170 = new QTableWidgetItem();
        elecnode_value->setVerticalHeaderItem(1, __qtablewidgetitem170);
        QTableWidgetItem *__qtablewidgetitem171 = new QTableWidgetItem();
        elecnode_value->setVerticalHeaderItem(2, __qtablewidgetitem171);
        QTableWidgetItem *__qtablewidgetitem172 = new QTableWidgetItem();
        elecnode_value->setVerticalHeaderItem(3, __qtablewidgetitem172);
        QTableWidgetItem *__qtablewidgetitem173 = new QTableWidgetItem();
        elecnode_value->setVerticalHeaderItem(4, __qtablewidgetitem173);
        QTableWidgetItem *__qtablewidgetitem174 = new QTableWidgetItem();
        elecnode_value->setVerticalHeaderItem(5, __qtablewidgetitem174);
        QTableWidgetItem *__qtablewidgetitem175 = new QTableWidgetItem();
        elecnode_value->setVerticalHeaderItem(6, __qtablewidgetitem175);
        QTableWidgetItem *__qtablewidgetitem176 = new QTableWidgetItem();
        elecnode_value->setVerticalHeaderItem(7, __qtablewidgetitem176);
        QTableWidgetItem *__qtablewidgetitem177 = new QTableWidgetItem();
        elecnode_value->setVerticalHeaderItem(8, __qtablewidgetitem177);
        QTableWidgetItem *__qtablewidgetitem178 = new QTableWidgetItem();
        elecnode_value->setVerticalHeaderItem(9, __qtablewidgetitem178);
        QTableWidgetItem *__qtablewidgetitem179 = new QTableWidgetItem();
        elecnode_value->setVerticalHeaderItem(10, __qtablewidgetitem179);
        QTableWidgetItem *__qtablewidgetitem180 = new QTableWidgetItem();
        elecnode_value->setVerticalHeaderItem(11, __qtablewidgetitem180);
        QTableWidgetItem *__qtablewidgetitem181 = new QTableWidgetItem();
        elecnode_value->setVerticalHeaderItem(12, __qtablewidgetitem181);
        QTableWidgetItem *__qtablewidgetitem182 = new QTableWidgetItem();
        elecnode_value->setItem(0, 0, __qtablewidgetitem182);
        QTableWidgetItem *__qtablewidgetitem183 = new QTableWidgetItem();
        elecnode_value->setItem(0, 1, __qtablewidgetitem183);
        QTableWidgetItem *__qtablewidgetitem184 = new QTableWidgetItem();
        elecnode_value->setItem(0, 2, __qtablewidgetitem184);
        QTableWidgetItem *__qtablewidgetitem185 = new QTableWidgetItem();
        elecnode_value->setItem(1, 0, __qtablewidgetitem185);
        QTableWidgetItem *__qtablewidgetitem186 = new QTableWidgetItem();
        elecnode_value->setItem(1, 1, __qtablewidgetitem186);
        QTableWidgetItem *__qtablewidgetitem187 = new QTableWidgetItem();
        elecnode_value->setItem(1, 2, __qtablewidgetitem187);
        QTableWidgetItem *__qtablewidgetitem188 = new QTableWidgetItem();
        elecnode_value->setItem(2, 0, __qtablewidgetitem188);
        QTableWidgetItem *__qtablewidgetitem189 = new QTableWidgetItem();
        elecnode_value->setItem(2, 1, __qtablewidgetitem189);
        QTableWidgetItem *__qtablewidgetitem190 = new QTableWidgetItem();
        elecnode_value->setItem(2, 2, __qtablewidgetitem190);
        QTableWidgetItem *__qtablewidgetitem191 = new QTableWidgetItem();
        elecnode_value->setItem(3, 0, __qtablewidgetitem191);
        QTableWidgetItem *__qtablewidgetitem192 = new QTableWidgetItem();
        elecnode_value->setItem(3, 1, __qtablewidgetitem192);
        QTableWidgetItem *__qtablewidgetitem193 = new QTableWidgetItem();
        elecnode_value->setItem(3, 2, __qtablewidgetitem193);
        QTableWidgetItem *__qtablewidgetitem194 = new QTableWidgetItem();
        elecnode_value->setItem(4, 0, __qtablewidgetitem194);
        QTableWidgetItem *__qtablewidgetitem195 = new QTableWidgetItem();
        elecnode_value->setItem(4, 1, __qtablewidgetitem195);
        QTableWidgetItem *__qtablewidgetitem196 = new QTableWidgetItem();
        elecnode_value->setItem(4, 2, __qtablewidgetitem196);
        QTableWidgetItem *__qtablewidgetitem197 = new QTableWidgetItem();
        elecnode_value->setItem(5, 0, __qtablewidgetitem197);
        QTableWidgetItem *__qtablewidgetitem198 = new QTableWidgetItem();
        elecnode_value->setItem(5, 1, __qtablewidgetitem198);
        QTableWidgetItem *__qtablewidgetitem199 = new QTableWidgetItem();
        elecnode_value->setItem(5, 2, __qtablewidgetitem199);
        QTableWidgetItem *__qtablewidgetitem200 = new QTableWidgetItem();
        elecnode_value->setItem(6, 0, __qtablewidgetitem200);
        QTableWidgetItem *__qtablewidgetitem201 = new QTableWidgetItem();
        elecnode_value->setItem(6, 1, __qtablewidgetitem201);
        QTableWidgetItem *__qtablewidgetitem202 = new QTableWidgetItem();
        elecnode_value->setItem(6, 2, __qtablewidgetitem202);
        QTableWidgetItem *__qtablewidgetitem203 = new QTableWidgetItem();
        elecnode_value->setItem(7, 0, __qtablewidgetitem203);
        QTableWidgetItem *__qtablewidgetitem204 = new QTableWidgetItem();
        elecnode_value->setItem(7, 1, __qtablewidgetitem204);
        QTableWidgetItem *__qtablewidgetitem205 = new QTableWidgetItem();
        elecnode_value->setItem(7, 2, __qtablewidgetitem205);
        QTableWidgetItem *__qtablewidgetitem206 = new QTableWidgetItem();
        elecnode_value->setItem(8, 0, __qtablewidgetitem206);
        QTableWidgetItem *__qtablewidgetitem207 = new QTableWidgetItem();
        elecnode_value->setItem(8, 1, __qtablewidgetitem207);
        QTableWidgetItem *__qtablewidgetitem208 = new QTableWidgetItem();
        elecnode_value->setItem(8, 2, __qtablewidgetitem208);
        QTableWidgetItem *__qtablewidgetitem209 = new QTableWidgetItem();
        elecnode_value->setItem(9, 0, __qtablewidgetitem209);
        QTableWidgetItem *__qtablewidgetitem210 = new QTableWidgetItem();
        elecnode_value->setItem(9, 1, __qtablewidgetitem210);
        QTableWidgetItem *__qtablewidgetitem211 = new QTableWidgetItem();
        elecnode_value->setItem(9, 2, __qtablewidgetitem211);
        QTableWidgetItem *__qtablewidgetitem212 = new QTableWidgetItem();
        elecnode_value->setItem(10, 0, __qtablewidgetitem212);
        QTableWidgetItem *__qtablewidgetitem213 = new QTableWidgetItem();
        elecnode_value->setItem(10, 1, __qtablewidgetitem213);
        QTableWidgetItem *__qtablewidgetitem214 = new QTableWidgetItem();
        elecnode_value->setItem(10, 2, __qtablewidgetitem214);
        QTableWidgetItem *__qtablewidgetitem215 = new QTableWidgetItem();
        elecnode_value->setItem(11, 0, __qtablewidgetitem215);
        QTableWidgetItem *__qtablewidgetitem216 = new QTableWidgetItem();
        elecnode_value->setItem(11, 1, __qtablewidgetitem216);
        QTableWidgetItem *__qtablewidgetitem217 = new QTableWidgetItem();
        elecnode_value->setItem(11, 2, __qtablewidgetitem217);
        QTableWidgetItem *__qtablewidgetitem218 = new QTableWidgetItem();
        elecnode_value->setItem(12, 0, __qtablewidgetitem218);
        QTableWidgetItem *__qtablewidgetitem219 = new QTableWidgetItem();
        elecnode_value->setItem(12, 1, __qtablewidgetitem219);
        QTableWidgetItem *__qtablewidgetitem220 = new QTableWidgetItem();
        elecnode_value->setItem(12, 2, __qtablewidgetitem220);
        elecnode_value->setObjectName(QStringLiteral("elecnode_value"));

        gridLayout_8->addWidget(elecnode_value, 1, 0, 1, 1);

        stackedWidget_2->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        gridLayout_9 = new QGridLayout(page_2);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        label_22 = new QLabel(page_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        sizePolicy2.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy2);
        label_22->setFont(font1);
        label_22->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_22->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(label_22, 0, 0, 1, 1);

        elecpipe_value = new QTableWidget(page_2);
        if (elecpipe_value->columnCount() < 3)
            elecpipe_value->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem221 = new QTableWidgetItem();
        elecpipe_value->setHorizontalHeaderItem(0, __qtablewidgetitem221);
        QTableWidgetItem *__qtablewidgetitem222 = new QTableWidgetItem();
        elecpipe_value->setHorizontalHeaderItem(1, __qtablewidgetitem222);
        QTableWidgetItem *__qtablewidgetitem223 = new QTableWidgetItem();
        elecpipe_value->setHorizontalHeaderItem(2, __qtablewidgetitem223);
        if (elecpipe_value->rowCount() < 12)
            elecpipe_value->setRowCount(12);
        QTableWidgetItem *__qtablewidgetitem224 = new QTableWidgetItem();
        elecpipe_value->setVerticalHeaderItem(0, __qtablewidgetitem224);
        QTableWidgetItem *__qtablewidgetitem225 = new QTableWidgetItem();
        elecpipe_value->setVerticalHeaderItem(1, __qtablewidgetitem225);
        QTableWidgetItem *__qtablewidgetitem226 = new QTableWidgetItem();
        elecpipe_value->setVerticalHeaderItem(2, __qtablewidgetitem226);
        QTableWidgetItem *__qtablewidgetitem227 = new QTableWidgetItem();
        elecpipe_value->setVerticalHeaderItem(3, __qtablewidgetitem227);
        QTableWidgetItem *__qtablewidgetitem228 = new QTableWidgetItem();
        elecpipe_value->setVerticalHeaderItem(4, __qtablewidgetitem228);
        QTableWidgetItem *__qtablewidgetitem229 = new QTableWidgetItem();
        elecpipe_value->setVerticalHeaderItem(5, __qtablewidgetitem229);
        QTableWidgetItem *__qtablewidgetitem230 = new QTableWidgetItem();
        elecpipe_value->setVerticalHeaderItem(6, __qtablewidgetitem230);
        QTableWidgetItem *__qtablewidgetitem231 = new QTableWidgetItem();
        elecpipe_value->setVerticalHeaderItem(7, __qtablewidgetitem231);
        QTableWidgetItem *__qtablewidgetitem232 = new QTableWidgetItem();
        elecpipe_value->setVerticalHeaderItem(8, __qtablewidgetitem232);
        QTableWidgetItem *__qtablewidgetitem233 = new QTableWidgetItem();
        elecpipe_value->setVerticalHeaderItem(9, __qtablewidgetitem233);
        QTableWidgetItem *__qtablewidgetitem234 = new QTableWidgetItem();
        elecpipe_value->setVerticalHeaderItem(10, __qtablewidgetitem234);
        QTableWidgetItem *__qtablewidgetitem235 = new QTableWidgetItem();
        elecpipe_value->setVerticalHeaderItem(11, __qtablewidgetitem235);
        QTableWidgetItem *__qtablewidgetitem236 = new QTableWidgetItem();
        elecpipe_value->setItem(0, 0, __qtablewidgetitem236);
        QTableWidgetItem *__qtablewidgetitem237 = new QTableWidgetItem();
        elecpipe_value->setItem(0, 1, __qtablewidgetitem237);
        QTableWidgetItem *__qtablewidgetitem238 = new QTableWidgetItem();
        elecpipe_value->setItem(0, 2, __qtablewidgetitem238);
        QTableWidgetItem *__qtablewidgetitem239 = new QTableWidgetItem();
        elecpipe_value->setItem(1, 0, __qtablewidgetitem239);
        QTableWidgetItem *__qtablewidgetitem240 = new QTableWidgetItem();
        elecpipe_value->setItem(1, 1, __qtablewidgetitem240);
        QTableWidgetItem *__qtablewidgetitem241 = new QTableWidgetItem();
        elecpipe_value->setItem(1, 2, __qtablewidgetitem241);
        QTableWidgetItem *__qtablewidgetitem242 = new QTableWidgetItem();
        elecpipe_value->setItem(2, 0, __qtablewidgetitem242);
        QTableWidgetItem *__qtablewidgetitem243 = new QTableWidgetItem();
        elecpipe_value->setItem(2, 1, __qtablewidgetitem243);
        QTableWidgetItem *__qtablewidgetitem244 = new QTableWidgetItem();
        elecpipe_value->setItem(2, 2, __qtablewidgetitem244);
        QTableWidgetItem *__qtablewidgetitem245 = new QTableWidgetItem();
        elecpipe_value->setItem(3, 0, __qtablewidgetitem245);
        QTableWidgetItem *__qtablewidgetitem246 = new QTableWidgetItem();
        elecpipe_value->setItem(3, 1, __qtablewidgetitem246);
        QTableWidgetItem *__qtablewidgetitem247 = new QTableWidgetItem();
        elecpipe_value->setItem(3, 2, __qtablewidgetitem247);
        QTableWidgetItem *__qtablewidgetitem248 = new QTableWidgetItem();
        elecpipe_value->setItem(4, 0, __qtablewidgetitem248);
        QTableWidgetItem *__qtablewidgetitem249 = new QTableWidgetItem();
        elecpipe_value->setItem(4, 1, __qtablewidgetitem249);
        QTableWidgetItem *__qtablewidgetitem250 = new QTableWidgetItem();
        elecpipe_value->setItem(4, 2, __qtablewidgetitem250);
        QTableWidgetItem *__qtablewidgetitem251 = new QTableWidgetItem();
        elecpipe_value->setItem(5, 0, __qtablewidgetitem251);
        QTableWidgetItem *__qtablewidgetitem252 = new QTableWidgetItem();
        elecpipe_value->setItem(5, 1, __qtablewidgetitem252);
        QTableWidgetItem *__qtablewidgetitem253 = new QTableWidgetItem();
        elecpipe_value->setItem(5, 2, __qtablewidgetitem253);
        QTableWidgetItem *__qtablewidgetitem254 = new QTableWidgetItem();
        elecpipe_value->setItem(6, 0, __qtablewidgetitem254);
        QTableWidgetItem *__qtablewidgetitem255 = new QTableWidgetItem();
        elecpipe_value->setItem(6, 1, __qtablewidgetitem255);
        QTableWidgetItem *__qtablewidgetitem256 = new QTableWidgetItem();
        elecpipe_value->setItem(6, 2, __qtablewidgetitem256);
        QTableWidgetItem *__qtablewidgetitem257 = new QTableWidgetItem();
        elecpipe_value->setItem(7, 0, __qtablewidgetitem257);
        QTableWidgetItem *__qtablewidgetitem258 = new QTableWidgetItem();
        elecpipe_value->setItem(7, 1, __qtablewidgetitem258);
        QTableWidgetItem *__qtablewidgetitem259 = new QTableWidgetItem();
        elecpipe_value->setItem(7, 2, __qtablewidgetitem259);
        QTableWidgetItem *__qtablewidgetitem260 = new QTableWidgetItem();
        elecpipe_value->setItem(8, 0, __qtablewidgetitem260);
        QTableWidgetItem *__qtablewidgetitem261 = new QTableWidgetItem();
        elecpipe_value->setItem(8, 1, __qtablewidgetitem261);
        QTableWidgetItem *__qtablewidgetitem262 = new QTableWidgetItem();
        elecpipe_value->setItem(8, 2, __qtablewidgetitem262);
        QTableWidgetItem *__qtablewidgetitem263 = new QTableWidgetItem();
        elecpipe_value->setItem(9, 0, __qtablewidgetitem263);
        QTableWidgetItem *__qtablewidgetitem264 = new QTableWidgetItem();
        elecpipe_value->setItem(9, 1, __qtablewidgetitem264);
        QTableWidgetItem *__qtablewidgetitem265 = new QTableWidgetItem();
        elecpipe_value->setItem(9, 2, __qtablewidgetitem265);
        QTableWidgetItem *__qtablewidgetitem266 = new QTableWidgetItem();
        elecpipe_value->setItem(10, 0, __qtablewidgetitem266);
        QTableWidgetItem *__qtablewidgetitem267 = new QTableWidgetItem();
        elecpipe_value->setItem(10, 1, __qtablewidgetitem267);
        QTableWidgetItem *__qtablewidgetitem268 = new QTableWidgetItem();
        elecpipe_value->setItem(10, 2, __qtablewidgetitem268);
        QTableWidgetItem *__qtablewidgetitem269 = new QTableWidgetItem();
        elecpipe_value->setItem(11, 0, __qtablewidgetitem269);
        QTableWidgetItem *__qtablewidgetitem270 = new QTableWidgetItem();
        elecpipe_value->setItem(11, 1, __qtablewidgetitem270);
        QTableWidgetItem *__qtablewidgetitem271 = new QTableWidgetItem();
        elecpipe_value->setItem(11, 2, __qtablewidgetitem271);
        elecpipe_value->setObjectName(QStringLiteral("elecpipe_value"));
        elecpipe_value->horizontalHeader()->setStretchLastSection(true);
        elecpipe_value->verticalHeader()->setCascadingSectionResizes(true);
        elecpipe_value->verticalHeader()->setStretchLastSection(true);

        gridLayout_9->addWidget(elecpipe_value, 1, 0, 1, 1);

        stackedWidget_2->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        gridLayout_12 = new QGridLayout(page_3);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        label_25 = new QLabel(page_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        sizePolicy2.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy2);
        label_25->setFont(font1);
        label_25->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_25->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_25, 0, 0, 1, 1);

        heatpipe_value = new QTableWidget(page_3);
        if (heatpipe_value->columnCount() < 3)
            heatpipe_value->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem272 = new QTableWidgetItem();
        heatpipe_value->setHorizontalHeaderItem(0, __qtablewidgetitem272);
        QTableWidgetItem *__qtablewidgetitem273 = new QTableWidgetItem();
        heatpipe_value->setHorizontalHeaderItem(1, __qtablewidgetitem273);
        QTableWidgetItem *__qtablewidgetitem274 = new QTableWidgetItem();
        heatpipe_value->setHorizontalHeaderItem(2, __qtablewidgetitem274);
        if (heatpipe_value->rowCount() < 12)
            heatpipe_value->setRowCount(12);
        QTableWidgetItem *__qtablewidgetitem275 = new QTableWidgetItem();
        heatpipe_value->setVerticalHeaderItem(0, __qtablewidgetitem275);
        QTableWidgetItem *__qtablewidgetitem276 = new QTableWidgetItem();
        heatpipe_value->setVerticalHeaderItem(1, __qtablewidgetitem276);
        QTableWidgetItem *__qtablewidgetitem277 = new QTableWidgetItem();
        heatpipe_value->setVerticalHeaderItem(2, __qtablewidgetitem277);
        QTableWidgetItem *__qtablewidgetitem278 = new QTableWidgetItem();
        heatpipe_value->setVerticalHeaderItem(3, __qtablewidgetitem278);
        QTableWidgetItem *__qtablewidgetitem279 = new QTableWidgetItem();
        heatpipe_value->setVerticalHeaderItem(4, __qtablewidgetitem279);
        QTableWidgetItem *__qtablewidgetitem280 = new QTableWidgetItem();
        heatpipe_value->setVerticalHeaderItem(5, __qtablewidgetitem280);
        QTableWidgetItem *__qtablewidgetitem281 = new QTableWidgetItem();
        heatpipe_value->setVerticalHeaderItem(6, __qtablewidgetitem281);
        QTableWidgetItem *__qtablewidgetitem282 = new QTableWidgetItem();
        heatpipe_value->setVerticalHeaderItem(7, __qtablewidgetitem282);
        QTableWidgetItem *__qtablewidgetitem283 = new QTableWidgetItem();
        heatpipe_value->setVerticalHeaderItem(8, __qtablewidgetitem283);
        QTableWidgetItem *__qtablewidgetitem284 = new QTableWidgetItem();
        heatpipe_value->setVerticalHeaderItem(9, __qtablewidgetitem284);
        QTableWidgetItem *__qtablewidgetitem285 = new QTableWidgetItem();
        heatpipe_value->setVerticalHeaderItem(10, __qtablewidgetitem285);
        QTableWidgetItem *__qtablewidgetitem286 = new QTableWidgetItem();
        heatpipe_value->setVerticalHeaderItem(11, __qtablewidgetitem286);
        QTableWidgetItem *__qtablewidgetitem287 = new QTableWidgetItem();
        heatpipe_value->setItem(0, 0, __qtablewidgetitem287);
        QTableWidgetItem *__qtablewidgetitem288 = new QTableWidgetItem();
        heatpipe_value->setItem(0, 1, __qtablewidgetitem288);
        QTableWidgetItem *__qtablewidgetitem289 = new QTableWidgetItem();
        heatpipe_value->setItem(0, 2, __qtablewidgetitem289);
        QTableWidgetItem *__qtablewidgetitem290 = new QTableWidgetItem();
        heatpipe_value->setItem(1, 0, __qtablewidgetitem290);
        QTableWidgetItem *__qtablewidgetitem291 = new QTableWidgetItem();
        heatpipe_value->setItem(1, 1, __qtablewidgetitem291);
        QTableWidgetItem *__qtablewidgetitem292 = new QTableWidgetItem();
        heatpipe_value->setItem(1, 2, __qtablewidgetitem292);
        QTableWidgetItem *__qtablewidgetitem293 = new QTableWidgetItem();
        heatpipe_value->setItem(2, 0, __qtablewidgetitem293);
        QTableWidgetItem *__qtablewidgetitem294 = new QTableWidgetItem();
        heatpipe_value->setItem(2, 1, __qtablewidgetitem294);
        QTableWidgetItem *__qtablewidgetitem295 = new QTableWidgetItem();
        heatpipe_value->setItem(2, 2, __qtablewidgetitem295);
        QTableWidgetItem *__qtablewidgetitem296 = new QTableWidgetItem();
        heatpipe_value->setItem(3, 0, __qtablewidgetitem296);
        QTableWidgetItem *__qtablewidgetitem297 = new QTableWidgetItem();
        heatpipe_value->setItem(3, 1, __qtablewidgetitem297);
        QTableWidgetItem *__qtablewidgetitem298 = new QTableWidgetItem();
        heatpipe_value->setItem(3, 2, __qtablewidgetitem298);
        QTableWidgetItem *__qtablewidgetitem299 = new QTableWidgetItem();
        heatpipe_value->setItem(4, 0, __qtablewidgetitem299);
        QTableWidgetItem *__qtablewidgetitem300 = new QTableWidgetItem();
        heatpipe_value->setItem(4, 1, __qtablewidgetitem300);
        QTableWidgetItem *__qtablewidgetitem301 = new QTableWidgetItem();
        heatpipe_value->setItem(4, 2, __qtablewidgetitem301);
        QTableWidgetItem *__qtablewidgetitem302 = new QTableWidgetItem();
        heatpipe_value->setItem(5, 0, __qtablewidgetitem302);
        QTableWidgetItem *__qtablewidgetitem303 = new QTableWidgetItem();
        heatpipe_value->setItem(5, 1, __qtablewidgetitem303);
        QTableWidgetItem *__qtablewidgetitem304 = new QTableWidgetItem();
        heatpipe_value->setItem(5, 2, __qtablewidgetitem304);
        QTableWidgetItem *__qtablewidgetitem305 = new QTableWidgetItem();
        heatpipe_value->setItem(6, 0, __qtablewidgetitem305);
        QTableWidgetItem *__qtablewidgetitem306 = new QTableWidgetItem();
        heatpipe_value->setItem(6, 1, __qtablewidgetitem306);
        QTableWidgetItem *__qtablewidgetitem307 = new QTableWidgetItem();
        heatpipe_value->setItem(6, 2, __qtablewidgetitem307);
        QTableWidgetItem *__qtablewidgetitem308 = new QTableWidgetItem();
        heatpipe_value->setItem(7, 0, __qtablewidgetitem308);
        QTableWidgetItem *__qtablewidgetitem309 = new QTableWidgetItem();
        heatpipe_value->setItem(7, 1, __qtablewidgetitem309);
        QTableWidgetItem *__qtablewidgetitem310 = new QTableWidgetItem();
        heatpipe_value->setItem(7, 2, __qtablewidgetitem310);
        QTableWidgetItem *__qtablewidgetitem311 = new QTableWidgetItem();
        heatpipe_value->setItem(8, 0, __qtablewidgetitem311);
        QTableWidgetItem *__qtablewidgetitem312 = new QTableWidgetItem();
        heatpipe_value->setItem(8, 1, __qtablewidgetitem312);
        QTableWidgetItem *__qtablewidgetitem313 = new QTableWidgetItem();
        heatpipe_value->setItem(8, 2, __qtablewidgetitem313);
        QTableWidgetItem *__qtablewidgetitem314 = new QTableWidgetItem();
        heatpipe_value->setItem(9, 0, __qtablewidgetitem314);
        QTableWidgetItem *__qtablewidgetitem315 = new QTableWidgetItem();
        heatpipe_value->setItem(9, 1, __qtablewidgetitem315);
        QTableWidgetItem *__qtablewidgetitem316 = new QTableWidgetItem();
        heatpipe_value->setItem(9, 2, __qtablewidgetitem316);
        QTableWidgetItem *__qtablewidgetitem317 = new QTableWidgetItem();
        heatpipe_value->setItem(10, 0, __qtablewidgetitem317);
        QTableWidgetItem *__qtablewidgetitem318 = new QTableWidgetItem();
        heatpipe_value->setItem(10, 1, __qtablewidgetitem318);
        QTableWidgetItem *__qtablewidgetitem319 = new QTableWidgetItem();
        heatpipe_value->setItem(10, 2, __qtablewidgetitem319);
        QTableWidgetItem *__qtablewidgetitem320 = new QTableWidgetItem();
        heatpipe_value->setItem(11, 0, __qtablewidgetitem320);
        QTableWidgetItem *__qtablewidgetitem321 = new QTableWidgetItem();
        heatpipe_value->setItem(11, 1, __qtablewidgetitem321);
        QTableWidgetItem *__qtablewidgetitem322 = new QTableWidgetItem();
        heatpipe_value->setItem(11, 2, __qtablewidgetitem322);
        heatpipe_value->setObjectName(QStringLiteral("heatpipe_value"));

        gridLayout_12->addWidget(heatpipe_value, 1, 0, 1, 1);

        stackedWidget_2->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        gridLayout_11 = new QGridLayout(page_4);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        label_24 = new QLabel(page_4);
        label_24->setObjectName(QStringLiteral("label_24"));
        sizePolicy2.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy2);
        label_24->setFont(font1);
        label_24->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_11->addWidget(label_24, 0, 0, 1, 1);

        gasnode_value = new QTableWidget(page_4);
        if (gasnode_value->columnCount() < 2)
            gasnode_value->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem323 = new QTableWidgetItem();
        gasnode_value->setHorizontalHeaderItem(0, __qtablewidgetitem323);
        QTableWidgetItem *__qtablewidgetitem324 = new QTableWidgetItem();
        gasnode_value->setHorizontalHeaderItem(1, __qtablewidgetitem324);
        if (gasnode_value->rowCount() < 5)
            gasnode_value->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem325 = new QTableWidgetItem();
        gasnode_value->setVerticalHeaderItem(0, __qtablewidgetitem325);
        QTableWidgetItem *__qtablewidgetitem326 = new QTableWidgetItem();
        gasnode_value->setVerticalHeaderItem(1, __qtablewidgetitem326);
        QTableWidgetItem *__qtablewidgetitem327 = new QTableWidgetItem();
        gasnode_value->setVerticalHeaderItem(2, __qtablewidgetitem327);
        QTableWidgetItem *__qtablewidgetitem328 = new QTableWidgetItem();
        gasnode_value->setVerticalHeaderItem(3, __qtablewidgetitem328);
        QTableWidgetItem *__qtablewidgetitem329 = new QTableWidgetItem();
        gasnode_value->setVerticalHeaderItem(4, __qtablewidgetitem329);
        QTableWidgetItem *__qtablewidgetitem330 = new QTableWidgetItem();
        gasnode_value->setItem(0, 0, __qtablewidgetitem330);
        QTableWidgetItem *__qtablewidgetitem331 = new QTableWidgetItem();
        gasnode_value->setItem(0, 1, __qtablewidgetitem331);
        QTableWidgetItem *__qtablewidgetitem332 = new QTableWidgetItem();
        gasnode_value->setItem(1, 0, __qtablewidgetitem332);
        QTableWidgetItem *__qtablewidgetitem333 = new QTableWidgetItem();
        gasnode_value->setItem(1, 1, __qtablewidgetitem333);
        QTableWidgetItem *__qtablewidgetitem334 = new QTableWidgetItem();
        gasnode_value->setItem(2, 0, __qtablewidgetitem334);
        QTableWidgetItem *__qtablewidgetitem335 = new QTableWidgetItem();
        gasnode_value->setItem(2, 1, __qtablewidgetitem335);
        QTableWidgetItem *__qtablewidgetitem336 = new QTableWidgetItem();
        gasnode_value->setItem(3, 0, __qtablewidgetitem336);
        QTableWidgetItem *__qtablewidgetitem337 = new QTableWidgetItem();
        gasnode_value->setItem(3, 1, __qtablewidgetitem337);
        QTableWidgetItem *__qtablewidgetitem338 = new QTableWidgetItem();
        gasnode_value->setItem(4, 0, __qtablewidgetitem338);
        QTableWidgetItem *__qtablewidgetitem339 = new QTableWidgetItem();
        gasnode_value->setItem(4, 1, __qtablewidgetitem339);
        gasnode_value->setObjectName(QStringLiteral("gasnode_value"));

        gridLayout_11->addWidget(gasnode_value, 1, 0, 1, 1);

        stackedWidget_2->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        gridLayout_10 = new QGridLayout(page_5);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QStringLiteral("gridLayout_10"));
        label_23 = new QLabel(page_5);
        label_23->setObjectName(QStringLiteral("label_23"));
        sizePolicy2.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy2);
        label_23->setFont(font1);
        label_23->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_23->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(label_23, 0, 0, 1, 1);

        gaspipe_value = new QTableWidget(page_5);
        if (gaspipe_value->columnCount() < 3)
            gaspipe_value->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem340 = new QTableWidgetItem();
        gaspipe_value->setHorizontalHeaderItem(0, __qtablewidgetitem340);
        QTableWidgetItem *__qtablewidgetitem341 = new QTableWidgetItem();
        gaspipe_value->setHorizontalHeaderItem(1, __qtablewidgetitem341);
        QTableWidgetItem *__qtablewidgetitem342 = new QTableWidgetItem();
        gaspipe_value->setHorizontalHeaderItem(2, __qtablewidgetitem342);
        if (gaspipe_value->rowCount() < 7)
            gaspipe_value->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem343 = new QTableWidgetItem();
        gaspipe_value->setVerticalHeaderItem(0, __qtablewidgetitem343);
        QTableWidgetItem *__qtablewidgetitem344 = new QTableWidgetItem();
        gaspipe_value->setVerticalHeaderItem(1, __qtablewidgetitem344);
        QTableWidgetItem *__qtablewidgetitem345 = new QTableWidgetItem();
        gaspipe_value->setVerticalHeaderItem(2, __qtablewidgetitem345);
        QTableWidgetItem *__qtablewidgetitem346 = new QTableWidgetItem();
        gaspipe_value->setVerticalHeaderItem(3, __qtablewidgetitem346);
        QTableWidgetItem *__qtablewidgetitem347 = new QTableWidgetItem();
        gaspipe_value->setVerticalHeaderItem(4, __qtablewidgetitem347);
        QTableWidgetItem *__qtablewidgetitem348 = new QTableWidgetItem();
        gaspipe_value->setVerticalHeaderItem(5, __qtablewidgetitem348);
        QTableWidgetItem *__qtablewidgetitem349 = new QTableWidgetItem();
        gaspipe_value->setVerticalHeaderItem(6, __qtablewidgetitem349);
        QTableWidgetItem *__qtablewidgetitem350 = new QTableWidgetItem();
        gaspipe_value->setItem(0, 0, __qtablewidgetitem350);
        QTableWidgetItem *__qtablewidgetitem351 = new QTableWidgetItem();
        gaspipe_value->setItem(0, 1, __qtablewidgetitem351);
        QTableWidgetItem *__qtablewidgetitem352 = new QTableWidgetItem();
        gaspipe_value->setItem(0, 2, __qtablewidgetitem352);
        QTableWidgetItem *__qtablewidgetitem353 = new QTableWidgetItem();
        gaspipe_value->setItem(1, 0, __qtablewidgetitem353);
        QTableWidgetItem *__qtablewidgetitem354 = new QTableWidgetItem();
        gaspipe_value->setItem(1, 1, __qtablewidgetitem354);
        QTableWidgetItem *__qtablewidgetitem355 = new QTableWidgetItem();
        gaspipe_value->setItem(1, 2, __qtablewidgetitem355);
        QTableWidgetItem *__qtablewidgetitem356 = new QTableWidgetItem();
        gaspipe_value->setItem(2, 0, __qtablewidgetitem356);
        QTableWidgetItem *__qtablewidgetitem357 = new QTableWidgetItem();
        gaspipe_value->setItem(2, 1, __qtablewidgetitem357);
        QTableWidgetItem *__qtablewidgetitem358 = new QTableWidgetItem();
        gaspipe_value->setItem(2, 2, __qtablewidgetitem358);
        QTableWidgetItem *__qtablewidgetitem359 = new QTableWidgetItem();
        gaspipe_value->setItem(3, 0, __qtablewidgetitem359);
        QTableWidgetItem *__qtablewidgetitem360 = new QTableWidgetItem();
        gaspipe_value->setItem(3, 1, __qtablewidgetitem360);
        QTableWidgetItem *__qtablewidgetitem361 = new QTableWidgetItem();
        gaspipe_value->setItem(3, 2, __qtablewidgetitem361);
        QTableWidgetItem *__qtablewidgetitem362 = new QTableWidgetItem();
        gaspipe_value->setItem(4, 0, __qtablewidgetitem362);
        QTableWidgetItem *__qtablewidgetitem363 = new QTableWidgetItem();
        gaspipe_value->setItem(4, 1, __qtablewidgetitem363);
        QTableWidgetItem *__qtablewidgetitem364 = new QTableWidgetItem();
        gaspipe_value->setItem(4, 2, __qtablewidgetitem364);
        QTableWidgetItem *__qtablewidgetitem365 = new QTableWidgetItem();
        gaspipe_value->setItem(5, 0, __qtablewidgetitem365);
        QTableWidgetItem *__qtablewidgetitem366 = new QTableWidgetItem();
        gaspipe_value->setItem(5, 1, __qtablewidgetitem366);
        QTableWidgetItem *__qtablewidgetitem367 = new QTableWidgetItem();
        gaspipe_value->setItem(5, 2, __qtablewidgetitem367);
        QTableWidgetItem *__qtablewidgetitem368 = new QTableWidgetItem();
        gaspipe_value->setItem(6, 0, __qtablewidgetitem368);
        QTableWidgetItem *__qtablewidgetitem369 = new QTableWidgetItem();
        gaspipe_value->setItem(6, 1, __qtablewidgetitem369);
        QTableWidgetItem *__qtablewidgetitem370 = new QTableWidgetItem();
        gaspipe_value->setItem(6, 2, __qtablewidgetitem370);
        gaspipe_value->setObjectName(QStringLiteral("gaspipe_value"));

        gridLayout_10->addWidget(gaspipe_value, 1, 0, 1, 1);

        stackedWidget_2->addWidget(page_5);

        verticalLayout_8->addWidget(stackedWidget_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(1);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);
        pushButton->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:0, stop:0 rgba(255, 0, 0, 225), stop:1 rgba(170, 255, 0, 243));\n"
"background-color: rgb(255, 128, 0);"));

        horizontalLayout_7->addWidget(pushButton);

        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy3.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy3);
        pushButton_3->setMaximumSize(QSize(50, 16777215));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"font: 12pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_7->addWidget(pushButton_3);

        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        sizePolicy3.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy3);
        pushButton_6->setMaximumSize(QSize(50, 16777215));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 170, 255);\n"
"font: 12pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_7->addWidget(pushButton_6);

        authorname_2 = new QLabel(tab_2);
        authorname_2->setObjectName(QStringLiteral("authorname_2"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(authorname_2->sizePolicy().hasHeightForWidth());
        authorname_2->setSizePolicy(sizePolicy4);
        authorname_2->setMinimumSize(QSize(139, 30));
        authorname_2->setMaximumSize(QSize(16777215, 50));
        authorname_2->setFont(font2);
        authorname_2->setCursor(QCursor(Qt::BlankCursor));
        authorname_2->setStyleSheet(QStringLiteral("font: 10pt \"Viner Hand ITC\";"));
        authorname_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(authorname_2);

        horizontalLayout_7->setStretch(0, 1);
        horizontalLayout_7->setStretch(1, 1);
        horizontalLayout_7->setStretch(2, 1);
        horizontalLayout_7->setStretch(3, 4);

        verticalLayout_8->addLayout(horizontalLayout_7);

        verticalLayout_8->setStretch(0, 9);
        verticalLayout_8->setStretch(1, 1);

        horizontalLayout_8->addLayout(verticalLayout_8);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        gridLayout_14 = new QGridLayout(tab_3);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(11, 11, 11, 11);
        gridLayout_14->setObjectName(QStringLiteral("gridLayout_14"));
        widget_2 = new QWidget(tab_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral("image: url(:/new/img/IES3.png);"));

        gridLayout_14->addWidget(widget_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_15 = new QGridLayout(tab_4);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        widget_3 = new QWidget(tab_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QStringLiteral("image: url(:/new/img/IES4.png);"));

        gridLayout_15->addWidget(widget_3, 0, 0, 1, 1);

        widget_4 = new QWidget(tab_4);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setStyleSheet(QStringLiteral("image: url(:/new/img/IES5.png);"));

        gridLayout_15->addWidget(widget_4, 0, 1, 1, 1);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_13 = new QGridLayout(tab_5);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        label_26 = new QLabel(tab_5);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label_26->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_13->addWidget(label_26, 0, 0, 1, 1);

        tabWidget->addTab(tab_5, QString());

        gridLayout_7->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);
        stackedWidget->setCurrentIndex(0);
        comboBox_2->setCurrentIndex(6);
        comboBox_3->setCurrentIndex(1);
        comboBox_4->setCurrentIndex(4);
        stackedWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\217\230\346\210\220\345\271\266\347\275\221", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\342\227\200", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "\342\226\266", Q_NULLPTR));
        authorname->setText(QApplication::translate("MainWindow", "Powered by Phantom T", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\347\224\265\345\212\233\347\263\273\347\273\237\345\220\204\350\212\202\347\202\271\347\224\265\345\216\213", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = powersys_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = powersys_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\347\224\265\345\216\213/pu", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = powersys_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\347\224\265\345\216\213/pu", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = powersys_table->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = powersys_table->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = powersys_table->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = powersys_table->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = powersys_table->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = powersys_table->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = powersys_table->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = powersys_table->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = powersys_table->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = powersys_table->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = powersys_table->verticalHeaderItem(10);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = powersys_table->verticalHeaderItem(11);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = powersys_table->verticalHeaderItem(12);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "13", Q_NULLPTR));

        const bool __sortingEnabled = powersys_table->isSortingEnabled();
        powersys_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem16 = powersys_table->item(0, 0);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = powersys_table->item(1, 0);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = powersys_table->item(2, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = powersys_table->item(3, 0);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = powersys_table->item(4, 0);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = powersys_table->item(5, 0);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = powersys_table->item(6, 0);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = powersys_table->item(7, 0);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = powersys_table->item(8, 0);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = powersys_table->item(9, 0);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = powersys_table->item(10, 0);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", " 11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = powersys_table->item(11, 0);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", " 12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = powersys_table->item(12, 0);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", " 13", Q_NULLPTR));
        powersys_table->setSortingEnabled(__sortingEnabled);

        label_2->setText(QApplication::translate("MainWindow", "\345\244\251\347\204\266\346\260\224\347\275\221\347\273\234\345\220\204\350\212\202\347\202\271\345\216\213\345\212\233", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = gasnode_table->horizontalHeaderItem(0);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem30 = gasnode_table->horizontalHeaderItem(1);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "\345\216\213\345\212\233/bar", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem31 = gasnode_table->horizontalHeaderItem(2);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "\345\216\213\345\212\233/bar", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem32 = gasnode_table->verticalHeaderItem(0);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem33 = gasnode_table->verticalHeaderItem(1);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem34 = gasnode_table->verticalHeaderItem(2);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem35 = gasnode_table->verticalHeaderItem(3);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem36 = gasnode_table->verticalHeaderItem(4);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem37 = gasnode_table->verticalHeaderItem(5);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem38 = gasnode_table->verticalHeaderItem(6);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));

        const bool __sortingEnabled1 = gasnode_table->isSortingEnabled();
        gasnode_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem39 = gasnode_table->item(0, 0);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem40 = gasnode_table->item(1, 0);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem41 = gasnode_table->item(2, 0);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem42 = gasnode_table->item(3, 0);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem43 = gasnode_table->item(4, 0);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem44 = gasnode_table->item(5, 0);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem45 = gasnode_table->item(6, 0);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        gasnode_table->setSortingEnabled(__sortingEnabled1);

        label_3->setText(QApplication::translate("MainWindow", "\345\244\251\347\204\266\346\260\224\347\275\221\347\273\234\345\220\204\347\256\241\351\201\223\346\265\201\351\207\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem46 = gaspipe_table->horizontalHeaderItem(0);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "\347\256\241\351\201\223", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem47 = gaspipe_table->horizontalHeaderItem(1);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", "\344\276\233\346\260\224\351\207\217/ (m^3/h)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem48 = gaspipe_table->horizontalHeaderItem(2);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", "\344\276\233\346\260\224\351\207\217/ (m^3/h)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem49 = gaspipe_table->verticalHeaderItem(0);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem50 = gaspipe_table->verticalHeaderItem(1);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem51 = gaspipe_table->verticalHeaderItem(2);
        ___qtablewidgetitem51->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem52 = gaspipe_table->verticalHeaderItem(3);
        ___qtablewidgetitem52->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem53 = gaspipe_table->verticalHeaderItem(4);
        ___qtablewidgetitem53->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem54 = gaspipe_table->verticalHeaderItem(5);
        ___qtablewidgetitem54->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));

        const bool __sortingEnabled2 = gaspipe_table->isSortingEnabled();
        gaspipe_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem55 = gaspipe_table->item(0, 0);
        ___qtablewidgetitem55->setText(QApplication::translate("MainWindow", "1-2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem56 = gaspipe_table->item(1, 0);
        ___qtablewidgetitem56->setText(QApplication::translate("MainWindow", "2-6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem57 = gaspipe_table->item(2, 0);
        ___qtablewidgetitem57->setText(QApplication::translate("MainWindow", "3-4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem58 = gaspipe_table->item(3, 0);
        ___qtablewidgetitem58->setText(QApplication::translate("MainWindow", "3-5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem59 = gaspipe_table->item(4, 0);
        ___qtablewidgetitem59->setText(QApplication::translate("MainWindow", "5-7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem60 = gaspipe_table->item(5, 0);
        ___qtablewidgetitem60->setText(QApplication::translate("MainWindow", "6-7", Q_NULLPTR));
        gaspipe_table->setSortingEnabled(__sortingEnabled2);

        label_4->setText(QApplication::translate("MainWindow", "\347\203\255\345\212\233\347\263\273\347\273\237\345\220\204\350\212\202\347\202\271\344\276\233\347\203\255\345\222\214\345\233\236\347\203\255\346\270\251\345\272\246", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem61 = heatsys_table->horizontalHeaderItem(0);
        ___qtablewidgetitem61->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem62 = heatsys_table->horizontalHeaderItem(1);
        ___qtablewidgetitem62->setText(QApplication::translate("MainWindow", "\344\276\233\347\203\255\346\270\251\345\272\246/\342\204\203", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem63 = heatsys_table->horizontalHeaderItem(2);
        ___qtablewidgetitem63->setText(QApplication::translate("MainWindow", "\344\276\233\347\203\255\346\270\251\345\272\246/\342\204\203", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem64 = heatsys_table->horizontalHeaderItem(3);
        ___qtablewidgetitem64->setText(QApplication::translate("MainWindow", "\345\233\236\347\203\255\346\270\251\345\272\246/\342\204\203", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem65 = heatsys_table->horizontalHeaderItem(4);
        ___qtablewidgetitem65->setText(QApplication::translate("MainWindow", "\345\233\236\347\203\255\346\270\251\345\272\246/\342\204\203", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem66 = heatsys_table->verticalHeaderItem(0);
        ___qtablewidgetitem66->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem67 = heatsys_table->verticalHeaderItem(1);
        ___qtablewidgetitem67->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem68 = heatsys_table->verticalHeaderItem(2);
        ___qtablewidgetitem68->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem69 = heatsys_table->verticalHeaderItem(3);
        ___qtablewidgetitem69->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem70 = heatsys_table->verticalHeaderItem(4);
        ___qtablewidgetitem70->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem71 = heatsys_table->verticalHeaderItem(5);
        ___qtablewidgetitem71->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem72 = heatsys_table->verticalHeaderItem(6);
        ___qtablewidgetitem72->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem73 = heatsys_table->verticalHeaderItem(7);
        ___qtablewidgetitem73->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem74 = heatsys_table->verticalHeaderItem(8);
        ___qtablewidgetitem74->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem75 = heatsys_table->verticalHeaderItem(9);
        ___qtablewidgetitem75->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem76 = heatsys_table->verticalHeaderItem(10);
        ___qtablewidgetitem76->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem77 = heatsys_table->verticalHeaderItem(11);
        ___qtablewidgetitem77->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem78 = heatsys_table->verticalHeaderItem(12);
        ___qtablewidgetitem78->setText(QApplication::translate("MainWindow", "13", Q_NULLPTR));

        const bool __sortingEnabled3 = heatsys_table->isSortingEnabled();
        heatsys_table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem79 = heatsys_table->item(0, 0);
        ___qtablewidgetitem79->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem80 = heatsys_table->item(1, 0);
        ___qtablewidgetitem80->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem81 = heatsys_table->item(2, 0);
        ___qtablewidgetitem81->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem82 = heatsys_table->item(3, 0);
        ___qtablewidgetitem82->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem83 = heatsys_table->item(4, 0);
        ___qtablewidgetitem83->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem84 = heatsys_table->item(5, 0);
        ___qtablewidgetitem84->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem85 = heatsys_table->item(6, 0);
        ___qtablewidgetitem85->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem86 = heatsys_table->item(7, 0);
        ___qtablewidgetitem86->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem87 = heatsys_table->item(8, 0);
        ___qtablewidgetitem87->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem88 = heatsys_table->item(9, 0);
        ___qtablewidgetitem88->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem89 = heatsys_table->item(10, 0);
        ___qtablewidgetitem89->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem90 = heatsys_table->item(11, 0);
        ___qtablewidgetitem90->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem91 = heatsys_table->item(12, 0);
        ___qtablewidgetitem91->setText(QApplication::translate("MainWindow", "13", Q_NULLPTR));
        heatsys_table->setSortingEnabled(__sortingEnabled3);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "IES \347\256\227\344\276\213", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "\347\203\255\345\212\233\347\263\273\347\273\237\350\264\237\350\215\267\350\212\202\347\202\271\345\217\202\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem92 = heatnode_value->horizontalHeaderItem(0);
        ___qtablewidgetitem92->setText(QApplication::translate("MainWindow", "\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem93 = heatnode_value->horizontalHeaderItem(1);
        ___qtablewidgetitem93->setText(QApplication::translate("MainWindow", "\347\203\255\350\264\237\350\215\267\345\212\237\347\216\207/MW", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem94 = heatnode_value->horizontalHeaderItem(2);
        ___qtablewidgetitem94->setText(QApplication::translate("MainWindow", "\350\276\223\345\207\272\346\270\251\345\272\246/\n"
"\342\204\203", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem95 = heatnode_value->verticalHeaderItem(0);
        ___qtablewidgetitem95->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem96 = heatnode_value->verticalHeaderItem(1);
        ___qtablewidgetitem96->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem97 = heatnode_value->verticalHeaderItem(2);
        ___qtablewidgetitem97->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem98 = heatnode_value->verticalHeaderItem(3);
        ___qtablewidgetitem98->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem99 = heatnode_value->verticalHeaderItem(4);
        ___qtablewidgetitem99->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem100 = heatnode_value->verticalHeaderItem(5);
        ___qtablewidgetitem100->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem101 = heatnode_value->verticalHeaderItem(6);
        ___qtablewidgetitem101->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem102 = heatnode_value->verticalHeaderItem(7);
        ___qtablewidgetitem102->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem103 = heatnode_value->verticalHeaderItem(8);
        ___qtablewidgetitem103->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem104 = heatnode_value->verticalHeaderItem(9);
        ___qtablewidgetitem104->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem105 = heatnode_value->verticalHeaderItem(10);
        ___qtablewidgetitem105->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));

        const bool __sortingEnabled4 = heatnode_value->isSortingEnabled();
        heatnode_value->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem106 = heatnode_value->item(0, 0);
        ___qtablewidgetitem106->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem107 = heatnode_value->item(0, 1);
        ___qtablewidgetitem107->setText(QApplication::translate("MainWindow", "0.2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem108 = heatnode_value->item(0, 2);
        ___qtablewidgetitem108->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem109 = heatnode_value->item(1, 0);
        ___qtablewidgetitem109->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem110 = heatnode_value->item(1, 1);
        ___qtablewidgetitem110->setText(QApplication::translate("MainWindow", "0.2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem111 = heatnode_value->item(1, 2);
        ___qtablewidgetitem111->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem112 = heatnode_value->item(2, 0);
        ___qtablewidgetitem112->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem113 = heatnode_value->item(2, 1);
        ___qtablewidgetitem113->setText(QApplication::translate("MainWindow", "0.2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem114 = heatnode_value->item(2, 2);
        ___qtablewidgetitem114->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem115 = heatnode_value->item(3, 0);
        ___qtablewidgetitem115->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem116 = heatnode_value->item(3, 1);
        ___qtablewidgetitem116->setText(QApplication::translate("MainWindow", "0.2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem117 = heatnode_value->item(3, 2);
        ___qtablewidgetitem117->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem118 = heatnode_value->item(4, 0);
        ___qtablewidgetitem118->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem119 = heatnode_value->item(4, 1);
        ___qtablewidgetitem119->setText(QApplication::translate("MainWindow", "0.2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem120 = heatnode_value->item(4, 2);
        ___qtablewidgetitem120->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem121 = heatnode_value->item(5, 0);
        ___qtablewidgetitem121->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem122 = heatnode_value->item(5, 1);
        ___qtablewidgetitem122->setText(QApplication::translate("MainWindow", "0.2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem123 = heatnode_value->item(5, 2);
        ___qtablewidgetitem123->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem124 = heatnode_value->item(6, 0);
        ___qtablewidgetitem124->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem125 = heatnode_value->item(6, 1);
        ___qtablewidgetitem125->setText(QApplication::translate("MainWindow", "0.1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem126 = heatnode_value->item(6, 2);
        ___qtablewidgetitem126->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem127 = heatnode_value->item(7, 0);
        ___qtablewidgetitem127->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem128 = heatnode_value->item(7, 1);
        ___qtablewidgetitem128->setText(QApplication::translate("MainWindow", "0.1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem129 = heatnode_value->item(7, 2);
        ___qtablewidgetitem129->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem130 = heatnode_value->item(8, 0);
        ___qtablewidgetitem130->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem131 = heatnode_value->item(8, 1);
        ___qtablewidgetitem131->setText(QApplication::translate("MainWindow", "0.3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem132 = heatnode_value->item(8, 2);
        ___qtablewidgetitem132->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem133 = heatnode_value->item(9, 0);
        ___qtablewidgetitem133->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem134 = heatnode_value->item(9, 1);
        ___qtablewidgetitem134->setText(QApplication::translate("MainWindow", "0.2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem135 = heatnode_value->item(9, 2);
        ___qtablewidgetitem135->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem136 = heatnode_value->item(10, 0);
        ___qtablewidgetitem136->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem137 = heatnode_value->item(10, 1);
        ___qtablewidgetitem137->setText(QApplication::translate("MainWindow", "0.2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem138 = heatnode_value->item(10, 2);
        ___qtablewidgetitem138->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
        heatnode_value->setSortingEnabled(__sortingEnabled4);

        label_5->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10", Q_NULLPTR)
         << QApplication::translate("MainWindow", "11", Q_NULLPTR)
         << QApplication::translate("MainWindow", "12", Q_NULLPTR)
         << QApplication::translate("MainWindow", "13", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.9", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("MainWindow", "MW\350\264\237\350\215\267", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10", Q_NULLPTR)
         << QApplication::translate("MainWindow", "11", Q_NULLPTR)
         << QApplication::translate("MainWindow", "12", Q_NULLPTR)
         << QApplication::translate("MainWindow", "13", Q_NULLPTR)
        );
        label_9->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", Q_NULLPTR));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.9", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("MainWindow", "MW\350\264\237\350\215\267", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271", Q_NULLPTR));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10", Q_NULLPTR)
         << QApplication::translate("MainWindow", "11", Q_NULLPTR)
         << QApplication::translate("MainWindow", "12", Q_NULLPTR)
         << QApplication::translate("MainWindow", "13", Q_NULLPTR)
        );
        label_12->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", Q_NULLPTR));
        comboBox_6->clear();
        comboBox_6->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.9", Q_NULLPTR)
        );
        label_13->setText(QApplication::translate("MainWindow", "MW\350\264\237\350\215\267", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271", Q_NULLPTR));
        comboBox_7->clear();
        comboBox_7->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10", Q_NULLPTR)
         << QApplication::translate("MainWindow", "11", Q_NULLPTR)
         << QApplication::translate("MainWindow", "12", Q_NULLPTR)
         << QApplication::translate("MainWindow", "13", Q_NULLPTR)
        );
        label_15->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", Q_NULLPTR));
        comboBox_8->clear();
        comboBox_8->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.9", Q_NULLPTR)
        );
        label_16->setText(QApplication::translate("MainWindow", "MW\350\264\237\350\215\267", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271", Q_NULLPTR));
        comboBox_9->clear();
        comboBox_9->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10", Q_NULLPTR)
         << QApplication::translate("MainWindow", "11", Q_NULLPTR)
         << QApplication::translate("MainWindow", "12", Q_NULLPTR)
         << QApplication::translate("MainWindow", "13", Q_NULLPTR)
        );
        label_18->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240", Q_NULLPTR));
        comboBox_10->clear();
        comboBox_10->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "0", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "0.9", Q_NULLPTR)
        );
        label_19->setText(QApplication::translate("MainWindow", "MW\350\264\237\350\215\267", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", "\347\224\265\345\212\233\347\263\273\347\273\237\347\232\204\350\264\237\350\215\267\350\212\202\347\202\271\346\225\260\346\215\256", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem139 = elecnode_value->horizontalHeaderItem(0);
        ___qtablewidgetitem139->setText(QApplication::translate("MainWindow", "\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem140 = elecnode_value->horizontalHeaderItem(1);
        ___qtablewidgetitem140->setText(QApplication::translate("MainWindow", "\346\234\211\345\212\237/MW", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem141 = elecnode_value->horizontalHeaderItem(2);
        ___qtablewidgetitem141->setText(QApplication::translate("MainWindow", "\346\227\240\345\212\237/MVAr", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem142 = elecnode_value->verticalHeaderItem(0);
        ___qtablewidgetitem142->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem143 = elecnode_value->verticalHeaderItem(1);
        ___qtablewidgetitem143->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem144 = elecnode_value->verticalHeaderItem(2);
        ___qtablewidgetitem144->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem145 = elecnode_value->verticalHeaderItem(3);
        ___qtablewidgetitem145->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem146 = elecnode_value->verticalHeaderItem(4);
        ___qtablewidgetitem146->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem147 = elecnode_value->verticalHeaderItem(5);
        ___qtablewidgetitem147->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem148 = elecnode_value->verticalHeaderItem(6);
        ___qtablewidgetitem148->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem149 = elecnode_value->verticalHeaderItem(7);
        ___qtablewidgetitem149->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem150 = elecnode_value->verticalHeaderItem(8);
        ___qtablewidgetitem150->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem151 = elecnode_value->verticalHeaderItem(9);
        ___qtablewidgetitem151->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem152 = elecnode_value->verticalHeaderItem(10);
        ___qtablewidgetitem152->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem153 = elecnode_value->verticalHeaderItem(11);
        ___qtablewidgetitem153->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem154 = elecnode_value->verticalHeaderItem(12);
        ___qtablewidgetitem154->setText(QApplication::translate("MainWindow", "13", Q_NULLPTR));

        const bool __sortingEnabled5 = elecnode_value->isSortingEnabled();
        elecnode_value->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem155 = elecnode_value->item(0, 0);
        ___qtablewidgetitem155->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem156 = elecnode_value->item(0, 1);
        ___qtablewidgetitem156->setText(QApplication::translate("MainWindow", "0.2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem157 = elecnode_value->item(0, 2);
        ___qtablewidgetitem157->setText(QApplication::translate("MainWindow", "0.116", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem158 = elecnode_value->item(1, 0);
        ___qtablewidgetitem158->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem159 = elecnode_value->item(1, 1);
        ___qtablewidgetitem159->setText(QApplication::translate("MainWindow", "0.5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem160 = elecnode_value->item(1, 2);
        ___qtablewidgetitem160->setText(QApplication::translate("MainWindow", "0.125", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem161 = elecnode_value->item(2, 0);
        ___qtablewidgetitem161->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem162 = elecnode_value->item(2, 1);
        ___qtablewidgetitem162->setText(QApplication::translate("MainWindow", "0.8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem163 = elecnode_value->item(2, 2);
        ___qtablewidgetitem163->setText(QApplication::translate("MainWindow", "0.4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem164 = elecnode_value->item(3, 0);
        ___qtablewidgetitem164->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem165 = elecnode_value->item(3, 1);
        ___qtablewidgetitem165->setText(QApplication::translate("MainWindow", "0.8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem166 = elecnode_value->item(3, 2);
        ___qtablewidgetitem166->setText(QApplication::translate("MainWindow", "0.29", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem167 = elecnode_value->item(4, 0);
        ___qtablewidgetitem167->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem168 = elecnode_value->item(4, 1);
        ___qtablewidgetitem168->setText(QApplication::translate("MainWindow", "1.155", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem169 = elecnode_value->item(4, 2);
        ___qtablewidgetitem169->setText(QApplication::translate("MainWindow", "0.66", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem170 = elecnode_value->item(5, 0);
        ___qtablewidgetitem170->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem171 = elecnode_value->item(5, 1);
        ___qtablewidgetitem171->setText(QApplication::translate("MainWindow", "0.8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem172 = elecnode_value->item(5, 2);
        ___qtablewidgetitem172->setText(QApplication::translate("MainWindow", "0.4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem173 = elecnode_value->item(6, 0);
        ___qtablewidgetitem173->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem174 = elecnode_value->item(6, 1);
        ___qtablewidgetitem174->setText(QApplication::translate("MainWindow", "0.17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem175 = elecnode_value->item(6, 2);
        ___qtablewidgetitem175->setText(QApplication::translate("MainWindow", "0.08", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem176 = elecnode_value->item(7, 0);
        ___qtablewidgetitem176->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem177 = elecnode_value->item(7, 1);
        ___qtablewidgetitem177->setText(QApplication::translate("MainWindow", "0.128", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem178 = elecnode_value->item(7, 2);
        ___qtablewidgetitem178->setText(QApplication::translate("MainWindow", "0.086", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem179 = elecnode_value->item(8, 0);
        ___qtablewidgetitem179->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem180 = elecnode_value->item(8, 1);
        ___qtablewidgetitem180->setText(QApplication::translate("MainWindow", "0.17", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem181 = elecnode_value->item(8, 2);
        ___qtablewidgetitem181->setText(QApplication::translate("MainWindow", "0.151", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem182 = elecnode_value->item(9, 0);
        ___qtablewidgetitem182->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem183 = elecnode_value->item(9, 1);
        ___qtablewidgetitem183->setText(QApplication::translate("MainWindow", "0.582", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem184 = elecnode_value->item(9, 2);
        ___qtablewidgetitem184->setText(QApplication::translate("MainWindow", "0.462", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem185 = elecnode_value->item(10, 0);
        ___qtablewidgetitem185->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem186 = elecnode_value->item(10, 1);
        ___qtablewidgetitem186->setText(QApplication::translate("MainWindow", "0.1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem187 = elecnode_value->item(10, 2);
        ___qtablewidgetitem187->setText(QApplication::translate("MainWindow", "0.05", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem188 = elecnode_value->item(11, 0);
        ___qtablewidgetitem188->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem189 = elecnode_value->item(11, 1);
        ___qtablewidgetitem189->setText(QApplication::translate("MainWindow", "0.23", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem190 = elecnode_value->item(11, 2);
        ___qtablewidgetitem190->setText(QApplication::translate("MainWindow", "0.132", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem191 = elecnode_value->item(12, 0);
        ___qtablewidgetitem191->setText(QApplication::translate("MainWindow", "13", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem192 = elecnode_value->item(12, 1);
        ___qtablewidgetitem192->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem193 = elecnode_value->item(12, 2);
        ___qtablewidgetitem193->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        elecnode_value->setSortingEnabled(__sortingEnabled5);

        label_22->setText(QApplication::translate("MainWindow", "\347\224\265\345\212\233\347\263\273\347\273\237\347\232\204\347\272\277\350\267\257\345\217\202\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem194 = elecpipe_value->horizontalHeaderItem(0);
        ___qtablewidgetitem194->setText(QApplication::translate("MainWindow", "\347\272\277\350\267\257\350\265\260\345\220\221", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem195 = elecpipe_value->horizontalHeaderItem(1);
        ___qtablewidgetitem195->setText(QApplication::translate("MainWindow", "\347\272\277\350\267\257\351\230\273\346\212\227/pu", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem196 = elecpipe_value->horizontalHeaderItem(2);
        ___qtablewidgetitem196->setText(QApplication::translate("MainWindow", "\346\227\201\350\267\257\347\224\265\345\256\271", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem197 = elecpipe_value->verticalHeaderItem(0);
        ___qtablewidgetitem197->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem198 = elecpipe_value->verticalHeaderItem(1);
        ___qtablewidgetitem198->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem199 = elecpipe_value->verticalHeaderItem(2);
        ___qtablewidgetitem199->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem200 = elecpipe_value->verticalHeaderItem(3);
        ___qtablewidgetitem200->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem201 = elecpipe_value->verticalHeaderItem(4);
        ___qtablewidgetitem201->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem202 = elecpipe_value->verticalHeaderItem(5);
        ___qtablewidgetitem202->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem203 = elecpipe_value->verticalHeaderItem(6);
        ___qtablewidgetitem203->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem204 = elecpipe_value->verticalHeaderItem(7);
        ___qtablewidgetitem204->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem205 = elecpipe_value->verticalHeaderItem(8);
        ___qtablewidgetitem205->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem206 = elecpipe_value->verticalHeaderItem(9);
        ___qtablewidgetitem206->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem207 = elecpipe_value->verticalHeaderItem(10);
        ___qtablewidgetitem207->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem208 = elecpipe_value->verticalHeaderItem(11);
        ___qtablewidgetitem208->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));

        const bool __sortingEnabled6 = elecpipe_value->isSortingEnabled();
        elecpipe_value->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem209 = elecpipe_value->item(0, 0);
        ___qtablewidgetitem209->setText(QApplication::translate("MainWindow", "13-1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem210 = elecpipe_value->item(0, 1);
        ___qtablewidgetitem210->setText(QApplication::translate("MainWindow", "0.02+j0.016", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem211 = elecpipe_value->item(0, 2);
        ___qtablewidgetitem211->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem212 = elecpipe_value->item(1, 0);
        ___qtablewidgetitem212->setText(QApplication::translate("MainWindow", "1-2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem213 = elecpipe_value->item(1, 1);
        ___qtablewidgetitem213->setText(QApplication::translate("MainWindow", "0.008205+j0.019207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem214 = elecpipe_value->item(1, 2);
        ___qtablewidgetitem214->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem215 = elecpipe_value->item(2, 0);
        ___qtablewidgetitem215->setText(QApplication::translate("MainWindow", "1-5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem216 = elecpipe_value->item(2, 1);
        ___qtablewidgetitem216->setText(QApplication::translate("MainWindow", "0.008205+j0.019207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem217 = elecpipe_value->item(2, 2);
        ___qtablewidgetitem217->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem218 = elecpipe_value->item(3, 0);
        ___qtablewidgetitem218->setText(QApplication::translate("MainWindow", "1-3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem219 = elecpipe_value->item(3, 1);
        ___qtablewidgetitem219->setText(QApplication::translate("MainWindow", "0.008205+j0.019207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem220 = elecpipe_value->item(3, 2);
        ___qtablewidgetitem220->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem221 = elecpipe_value->item(4, 0);
        ___qtablewidgetitem221->setText(QApplication::translate("MainWindow", "5-6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem222 = elecpipe_value->item(4, 1);
        ___qtablewidgetitem222->setText(QApplication::translate("MainWindow", "0.008205+j0.019207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem223 = elecpipe_value->item(4, 2);
        ___qtablewidgetitem223->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem224 = elecpipe_value->item(5, 0);
        ___qtablewidgetitem224->setText(QApplication::translate("MainWindow", "5-11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem225 = elecpipe_value->item(5, 1);
        ___qtablewidgetitem225->setText(QApplication::translate("MainWindow", "0.008205+j0.019207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem226 = elecpipe_value->item(5, 2);
        ___qtablewidgetitem226->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem227 = elecpipe_value->item(6, 0);
        ___qtablewidgetitem227->setText(QApplication::translate("MainWindow", "5-9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem228 = elecpipe_value->item(6, 1);
        ___qtablewidgetitem228->setText(QApplication::translate("MainWindow", "0.008205+j0.019207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem229 = elecpipe_value->item(6, 2);
        ___qtablewidgetitem229->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem230 = elecpipe_value->item(7, 0);
        ___qtablewidgetitem230->setText(QApplication::translate("MainWindow", "2-12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem231 = elecpipe_value->item(7, 1);
        ___qtablewidgetitem231->setText(QApplication::translate("MainWindow", "0.008205+j0.019207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem232 = elecpipe_value->item(7, 2);
        ___qtablewidgetitem232->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem233 = elecpipe_value->item(8, 0);
        ___qtablewidgetitem233->setText(QApplication::translate("MainWindow", "3-4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem234 = elecpipe_value->item(8, 1);
        ___qtablewidgetitem234->setText(QApplication::translate("MainWindow", "0.008205+j0.019207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem235 = elecpipe_value->item(8, 2);
        ___qtablewidgetitem235->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem236 = elecpipe_value->item(9, 0);
        ___qtablewidgetitem236->setText(QApplication::translate("MainWindow", "6-7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem237 = elecpipe_value->item(9, 1);
        ___qtablewidgetitem237->setText(QApplication::translate("MainWindow", "0.008205+j0.019207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem238 = elecpipe_value->item(9, 2);
        ___qtablewidgetitem238->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem239 = elecpipe_value->item(10, 0);
        ___qtablewidgetitem239->setText(QApplication::translate("MainWindow", "6-8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem240 = elecpipe_value->item(10, 1);
        ___qtablewidgetitem240->setText(QApplication::translate("MainWindow", "0.008205+j0.019207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem241 = elecpipe_value->item(10, 2);
        ___qtablewidgetitem241->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem242 = elecpipe_value->item(11, 0);
        ___qtablewidgetitem242->setText(QApplication::translate("MainWindow", "9-10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem243 = elecpipe_value->item(11, 1);
        ___qtablewidgetitem243->setText(QApplication::translate("MainWindow", "0.008205+j0.019207", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem244 = elecpipe_value->item(11, 2);
        ___qtablewidgetitem244->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        elecpipe_value->setSortingEnabled(__sortingEnabled6);

        label_25->setText(QApplication::translate("MainWindow", "\347\203\255\345\212\233\347\263\273\347\273\237\347\256\241\351\201\223\345\217\202\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem245 = heatpipe_value->horizontalHeaderItem(0);
        ___qtablewidgetitem245->setText(QApplication::translate("MainWindow", "\347\256\241\351\201\223\350\265\260\345\220\221", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem246 = heatpipe_value->horizontalHeaderItem(1);
        ___qtablewidgetitem246->setText(QApplication::translate("MainWindow", "\351\225\277\345\272\246/m", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem247 = heatpipe_value->horizontalHeaderItem(2);
        ___qtablewidgetitem247->setText(QApplication::translate("MainWindow", "\347\233\264\345\276\204/mm", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem248 = heatpipe_value->verticalHeaderItem(0);
        ___qtablewidgetitem248->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem249 = heatpipe_value->verticalHeaderItem(1);
        ___qtablewidgetitem249->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem250 = heatpipe_value->verticalHeaderItem(2);
        ___qtablewidgetitem250->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem251 = heatpipe_value->verticalHeaderItem(3);
        ___qtablewidgetitem251->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem252 = heatpipe_value->verticalHeaderItem(4);
        ___qtablewidgetitem252->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem253 = heatpipe_value->verticalHeaderItem(5);
        ___qtablewidgetitem253->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem254 = heatpipe_value->verticalHeaderItem(6);
        ___qtablewidgetitem254->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem255 = heatpipe_value->verticalHeaderItem(7);
        ___qtablewidgetitem255->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem256 = heatpipe_value->verticalHeaderItem(8);
        ___qtablewidgetitem256->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem257 = heatpipe_value->verticalHeaderItem(9);
        ___qtablewidgetitem257->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem258 = heatpipe_value->verticalHeaderItem(10);
        ___qtablewidgetitem258->setText(QApplication::translate("MainWindow", "11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem259 = heatpipe_value->verticalHeaderItem(11);
        ___qtablewidgetitem259->setText(QApplication::translate("MainWindow", "12", Q_NULLPTR));

        const bool __sortingEnabled7 = heatpipe_value->isSortingEnabled();
        heatpipe_value->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem260 = heatpipe_value->item(0, 0);
        ___qtablewidgetitem260->setText(QApplication::translate("MainWindow", "13-1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem261 = heatpipe_value->item(0, 1);
        ___qtablewidgetitem261->setText(QApplication::translate("MainWindow", "500", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem262 = heatpipe_value->item(0, 2);
        ___qtablewidgetitem262->setText(QApplication::translate("MainWindow", "200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem263 = heatpipe_value->item(1, 0);
        ___qtablewidgetitem263->setText(QApplication::translate("MainWindow", "1-2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem264 = heatpipe_value->item(1, 1);
        ___qtablewidgetitem264->setText(QApplication::translate("MainWindow", "400", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem265 = heatpipe_value->item(1, 2);
        ___qtablewidgetitem265->setText(QApplication::translate("MainWindow", "200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem266 = heatpipe_value->item(2, 0);
        ___qtablewidgetitem266->setText(QApplication::translate("MainWindow", "2-3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem267 = heatpipe_value->item(2, 1);
        ___qtablewidgetitem267->setText(QApplication::translate("MainWindow", "600", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem268 = heatpipe_value->item(2, 2);
        ___qtablewidgetitem268->setText(QApplication::translate("MainWindow", "200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem269 = heatpipe_value->item(3, 0);
        ___qtablewidgetitem269->setText(QApplication::translate("MainWindow", "4-3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem270 = heatpipe_value->item(3, 1);
        ___qtablewidgetitem270->setText(QApplication::translate("MainWindow", "400", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem271 = heatpipe_value->item(3, 2);
        ___qtablewidgetitem271->setText(QApplication::translate("MainWindow", "200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem272 = heatpipe_value->item(4, 0);
        ___qtablewidgetitem272->setText(QApplication::translate("MainWindow", "12-4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem273 = heatpipe_value->item(4, 1);
        ___qtablewidgetitem273->setText(QApplication::translate("MainWindow", "600", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem274 = heatpipe_value->item(4, 2);
        ___qtablewidgetitem274->setText(QApplication::translate("MainWindow", "200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem275 = heatpipe_value->item(5, 0);
        ___qtablewidgetitem275->setText(QApplication::translate("MainWindow", "1-5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem276 = heatpipe_value->item(5, 1);
        ___qtablewidgetitem276->setText(QApplication::translate("MainWindow", "200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem277 = heatpipe_value->item(5, 2);
        ___qtablewidgetitem277->setText(QApplication::translate("MainWindow", "200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem278 = heatpipe_value->item(6, 0);
        ___qtablewidgetitem278->setText(QApplication::translate("MainWindow", "1-6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem279 = heatpipe_value->item(6, 1);
        ___qtablewidgetitem279->setText(QApplication::translate("MainWindow", "150", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem280 = heatpipe_value->item(6, 2);
        ___qtablewidgetitem280->setText(QApplication::translate("MainWindow", "200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem281 = heatpipe_value->item(7, 0);
        ___qtablewidgetitem281->setText(QApplication::translate("MainWindow", "2-7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem282 = heatpipe_value->item(7, 1);
        ___qtablewidgetitem282->setText(QApplication::translate("MainWindow", "180", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem283 = heatpipe_value->item(7, 2);
        ___qtablewidgetitem283->setText(QApplication::translate("MainWindow", "200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem284 = heatpipe_value->item(8, 0);
        ___qtablewidgetitem284->setText(QApplication::translate("MainWindow", "2-8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem285 = heatpipe_value->item(8, 1);
        ___qtablewidgetitem285->setText(QApplication::translate("MainWindow", "150", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem286 = heatpipe_value->item(8, 2);
        ___qtablewidgetitem286->setText(QApplication::translate("MainWindow", "200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem287 = heatpipe_value->item(9, 0);
        ___qtablewidgetitem287->setText(QApplication::translate("MainWindow", "3-9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem288 = heatpipe_value->item(9, 1);
        ___qtablewidgetitem288->setText(QApplication::translate("MainWindow", "100", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem289 = heatpipe_value->item(9, 2);
        ___qtablewidgetitem289->setText(QApplication::translate("MainWindow", "200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem290 = heatpipe_value->item(10, 0);
        ___qtablewidgetitem290->setText(QApplication::translate("MainWindow", "3-10", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem291 = heatpipe_value->item(10, 1);
        ___qtablewidgetitem291->setText(QApplication::translate("MainWindow", "110", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem292 = heatpipe_value->item(10, 2);
        ___qtablewidgetitem292->setText(QApplication::translate("MainWindow", "200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem293 = heatpipe_value->item(11, 0);
        ___qtablewidgetitem293->setText(QApplication::translate("MainWindow", "4-11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem294 = heatpipe_value->item(11, 1);
        ___qtablewidgetitem294->setText(QApplication::translate("MainWindow", "90", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem295 = heatpipe_value->item(11, 2);
        ___qtablewidgetitem295->setText(QApplication::translate("MainWindow", "200", Q_NULLPTR));
        heatpipe_value->setSortingEnabled(__sortingEnabled7);

        label_24->setText(QApplication::translate("MainWindow", "\345\244\251\347\204\266\346\260\224\347\263\273\347\273\237\350\264\237\350\215\267\350\212\202\347\202\271\346\225\260\346\215\256", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem296 = gasnode_value->horizontalHeaderItem(0);
        ___qtablewidgetitem296->setText(QApplication::translate("MainWindow", "\350\212\202\347\202\271\347\274\226\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem297 = gasnode_value->horizontalHeaderItem(1);
        ___qtablewidgetitem297->setText(QApplication::translate("MainWindow", "\350\264\237\350\215\267/m\302\263/h", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem298 = gasnode_value->verticalHeaderItem(0);
        ___qtablewidgetitem298->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem299 = gasnode_value->verticalHeaderItem(1);
        ___qtablewidgetitem299->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem300 = gasnode_value->verticalHeaderItem(2);
        ___qtablewidgetitem300->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem301 = gasnode_value->verticalHeaderItem(3);
        ___qtablewidgetitem301->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem302 = gasnode_value->verticalHeaderItem(4);
        ___qtablewidgetitem302->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));

        const bool __sortingEnabled8 = gasnode_value->isSortingEnabled();
        gasnode_value->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem303 = gasnode_value->item(0, 0);
        ___qtablewidgetitem303->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem304 = gasnode_value->item(0, 1);
        ___qtablewidgetitem304->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem305 = gasnode_value->item(1, 0);
        ___qtablewidgetitem305->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem306 = gasnode_value->item(1, 1);
        ___qtablewidgetitem306->setText(QApplication::translate("MainWindow", "1100", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem307 = gasnode_value->item(2, 0);
        ___qtablewidgetitem307->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem308 = gasnode_value->item(2, 1);
        ___qtablewidgetitem308->setText(QApplication::translate("MainWindow", "1647.12", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem309 = gasnode_value->item(3, 0);
        ___qtablewidgetitem309->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem310 = gasnode_value->item(3, 1);
        ___qtablewidgetitem310->setText(QApplication::translate("MainWindow", "1871.35", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem311 = gasnode_value->item(4, 0);
        ___qtablewidgetitem311->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem312 = gasnode_value->item(4, 1);
        ___qtablewidgetitem312->setText(QApplication::translate("MainWindow", "2000", Q_NULLPTR));
        gasnode_value->setSortingEnabled(__sortingEnabled8);

        label_23->setText(QApplication::translate("MainWindow", "\345\244\251\347\204\266\346\260\224\347\263\273\347\273\237\347\256\241\351\201\223\345\217\202\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem313 = gaspipe_value->horizontalHeaderItem(0);
        ___qtablewidgetitem313->setText(QApplication::translate("MainWindow", "\347\256\241\351\201\223\350\265\260\345\220\221", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem314 = gaspipe_value->horizontalHeaderItem(1);
        ___qtablewidgetitem314->setText(QApplication::translate("MainWindow", "\351\225\277\345\272\246/m", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem315 = gaspipe_value->horizontalHeaderItem(2);
        ___qtablewidgetitem315->setText(QApplication::translate("MainWindow", "\347\233\264\345\276\204/mm", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem316 = gaspipe_value->verticalHeaderItem(0);
        ___qtablewidgetitem316->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem317 = gaspipe_value->verticalHeaderItem(1);
        ___qtablewidgetitem317->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem318 = gaspipe_value->verticalHeaderItem(2);
        ___qtablewidgetitem318->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem319 = gaspipe_value->verticalHeaderItem(3);
        ___qtablewidgetitem319->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem320 = gaspipe_value->verticalHeaderItem(4);
        ___qtablewidgetitem320->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem321 = gaspipe_value->verticalHeaderItem(5);
        ___qtablewidgetitem321->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem322 = gaspipe_value->verticalHeaderItem(6);
        ___qtablewidgetitem322->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));

        const bool __sortingEnabled9 = gaspipe_value->isSortingEnabled();
        gaspipe_value->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem323 = gaspipe_value->item(0, 0);
        ___qtablewidgetitem323->setText(QApplication::translate("MainWindow", "1-3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem324 = gaspipe_value->item(0, 1);
        ___qtablewidgetitem324->setText(QApplication::translate("MainWindow", "500", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem325 = gaspipe_value->item(0, 2);
        ___qtablewidgetitem325->setText(QApplication::translate("MainWindow", "150", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem326 = gaspipe_value->item(1, 0);
        ___qtablewidgetitem326->setText(QApplication::translate("MainWindow", "2-6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem327 = gaspipe_value->item(1, 1);
        ___qtablewidgetitem327->setText(QApplication::translate("MainWindow", "2500", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem328 = gaspipe_value->item(1, 2);
        ___qtablewidgetitem328->setText(QApplication::translate("MainWindow", "150", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem329 = gaspipe_value->item(2, 0);
        ___qtablewidgetitem329->setText(QApplication::translate("MainWindow", "3-4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem330 = gaspipe_value->item(2, 1);
        ___qtablewidgetitem330->setText(QApplication::translate("MainWindow", "500", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem331 = gaspipe_value->item(2, 2);
        ___qtablewidgetitem331->setText(QApplication::translate("MainWindow", "150", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem332 = gaspipe_value->item(3, 0);
        ___qtablewidgetitem332->setText(QApplication::translate("MainWindow", "3-5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem333 = gaspipe_value->item(3, 1);
        ___qtablewidgetitem333->setText(QApplication::translate("MainWindow", "400", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem334 = gaspipe_value->item(3, 2);
        ___qtablewidgetitem334->setText(QApplication::translate("MainWindow", "150", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem335 = gaspipe_value->item(4, 0);
        ___qtablewidgetitem335->setText(QApplication::translate("MainWindow", "5-7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem336 = gaspipe_value->item(4, 1);
        ___qtablewidgetitem336->setText(QApplication::translate("MainWindow", "600", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem337 = gaspipe_value->item(4, 2);
        ___qtablewidgetitem337->setText(QApplication::translate("MainWindow", "150", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem338 = gaspipe_value->item(5, 0);
        ___qtablewidgetitem338->setText(QApplication::translate("MainWindow", "7-6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem339 = gaspipe_value->item(5, 1);
        ___qtablewidgetitem339->setText(QApplication::translate("MainWindow", "200", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem340 = gaspipe_value->item(5, 2);
        ___qtablewidgetitem340->setText(QApplication::translate("MainWindow", "150", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem341 = gaspipe_value->item(6, 0);
        ___qtablewidgetitem341->setText(QApplication::translate("MainWindow", "3-2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem342 = gaspipe_value->item(6, 1);
        ___qtablewidgetitem342->setText(QApplication::translate("MainWindow", "2500", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem343 = gaspipe_value->item(6, 2);
        ___qtablewidgetitem343->setText(QApplication::translate("MainWindow", "150", Q_NULLPTR));
        gaspipe_value->setSortingEnabled(__sortingEnabled9);

        pushButton->setText(QApplication::translate("MainWindow", "\342\206\220 \344\277\256\346\224\271\345\217\202\346\225\260", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\342\227\200", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "\342\226\266", Q_NULLPTR));
        authorname_2->setText(QApplication::translate("MainWindow", "Powered by Phantom T", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "IES \345\217\202\346\225\260", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\350\260\203\345\272\246\345\211\215\345\220\216", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\350\264\237\350\275\275\345\217\230\345\214\226", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "IES\346\274\224\347\244\272 v1.0", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\350\257\264\346\230\216", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
