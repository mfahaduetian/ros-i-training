/********************************************************************************
** Form generated from reading UI file 'component_info_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENT_INFO_DIALOG_H
#define UI_COMPONENT_INFO_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "tesseract_qt/common/widgets/component_info_manager_widget.h"

QT_BEGIN_NAMESPACE

class Ui_ComponentInfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *component_info_label;
    QComboBox *component_info_combo_box;
    tesseract_gui::ComponentInfoManagerWidget *component_info_manager_widget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ComponentInfoDialog)
    {
        if (ComponentInfoDialog->objectName().isEmpty())
            ComponentInfoDialog->setObjectName(QString::fromUtf8("ComponentInfoDialog"));
        ComponentInfoDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(ComponentInfoDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(ComponentInfoDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        component_info_label = new QLabel(frame);
        component_info_label->setObjectName(QString::fromUtf8("component_info_label"));

        horizontalLayout->addWidget(component_info_label);

        component_info_combo_box = new QComboBox(frame);
        component_info_combo_box->setObjectName(QString::fromUtf8("component_info_combo_box"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(component_info_combo_box->sizePolicy().hasHeightForWidth());
        component_info_combo_box->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(component_info_combo_box);


        verticalLayout->addWidget(frame);

        component_info_manager_widget = new tesseract_gui::ComponentInfoManagerWidget(ComponentInfoDialog);
        component_info_manager_widget->setObjectName(QString::fromUtf8("component_info_manager_widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(component_info_manager_widget->sizePolicy().hasHeightForWidth());
        component_info_manager_widget->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(component_info_manager_widget);

        buttonBox = new QDialogButtonBox(ComponentInfoDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ComponentInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ComponentInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ComponentInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ComponentInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *ComponentInfoDialog)
    {
        ComponentInfoDialog->setWindowTitle(QCoreApplication::translate("ComponentInfoDialog", "Dialog", nullptr));
        component_info_label->setText(QCoreApplication::translate("ComponentInfoDialog", "Component Info:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComponentInfoDialog: public Ui_ComponentInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENT_INFO_DIALOG_H
