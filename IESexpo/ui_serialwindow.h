/********************************************************************************
** Form generated from reading UI file 'serialwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALWINDOW_H
#define UI_SERIALWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_serialwindow
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextBrowser *recievetxt;

    void setupUi(QDialog *serialwindow)
    {
        if (serialwindow->objectName().isEmpty())
            serialwindow->setObjectName(QStringLiteral("serialwindow"));
        serialwindow->resize(461, 338);
        serialwindow->setMaximumSize(QSize(800, 600));
        serialwindow->setStyleSheet(QStringLiteral("background-color: rgb(85, 255, 255);"));
        gridLayout = new QGridLayout(serialwindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(serialwindow);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("font: 75 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        recievetxt = new QTextBrowser(serialwindow);
        recievetxt->setObjectName(QStringLiteral("recievetxt"));

        verticalLayout->addWidget(recievetxt);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 8);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(serialwindow);

        QMetaObject::connectSlotsByName(serialwindow);
    } // setupUi

    void retranslateUi(QDialog *serialwindow)
    {
        serialwindow->setWindowTitle(QApplication::translate("serialwindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("serialwindow", "\346\216\245\345\217\227\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class serialwindow: public Ui_serialwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALWINDOW_H
