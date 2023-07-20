/********************************************************************************
** Form generated from reading UI file 'vector3d_editor_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VECTOR3D_EDITOR_WIDGET_H
#define UI_VECTOR3D_EDITOR_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Vector3dEditor
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *group_box;
    QVBoxLayout *verticalLayout;
    QFormLayout *form_layout;
    QLabel *label_x;
    QDoubleSpinBox *double_spin_box_x;
    QLabel *label_y;
    QDoubleSpinBox *double_spin_box_y;
    QLabel *label_z;
    QDoubleSpinBox *double_spin_box_z;

    void setupUi(QWidget *Vector3dEditor)
    {
        if (Vector3dEditor->objectName().isEmpty())
            Vector3dEditor->setObjectName(QString::fromUtf8("Vector3dEditor"));
        Vector3dEditor->resize(234, 167);
        verticalLayout_2 = new QVBoxLayout(Vector3dEditor);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        group_box = new QGroupBox(Vector3dEditor);
        group_box->setObjectName(QString::fromUtf8("group_box"));
        verticalLayout = new QVBoxLayout(group_box);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        form_layout = new QFormLayout();
        form_layout->setObjectName(QString::fromUtf8("form_layout"));
        label_x = new QLabel(group_box);
        label_x->setObjectName(QString::fromUtf8("label_x"));

        form_layout->setWidget(0, QFormLayout::LabelRole, label_x);

        double_spin_box_x = new QDoubleSpinBox(group_box);
        double_spin_box_x->setObjectName(QString::fromUtf8("double_spin_box_x"));
        double_spin_box_x->setDecimals(3);
        double_spin_box_x->setMinimum(-100.000000000000000);
        double_spin_box_x->setMaximum(100.000000000000000);

        form_layout->setWidget(0, QFormLayout::FieldRole, double_spin_box_x);

        label_y = new QLabel(group_box);
        label_y->setObjectName(QString::fromUtf8("label_y"));

        form_layout->setWidget(1, QFormLayout::LabelRole, label_y);

        double_spin_box_y = new QDoubleSpinBox(group_box);
        double_spin_box_y->setObjectName(QString::fromUtf8("double_spin_box_y"));
        double_spin_box_y->setDecimals(3);
        double_spin_box_y->setMinimum(-100.000000000000000);
        double_spin_box_y->setMaximum(100.000000000000000);
        double_spin_box_y->setValue(0.000000000000000);

        form_layout->setWidget(1, QFormLayout::FieldRole, double_spin_box_y);

        label_z = new QLabel(group_box);
        label_z->setObjectName(QString::fromUtf8("label_z"));

        form_layout->setWidget(2, QFormLayout::LabelRole, label_z);

        double_spin_box_z = new QDoubleSpinBox(group_box);
        double_spin_box_z->setObjectName(QString::fromUtf8("double_spin_box_z"));
        double_spin_box_z->setDecimals(3);
        double_spin_box_z->setMinimum(-100.000000000000000);
        double_spin_box_z->setMaximum(100.000000000000000);

        form_layout->setWidget(2, QFormLayout::FieldRole, double_spin_box_z);


        verticalLayout->addLayout(form_layout);


        verticalLayout_2->addWidget(group_box);


        retranslateUi(Vector3dEditor);

        QMetaObject::connectSlotsByName(Vector3dEditor);
    } // setupUi

    void retranslateUi(QWidget *Vector3dEditor)
    {
        Vector3dEditor->setWindowTitle(QCoreApplication::translate("Vector3dEditor", "Form", nullptr));
        group_box->setTitle(QCoreApplication::translate("Vector3dEditor", "Vector", nullptr));
        label_x->setText(QCoreApplication::translate("Vector3dEditor", "x", nullptr));
        label_y->setText(QCoreApplication::translate("Vector3dEditor", "y", nullptr));
        label_z->setText(QCoreApplication::translate("Vector3dEditor", "z", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Vector3dEditor: public Ui_Vector3dEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VECTOR3D_EDITOR_WIDGET_H
