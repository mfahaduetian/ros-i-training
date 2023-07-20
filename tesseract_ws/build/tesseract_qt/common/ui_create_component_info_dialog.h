/********************************************************************************
** Form generated from reading UI file 'create_component_info_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_COMPONENT_INFO_DIALOG_H
#define UI_CREATE_COMPONENT_INFO_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_CreateComponentInfoDialog
{
public:
    QFormLayout *formLayout;
    QLabel *ns_label;
    QLineEdit *ns_line_edit;
    QLabel *scene_name_label;
    QComboBox *scene_name_combo_box;
    QLabel *description_label;
    QLineEdit *description_line_edit;
    QDialogButtonBox *buttonBox;
    QLabel *name_label;
    QLineEdit *name_line_edit;

    void setupUi(QDialog *CreateComponentInfoDialog)
    {
        if (CreateComponentInfoDialog->objectName().isEmpty())
            CreateComponentInfoDialog->setObjectName(QString::fromUtf8("CreateComponentInfoDialog"));
        CreateComponentInfoDialog->resize(400, 154);
        formLayout = new QFormLayout(CreateComponentInfoDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        ns_label = new QLabel(CreateComponentInfoDialog);
        ns_label->setObjectName(QString::fromUtf8("ns_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, ns_label);

        ns_line_edit = new QLineEdit(CreateComponentInfoDialog);
        ns_line_edit->setObjectName(QString::fromUtf8("ns_line_edit"));
        ns_line_edit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, ns_line_edit);

        scene_name_label = new QLabel(CreateComponentInfoDialog);
        scene_name_label->setObjectName(QString::fromUtf8("scene_name_label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, scene_name_label);

        scene_name_combo_box = new QComboBox(CreateComponentInfoDialog);
        scene_name_combo_box->setObjectName(QString::fromUtf8("scene_name_combo_box"));
        scene_name_combo_box->setEditable(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, scene_name_combo_box);

        description_label = new QLabel(CreateComponentInfoDialog);
        description_label->setObjectName(QString::fromUtf8("description_label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, description_label);

        description_line_edit = new QLineEdit(CreateComponentInfoDialog);
        description_line_edit->setObjectName(QString::fromUtf8("description_line_edit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, description_line_edit);

        buttonBox = new QDialogButtonBox(CreateComponentInfoDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(4, QFormLayout::FieldRole, buttonBox);

        name_label = new QLabel(CreateComponentInfoDialog);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, name_label);

        name_line_edit = new QLineEdit(CreateComponentInfoDialog);
        name_line_edit->setObjectName(QString::fromUtf8("name_line_edit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name_line_edit);


        retranslateUi(CreateComponentInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateComponentInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateComponentInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateComponentInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateComponentInfoDialog)
    {
        CreateComponentInfoDialog->setWindowTitle(QCoreApplication::translate("CreateComponentInfoDialog", "Dialog", nullptr));
        ns_label->setText(QCoreApplication::translate("CreateComponentInfoDialog", "Namespace:", nullptr));
        ns_line_edit->setPlaceholderText(QCoreApplication::translate("CreateComponentInfoDialog", "<auto generated>", nullptr));
        scene_name_label->setText(QCoreApplication::translate("CreateComponentInfoDialog", "Scene Name:", nullptr));
        description_label->setText(QCoreApplication::translate("CreateComponentInfoDialog", "Description:", nullptr));
        name_label->setText(QCoreApplication::translate("CreateComponentInfoDialog", "Name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateComponentInfoDialog: public Ui_CreateComponentInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_COMPONENT_INFO_DIALOG_H
