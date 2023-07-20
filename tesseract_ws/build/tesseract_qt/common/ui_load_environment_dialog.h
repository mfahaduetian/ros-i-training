/********************************************************************************
** Form generated from reading UI file 'load_environment_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOAD_ENVIRONMENT_DIALOG_H
#define UI_LOAD_ENVIRONMENT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QVBoxLayout>
#include "tesseract_qt/common/widgets/load_environment_widget.h"

QT_BEGIN_NAMESPACE

class Ui_LoadEnvironmentDialog
{
public:
    QVBoxLayout *verticalLayout;
    tesseract_gui::LoadEnvironmentWidget *load_widget;
    QDialogButtonBox *button_box;

    void setupUi(QDialog *LoadEnvironmentDialog)
    {
        if (LoadEnvironmentDialog->objectName().isEmpty())
            LoadEnvironmentDialog->setObjectName(QString::fromUtf8("LoadEnvironmentDialog"));
        LoadEnvironmentDialog->resize(400, 97);
        verticalLayout = new QVBoxLayout(LoadEnvironmentDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        load_widget = new tesseract_gui::LoadEnvironmentWidget(LoadEnvironmentDialog);
        load_widget->setObjectName(QString::fromUtf8("load_widget"));

        verticalLayout->addWidget(load_widget);

        button_box = new QDialogButtonBox(LoadEnvironmentDialog);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        button_box->setOrientation(Qt::Horizontal);
        button_box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(button_box);


        retranslateUi(LoadEnvironmentDialog);
        QObject::connect(button_box, SIGNAL(accepted()), LoadEnvironmentDialog, SLOT(accept()));
        QObject::connect(button_box, SIGNAL(rejected()), LoadEnvironmentDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoadEnvironmentDialog);
    } // setupUi

    void retranslateUi(QDialog *LoadEnvironmentDialog)
    {
        LoadEnvironmentDialog->setWindowTitle(QCoreApplication::translate("LoadEnvironmentDialog", "Load Environment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadEnvironmentDialog: public Ui_LoadEnvironmentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOAD_ENVIRONMENT_DIALOG_H
