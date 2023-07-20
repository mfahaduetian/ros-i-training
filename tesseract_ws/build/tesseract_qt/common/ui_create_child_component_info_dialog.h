/********************************************************************************
** Form generated from reading UI file 'create_child_component_info_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATE_CHILD_COMPONENT_INFO_DIALOG_H
#define UI_CREATE_CHILD_COMPONENT_INFO_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>

QT_BEGIN_NAMESPACE

class Ui_CreateChildComponentInfoDialog
{
public:
    QFormLayout *formLayout;
    QLineEdit *ns_line_edit;
    QLabel *scene_name_label;
    QLineEdit *scene_name_line_edit;
    QLineEdit *description_line_edit;
    QLabel *description_label;
    QLabel *lineage_label;
    QDialogButtonBox *buttonBox;
    QListView *lineage_list_view;
    QLineEdit *name_line_edit;
    QLabel *name_label;
    QLabel *ns_label;

    void setupUi(QDialog *CreateChildComponentInfoDialog)
    {
        if (CreateChildComponentInfoDialog->objectName().isEmpty())
            CreateChildComponentInfoDialog->setObjectName(QString::fromUtf8("CreateChildComponentInfoDialog"));
        CreateChildComponentInfoDialog->resize(400, 262);
        formLayout = new QFormLayout(CreateChildComponentInfoDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        ns_line_edit = new QLineEdit(CreateChildComponentInfoDialog);
        ns_line_edit->setObjectName(QString::fromUtf8("ns_line_edit"));
        ns_line_edit->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, ns_line_edit);

        scene_name_label = new QLabel(CreateChildComponentInfoDialog);
        scene_name_label->setObjectName(QString::fromUtf8("scene_name_label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, scene_name_label);

        scene_name_line_edit = new QLineEdit(CreateChildComponentInfoDialog);
        scene_name_line_edit->setObjectName(QString::fromUtf8("scene_name_line_edit"));
        scene_name_line_edit->setReadOnly(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, scene_name_line_edit);

        description_line_edit = new QLineEdit(CreateChildComponentInfoDialog);
        description_line_edit->setObjectName(QString::fromUtf8("description_line_edit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, description_line_edit);

        description_label = new QLabel(CreateChildComponentInfoDialog);
        description_label->setObjectName(QString::fromUtf8("description_label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, description_label);

        lineage_label = new QLabel(CreateChildComponentInfoDialog);
        lineage_label->setObjectName(QString::fromUtf8("lineage_label"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lineage_label);

        buttonBox = new QDialogButtonBox(CreateChildComponentInfoDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(5, QFormLayout::FieldRole, buttonBox);

        lineage_list_view = new QListView(CreateChildComponentInfoDialog);
        lineage_list_view->setObjectName(QString::fromUtf8("lineage_list_view"));
        lineage_list_view->setEditTriggers(QAbstractItemView::NoEditTriggers);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineage_list_view);

        name_line_edit = new QLineEdit(CreateChildComponentInfoDialog);
        name_line_edit->setObjectName(QString::fromUtf8("name_line_edit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name_line_edit);

        name_label = new QLabel(CreateChildComponentInfoDialog);
        name_label->setObjectName(QString::fromUtf8("name_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, name_label);

        ns_label = new QLabel(CreateChildComponentInfoDialog);
        ns_label->setObjectName(QString::fromUtf8("ns_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, ns_label);


        retranslateUi(CreateChildComponentInfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateChildComponentInfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateChildComponentInfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateChildComponentInfoDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateChildComponentInfoDialog)
    {
        CreateChildComponentInfoDialog->setWindowTitle(QCoreApplication::translate("CreateChildComponentInfoDialog", "Dialog", nullptr));
        ns_line_edit->setText(QString());
        ns_line_edit->setPlaceholderText(QCoreApplication::translate("CreateChildComponentInfoDialog", "<auto generated>", nullptr));
        scene_name_label->setText(QCoreApplication::translate("CreateChildComponentInfoDialog", "Scene Name:", nullptr));
        description_label->setText(QCoreApplication::translate("CreateChildComponentInfoDialog", "Description:", nullptr));
        lineage_label->setText(QCoreApplication::translate("CreateChildComponentInfoDialog", "Lineage:", nullptr));
        name_label->setText(QCoreApplication::translate("CreateChildComponentInfoDialog", "Name:", nullptr));
        ns_label->setText(QCoreApplication::translate("CreateChildComponentInfoDialog", "Namespace:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateChildComponentInfoDialog: public Ui_CreateChildComponentInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATE_CHILD_COMPONENT_INFO_DIALOG_H
