/********************************************************************************
** Form generated from reading UI file 'studio_manipulation_config_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDIO_MANIPULATION_CONFIG_DIALOG_H
#define UI_STUDIO_MANIPULATION_CONFIG_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include "tesseract_qt/common/widgets/component_info_widget.h"

QT_BEGIN_NAMESPACE

class Ui_StudioManipulationConfigDialog
{
public:
    QFormLayout *formLayout;
    QLabel *component_info_label;
    tesseract_gui::ComponentInfoWidget *component_info_widget;
    QDialogButtonBox *buttonBox;
    QLabel *create_child_env_label;
    QCheckBox *create_child_env_check_box;

    void setupUi(QDialog *StudioManipulationConfigDialog)
    {
        if (StudioManipulationConfigDialog->objectName().isEmpty())
            StudioManipulationConfigDialog->setObjectName(QString::fromUtf8("StudioManipulationConfigDialog"));
        StudioManipulationConfigDialog->resize(400, 94);
        formLayout = new QFormLayout(StudioManipulationConfigDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        component_info_label = new QLabel(StudioManipulationConfigDialog);
        component_info_label->setObjectName(QString::fromUtf8("component_info_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, component_info_label);

        component_info_widget = new tesseract_gui::ComponentInfoWidget(StudioManipulationConfigDialog);
        component_info_widget->setObjectName(QString::fromUtf8("component_info_widget"));

        formLayout->setWidget(0, QFormLayout::FieldRole, component_info_widget);

        buttonBox = new QDialogButtonBox(StudioManipulationConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(3, QFormLayout::FieldRole, buttonBox);

        create_child_env_label = new QLabel(StudioManipulationConfigDialog);
        create_child_env_label->setObjectName(QString::fromUtf8("create_child_env_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, create_child_env_label);

        create_child_env_check_box = new QCheckBox(StudioManipulationConfigDialog);
        create_child_env_check_box->setObjectName(QString::fromUtf8("create_child_env_check_box"));

        formLayout->setWidget(1, QFormLayout::FieldRole, create_child_env_check_box);


        retranslateUi(StudioManipulationConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), StudioManipulationConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StudioManipulationConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(StudioManipulationConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *StudioManipulationConfigDialog)
    {
        StudioManipulationConfigDialog->setWindowTitle(QCoreApplication::translate("StudioManipulationConfigDialog", "Dialog", nullptr));
        component_info_label->setText(QCoreApplication::translate("StudioManipulationConfigDialog", "Component Info:", nullptr));
        create_child_env_label->setText(QCoreApplication::translate("StudioManipulationConfigDialog", "Create Child Env:", nullptr));
#if QT_CONFIG(tooltip)
        create_child_env_check_box->setToolTip(QCoreApplication::translate("StudioManipulationConfigDialog", "Indicate if child environment should be created, otherwise parent environment is modified", nullptr));
#endif // QT_CONFIG(tooltip)
        create_child_env_check_box->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class StudioManipulationConfigDialog: public Ui_StudioManipulationConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDIO_MANIPULATION_CONFIG_DIALOG_H
