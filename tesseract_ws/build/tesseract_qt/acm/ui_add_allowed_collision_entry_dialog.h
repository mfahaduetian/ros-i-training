/********************************************************************************
** Form generated from reading UI file 'add_allowed_collision_entry_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_ALLOWED_COLLISION_ENTRY_DIALOG_H
#define UI_ADD_ALLOWED_COLLISION_ENTRY_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddAllowedCollisionEntryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QFormLayout *formLayout;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLineEdit *linkName1LineEdit;
    QLineEdit *linkName2LineEdit;
    QLineEdit *reasonLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddAllowedCollisionEntryDialog)
    {
        if (AddAllowedCollisionEntryDialog->objectName().isEmpty())
            AddAllowedCollisionEntryDialog->setObjectName(QString::fromUtf8("AddAllowedCollisionEntryDialog"));
        AddAllowedCollisionEntryDialog->resize(400, 154);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddAllowedCollisionEntryDialog->sizePolicy().hasHeightForWidth());
        AddAllowedCollisionEntryDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AddAllowedCollisionEntryDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        frame = new QFrame(AddAllowedCollisionEntryDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label1 = new QLabel(frame);
        label1->setObjectName(QString::fromUtf8("label1"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label1);

        label2 = new QLabel(frame);
        label2->setObjectName(QString::fromUtf8("label2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label2);

        label3 = new QLabel(frame);
        label3->setObjectName(QString::fromUtf8("label3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label3);

        linkName1LineEdit = new QLineEdit(frame);
        linkName1LineEdit->setObjectName(QString::fromUtf8("linkName1LineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, linkName1LineEdit);

        linkName2LineEdit = new QLineEdit(frame);
        linkName2LineEdit->setObjectName(QString::fromUtf8("linkName2LineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, linkName2LineEdit);

        reasonLineEdit = new QLineEdit(frame);
        reasonLineEdit->setObjectName(QString::fromUtf8("reasonLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, reasonLineEdit);


        verticalLayout->addWidget(frame);

        buttonBox = new QDialogButtonBox(AddAllowedCollisionEntryDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddAllowedCollisionEntryDialog);

        QMetaObject::connectSlotsByName(AddAllowedCollisionEntryDialog);
    } // setupUi

    void retranslateUi(QDialog *AddAllowedCollisionEntryDialog)
    {
        AddAllowedCollisionEntryDialog->setWindowTitle(QCoreApplication::translate("AddAllowedCollisionEntryDialog", "Dialog", nullptr));
        label1->setText(QCoreApplication::translate("AddAllowedCollisionEntryDialog", "Link Name:", nullptr));
        label2->setText(QCoreApplication::translate("AddAllowedCollisionEntryDialog", "Link Name:", nullptr));
        label3->setText(QCoreApplication::translate("AddAllowedCollisionEntryDialog", "Reason:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAllowedCollisionEntryDialog: public Ui_AddAllowedCollisionEntryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_ALLOWED_COLLISION_ENTRY_DIALOG_H
