/********************************************************************************
** Form generated from reading UI file 'studio_render_config_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDIO_RENDER_CONFIG_DIALOG_H
#define UI_STUDIO_RENDER_CONFIG_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include "tesseract_qt/common/widgets/component_info_widget.h"

QT_BEGIN_NAMESPACE

class Ui_StudioRenderConfigDialog
{
public:
    QFormLayout *formLayout;
    tesseract_gui::ComponentInfoWidget *component_info_widget;
    QLabel *grid_label;
    QCheckBox *grid_check_box;
    QLabel *component_info_label;
    QLabel *shadows_label;
    QCheckBox *shadows_check_box;
    QDialogButtonBox *buttonBox;
    QLabel *sky_label;
    QCheckBox *sky_check_box;
    QCheckBox *central_widget_check_box;
    QLabel *central_widget_label;

    void setupUi(QDialog *StudioRenderConfigDialog)
    {
        if (StudioRenderConfigDialog->objectName().isEmpty())
            StudioRenderConfigDialog->setObjectName(QString::fromUtf8("StudioRenderConfigDialog"));
        StudioRenderConfigDialog->resize(400, 146);
        formLayout = new QFormLayout(StudioRenderConfigDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        component_info_widget = new tesseract_gui::ComponentInfoWidget(StudioRenderConfigDialog);
        component_info_widget->setObjectName(QString::fromUtf8("component_info_widget"));

        formLayout->setWidget(0, QFormLayout::FieldRole, component_info_widget);

        grid_label = new QLabel(StudioRenderConfigDialog);
        grid_label->setObjectName(QString::fromUtf8("grid_label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, grid_label);

        grid_check_box = new QCheckBox(StudioRenderConfigDialog);
        grid_check_box->setObjectName(QString::fromUtf8("grid_check_box"));
        grid_check_box->setChecked(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, grid_check_box);

        component_info_label = new QLabel(StudioRenderConfigDialog);
        component_info_label->setObjectName(QString::fromUtf8("component_info_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, component_info_label);

        shadows_label = new QLabel(StudioRenderConfigDialog);
        shadows_label->setObjectName(QString::fromUtf8("shadows_label"));

        formLayout->setWidget(4, QFormLayout::LabelRole, shadows_label);

        shadows_check_box = new QCheckBox(StudioRenderConfigDialog);
        shadows_check_box->setObjectName(QString::fromUtf8("shadows_check_box"));

        formLayout->setWidget(4, QFormLayout::FieldRole, shadows_check_box);

        buttonBox = new QDialogButtonBox(StudioRenderConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(5, QFormLayout::FieldRole, buttonBox);

        sky_label = new QLabel(StudioRenderConfigDialog);
        sky_label->setObjectName(QString::fromUtf8("sky_label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, sky_label);

        sky_check_box = new QCheckBox(StudioRenderConfigDialog);
        sky_check_box->setObjectName(QString::fromUtf8("sky_check_box"));
        sky_check_box->setChecked(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, sky_check_box);

        central_widget_check_box = new QCheckBox(StudioRenderConfigDialog);
        central_widget_check_box->setObjectName(QString::fromUtf8("central_widget_check_box"));

        formLayout->setWidget(1, QFormLayout::FieldRole, central_widget_check_box);

        central_widget_label = new QLabel(StudioRenderConfigDialog);
        central_widget_label->setObjectName(QString::fromUtf8("central_widget_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, central_widget_label);


        retranslateUi(StudioRenderConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), StudioRenderConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StudioRenderConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(StudioRenderConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *StudioRenderConfigDialog)
    {
        StudioRenderConfigDialog->setWindowTitle(QCoreApplication::translate("StudioRenderConfigDialog", "Dialog", nullptr));
        grid_label->setText(QCoreApplication::translate("StudioRenderConfigDialog", "Show Grid:", nullptr));
        grid_check_box->setText(QString());
        component_info_label->setText(QCoreApplication::translate("StudioRenderConfigDialog", "Component Info:", nullptr));
        shadows_label->setText(QCoreApplication::translate("StudioRenderConfigDialog", "Show Shadows:", nullptr));
        shadows_check_box->setText(QString());
        sky_label->setText(QCoreApplication::translate("StudioRenderConfigDialog", "Show Sky:", nullptr));
        sky_check_box->setText(QString());
        central_widget_check_box->setText(QString());
        central_widget_label->setText(QCoreApplication::translate("StudioRenderConfigDialog", "Central Widget:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudioRenderConfigDialog: public Ui_StudioRenderConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDIO_RENDER_CONFIG_DIALOG_H
