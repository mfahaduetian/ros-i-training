/********************************************************************************
** Form generated from reading UI file 'cartesian_editor_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTESIAN_EDITOR_WIDGET_H
#define UI_CARTESIAN_EDITOR_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CartesianEditorWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *position_group;
    QFormLayout *formLayout_3;
    QLabel *x_label;
    QDoubleSpinBox *x_value;
    QLabel *y_label;
    QDoubleSpinBox *y_value;
    QLabel *z_label;
    QDoubleSpinBox *z_value;
    QGroupBox *orientation_group;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLabel *roll_label;
    QDoubleSpinBox *roll_value;
    QLabel *pitch_label;
    QDoubleSpinBox *pitch_value;
    QLabel *yaw_label;
    QDoubleSpinBox *yaw_value;
    QLabel *label;
    QLabel *qx_label;
    QDoubleSpinBox *qx_value;
    QLabel *qy_label;
    QDoubleSpinBox *qy_value;
    QLabel *qz_label;
    QDoubleSpinBox *qz_value;
    QLabel *qw_label;
    QDoubleSpinBox *qw_value;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CartesianEditorWidget)
    {
        if (CartesianEditorWidget->objectName().isEmpty())
            CartesianEditorWidget->setObjectName(QString::fromUtf8("CartesianEditorWidget"));
        CartesianEditorWidget->resize(260, 531);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CartesianEditorWidget->sizePolicy().hasHeightForWidth());
        CartesianEditorWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(CartesianEditorWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        position_group = new QGroupBox(CartesianEditorWidget);
        position_group->setObjectName(QString::fromUtf8("position_group"));
        formLayout_3 = new QFormLayout(position_group);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(6, 9, 6, 6);
        x_label = new QLabel(position_group);
        x_label->setObjectName(QString::fromUtf8("x_label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(x_label->sizePolicy().hasHeightForWidth());
        x_label->setSizePolicy(sizePolicy1);
        x_label->setMinimumSize(QSize(40, 0));
        x_label->setMaximumSize(QSize(16777215, 16777215));
        x_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, x_label);

        x_value = new QDoubleSpinBox(position_group);
        x_value->setObjectName(QString::fromUtf8("x_value"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(x_value->sizePolicy().hasHeightForWidth());
        x_value->setSizePolicy(sizePolicy2);
        x_value->setDecimals(6);
        x_value->setMinimum(-16777215.000000000000000);
        x_value->setMaximum(16777215.000000000000000);
        x_value->setSingleStep(0.001000000000000);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, x_value);

        y_label = new QLabel(position_group);
        y_label->setObjectName(QString::fromUtf8("y_label"));
        y_label->setMinimumSize(QSize(40, 0));
        y_label->setMaximumSize(QSize(16777215, 16777215));
        y_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, y_label);

        y_value = new QDoubleSpinBox(position_group);
        y_value->setObjectName(QString::fromUtf8("y_value"));
        sizePolicy2.setHeightForWidth(y_value->sizePolicy().hasHeightForWidth());
        y_value->setSizePolicy(sizePolicy2);
        y_value->setDecimals(6);
        y_value->setMinimum(-16777215.000000000000000);
        y_value->setMaximum(16777215.000000000000000);
        y_value->setSingleStep(0.001000000000000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, y_value);

        z_label = new QLabel(position_group);
        z_label->setObjectName(QString::fromUtf8("z_label"));
        z_label->setMinimumSize(QSize(40, 0));
        z_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, z_label);

        z_value = new QDoubleSpinBox(position_group);
        z_value->setObjectName(QString::fromUtf8("z_value"));
        sizePolicy2.setHeightForWidth(z_value->sizePolicy().hasHeightForWidth());
        z_value->setSizePolicy(sizePolicy2);
        z_value->setDecimals(6);
        z_value->setMinimum(-16777215.000000000000000);
        z_value->setMaximum(16777215.000000000000000);
        z_value->setSingleStep(0.001000000000000);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, z_value);


        verticalLayout->addWidget(position_group);

        orientation_group = new QGroupBox(CartesianEditorWidget);
        orientation_group->setObjectName(QString::fromUtf8("orientation_group"));
        formLayout_2 = new QFormLayout(orientation_group);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(6, 9, 6, 6);
        label_2 = new QLabel(orientation_group);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(0, QFormLayout::SpanningRole, label_2);

        roll_label = new QLabel(orientation_group);
        roll_label->setObjectName(QString::fromUtf8("roll_label"));
        roll_label->setMinimumSize(QSize(40, 0));
        roll_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, roll_label);

        roll_value = new QDoubleSpinBox(orientation_group);
        roll_value->setObjectName(QString::fromUtf8("roll_value"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(roll_value->sizePolicy().hasHeightForWidth());
        roll_value->setSizePolicy(sizePolicy3);
        roll_value->setDecimals(6);
        roll_value->setMinimum(-16777215.000000000000000);
        roll_value->setMaximum(16777215.000000000000000);
        roll_value->setSingleStep(0.001000000000000);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, roll_value);

        pitch_label = new QLabel(orientation_group);
        pitch_label->setObjectName(QString::fromUtf8("pitch_label"));
        pitch_label->setMinimumSize(QSize(40, 0));
        pitch_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, pitch_label);

        pitch_value = new QDoubleSpinBox(orientation_group);
        pitch_value->setObjectName(QString::fromUtf8("pitch_value"));
        sizePolicy3.setHeightForWidth(pitch_value->sizePolicy().hasHeightForWidth());
        pitch_value->setSizePolicy(sizePolicy3);
        pitch_value->setDecimals(6);
        pitch_value->setMinimum(-16777215.000000000000000);
        pitch_value->setMaximum(16777215.000000000000000);
        pitch_value->setSingleStep(0.001000000000000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, pitch_value);

        yaw_label = new QLabel(orientation_group);
        yaw_label->setObjectName(QString::fromUtf8("yaw_label"));
        yaw_label->setMinimumSize(QSize(40, 0));
        yaw_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, yaw_label);

        yaw_value = new QDoubleSpinBox(orientation_group);
        yaw_value->setObjectName(QString::fromUtf8("yaw_value"));
        sizePolicy3.setHeightForWidth(yaw_value->sizePolicy().hasHeightForWidth());
        yaw_value->setSizePolicy(sizePolicy3);
        yaw_value->setDecimals(6);
        yaw_value->setMinimum(-16777215.000000000000000);
        yaw_value->setMaximum(16777215.000000000000000);
        yaw_value->setSingleStep(0.001000000000000);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, yaw_value);

        label = new QLabel(orientation_group);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(2);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);

        formLayout_2->setWidget(4, QFormLayout::SpanningRole, label);

        qx_label = new QLabel(orientation_group);
        qx_label->setObjectName(QString::fromUtf8("qx_label"));
        qx_label->setMinimumSize(QSize(40, 0));
        qx_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(5, QFormLayout::LabelRole, qx_label);

        qx_value = new QDoubleSpinBox(orientation_group);
        qx_value->setObjectName(QString::fromUtf8("qx_value"));
        sizePolicy3.setHeightForWidth(qx_value->sizePolicy().hasHeightForWidth());
        qx_value->setSizePolicy(sizePolicy3);
        qx_value->setDecimals(6);
        qx_value->setMinimum(-16777215.000000000000000);
        qx_value->setMaximum(16777215.000000000000000);
        qx_value->setSingleStep(0.001000000000000);

        formLayout_2->setWidget(5, QFormLayout::FieldRole, qx_value);

        qy_label = new QLabel(orientation_group);
        qy_label->setObjectName(QString::fromUtf8("qy_label"));
        qy_label->setMinimumSize(QSize(40, 0));
        qy_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(6, QFormLayout::LabelRole, qy_label);

        qy_value = new QDoubleSpinBox(orientation_group);
        qy_value->setObjectName(QString::fromUtf8("qy_value"));
        sizePolicy3.setHeightForWidth(qy_value->sizePolicy().hasHeightForWidth());
        qy_value->setSizePolicy(sizePolicy3);
        qy_value->setDecimals(6);
        qy_value->setMinimum(-16777215.000000000000000);
        qy_value->setMaximum(16777215.000000000000000);
        qy_value->setSingleStep(0.001000000000000);

        formLayout_2->setWidget(6, QFormLayout::FieldRole, qy_value);

        qz_label = new QLabel(orientation_group);
        qz_label->setObjectName(QString::fromUtf8("qz_label"));
        qz_label->setMinimumSize(QSize(40, 0));
        qz_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(7, QFormLayout::LabelRole, qz_label);

        qz_value = new QDoubleSpinBox(orientation_group);
        qz_value->setObjectName(QString::fromUtf8("qz_value"));
        sizePolicy3.setHeightForWidth(qz_value->sizePolicy().hasHeightForWidth());
        qz_value->setSizePolicy(sizePolicy3);
        qz_value->setDecimals(6);
        qz_value->setMinimum(-16777215.000000000000000);
        qz_value->setMaximum(16777215.000000000000000);
        qz_value->setSingleStep(0.001000000000000);

        formLayout_2->setWidget(7, QFormLayout::FieldRole, qz_value);

        qw_label = new QLabel(orientation_group);
        qw_label->setObjectName(QString::fromUtf8("qw_label"));
        qw_label->setMinimumSize(QSize(40, 0));
        qw_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(8, QFormLayout::LabelRole, qw_label);

        qw_value = new QDoubleSpinBox(orientation_group);
        qw_value->setObjectName(QString::fromUtf8("qw_value"));
        sizePolicy3.setHeightForWidth(qw_value->sizePolicy().hasHeightForWidth());
        qw_value->setSizePolicy(sizePolicy3);
        qw_value->setDecimals(6);
        qw_value->setMinimum(-16777215.000000000000000);
        qw_value->setMaximum(16777215.000000000000000);
        qw_value->setSingleStep(0.001000000000000);
        qw_value->setValue(1.000000000000000);

        formLayout_2->setWidget(8, QFormLayout::FieldRole, qw_value);


        verticalLayout->addWidget(orientation_group);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(CartesianEditorWidget);

        QMetaObject::connectSlotsByName(CartesianEditorWidget);
    } // setupUi

    void retranslateUi(QWidget *CartesianEditorWidget)
    {
        CartesianEditorWidget->setWindowTitle(QCoreApplication::translate("CartesianEditorWidget", "Form", nullptr));
        position_group->setTitle(QCoreApplication::translate("CartesianEditorWidget", "Position", nullptr));
        x_label->setText(QCoreApplication::translate("CartesianEditorWidget", "X:", nullptr));
        y_label->setText(QCoreApplication::translate("CartesianEditorWidget", "Y:", nullptr));
        z_label->setText(QCoreApplication::translate("CartesianEditorWidget", "Z:", nullptr));
        orientation_group->setTitle(QCoreApplication::translate("CartesianEditorWidget", "Orientation", nullptr));
        label_2->setText(QCoreApplication::translate("CartesianEditorWidget", "RPY:", nullptr));
        roll_label->setText(QCoreApplication::translate("CartesianEditorWidget", "R:", nullptr));
        pitch_label->setText(QCoreApplication::translate("CartesianEditorWidget", "P:", nullptr));
        yaw_label->setText(QCoreApplication::translate("CartesianEditorWidget", "Y:", nullptr));
        label->setText(QCoreApplication::translate("CartesianEditorWidget", "Quaternion:", nullptr));
        qx_label->setText(QCoreApplication::translate("CartesianEditorWidget", "X:", nullptr));
        qy_label->setText(QCoreApplication::translate("CartesianEditorWidget", "Y:", nullptr));
        qz_label->setText(QCoreApplication::translate("CartesianEditorWidget", "Z:", nullptr));
        qw_label->setText(QCoreApplication::translate("CartesianEditorWidget", "W:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CartesianEditorWidget: public Ui_CartesianEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTESIAN_EDITOR_WIDGET_H
