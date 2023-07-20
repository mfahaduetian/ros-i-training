/********************************************************************************
** Form generated from reading UI file 'contact_results_compute_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTACT_RESULTS_COMPUTE_WIDGET_H
#define UI_CONTACT_RESULTS_COMPUTE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tesseract_qt/collision/widgets/contact_results_widget.h"

QT_BEGIN_NAMESPACE

class Ui_ContactResultsComputeWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *contact_request_group_box;
    QFormLayout *formLayout_2;
    QLabel *label;
    QDoubleSpinBox *contact_threshold;
    QLabel *label_2;
    QComboBox *contact_test_type;
    QLabel *label_3;
    QCheckBox *calculate_penetration;
    QLabel *label_4;
    QCheckBox *calculate_distance;
    QFrame *compute_frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *check_state_push_button;
    QSpacerItem *horizontalSpacer;
    QPushButton *compute_push_button;
    tesseract_gui::ContactResultsWidget *contact_results_widget;

    void setupUi(QWidget *ContactResultsComputeWidget)
    {
        if (ContactResultsComputeWidget->objectName().isEmpty())
            ContactResultsComputeWidget->setObjectName(QString::fromUtf8("ContactResultsComputeWidget"));
        ContactResultsComputeWidget->resize(459, 464);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ContactResultsComputeWidget->sizePolicy().hasHeightForWidth());
        ContactResultsComputeWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ContactResultsComputeWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        contact_request_group_box = new QGroupBox(ContactResultsComputeWidget);
        contact_request_group_box->setObjectName(QString::fromUtf8("contact_request_group_box"));
        formLayout_2 = new QFormLayout(contact_request_group_box);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label = new QLabel(contact_request_group_box);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        contact_threshold = new QDoubleSpinBox(contact_request_group_box);
        contact_threshold->setObjectName(QString::fromUtf8("contact_threshold"));
        contact_threshold->setDecimals(6);
        contact_threshold->setMinimum(-100.000000000000000);
        contact_threshold->setMaximum(100.000000000000000);
        contact_threshold->setSingleStep(0.001000000000000);
        contact_threshold->setValue(0.000000000000000);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, contact_threshold);

        label_2 = new QLabel(contact_request_group_box);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        contact_test_type = new QComboBox(contact_request_group_box);
        contact_test_type->addItem(QString());
        contact_test_type->addItem(QString());
        contact_test_type->addItem(QString());
        contact_test_type->setObjectName(QString::fromUtf8("contact_test_type"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, contact_test_type);

        label_3 = new QLabel(contact_request_group_box);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        calculate_penetration = new QCheckBox(contact_request_group_box);
        calculate_penetration->setObjectName(QString::fromUtf8("calculate_penetration"));
        calculate_penetration->setChecked(true);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, calculate_penetration);

        label_4 = new QLabel(contact_request_group_box);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        calculate_distance = new QCheckBox(contact_request_group_box);
        calculate_distance->setObjectName(QString::fromUtf8("calculate_distance"));
        calculate_distance->setChecked(true);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, calculate_distance);


        verticalLayout->addWidget(contact_request_group_box);

        compute_frame = new QFrame(ContactResultsComputeWidget);
        compute_frame->setObjectName(QString::fromUtf8("compute_frame"));
        compute_frame->setFrameShape(QFrame::NoFrame);
        compute_frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(compute_frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        check_state_push_button = new QPushButton(compute_frame);
        check_state_push_button->setObjectName(QString::fromUtf8("check_state_push_button"));

        horizontalLayout->addWidget(check_state_push_button);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        compute_push_button = new QPushButton(compute_frame);
        compute_push_button->setObjectName(QString::fromUtf8("compute_push_button"));

        horizontalLayout->addWidget(compute_push_button);


        verticalLayout->addWidget(compute_frame);

        contact_results_widget = new tesseract_gui::ContactResultsWidget(ContactResultsComputeWidget);
        contact_results_widget->setObjectName(QString::fromUtf8("contact_results_widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(contact_results_widget->sizePolicy().hasHeightForWidth());
        contact_results_widget->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(contact_results_widget);


        retranslateUi(ContactResultsComputeWidget);

        QMetaObject::connectSlotsByName(ContactResultsComputeWidget);
    } // setupUi

    void retranslateUi(QWidget *ContactResultsComputeWidget)
    {
        ContactResultsComputeWidget->setWindowTitle(QCoreApplication::translate("ContactResultsComputeWidget", "Form", nullptr));
        contact_request_group_box->setTitle(QCoreApplication::translate("ContactResultsComputeWidget", "Contact Request", nullptr));
        label->setText(QCoreApplication::translate("ContactResultsComputeWidget", "Contact Threshold:", nullptr));
        label_2->setText(QCoreApplication::translate("ContactResultsComputeWidget", "Contact Test Type:", nullptr));
        contact_test_type->setItemText(0, QCoreApplication::translate("ContactResultsComputeWidget", "First", nullptr));
        contact_test_type->setItemText(1, QCoreApplication::translate("ContactResultsComputeWidget", "Closest", nullptr));
        contact_test_type->setItemText(2, QCoreApplication::translate("ContactResultsComputeWidget", "All", nullptr));

        label_3->setText(QCoreApplication::translate("ContactResultsComputeWidget", "Calculate Penetration", nullptr));
        calculate_penetration->setText(QString());
        label_4->setText(QCoreApplication::translate("ContactResultsComputeWidget", "Calculate Distance", nullptr));
        calculate_distance->setText(QString());
        check_state_push_button->setText(QCoreApplication::translate("ContactResultsComputeWidget", "Check State", nullptr));
        compute_push_button->setText(QCoreApplication::translate("ContactResultsComputeWidget", "Compute", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContactResultsComputeWidget: public Ui_ContactResultsComputeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTACT_RESULTS_COMPUTE_WIDGET_H
