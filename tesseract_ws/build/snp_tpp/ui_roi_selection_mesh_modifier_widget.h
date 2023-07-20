/********************************************************************************
** Form generated from reading UI file 'roi_selection_mesh_modifier_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROI_SELECTION_MESH_MODIFIER_WIDGET_H
#define UI_ROI_SELECTION_MESH_MODIFIER_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ROISelectionMeshModifier
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QDoubleSpinBox *plane_distance_threshold;
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_4;
    QDoubleSpinBox *cluster_tolerance;
    QLabel *label;
    QSpinBox *min_cluster_size;
    QLabel *label_2;
    QSpinBox *max_cluster_size;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ROISelectionMeshModifier)
    {
        if (ROISelectionMeshModifier->objectName().isEmpty())
            ROISelectionMeshModifier->setObjectName(QString::fromUtf8("ROISelectionMeshModifier"));
        ROISelectionMeshModifier->resize(312, 220);
        verticalLayout = new QVBoxLayout(ROISelectionMeshModifier);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_3 = new QLabel(ROISelectionMeshModifier);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        plane_distance_threshold = new QDoubleSpinBox(ROISelectionMeshModifier);
        plane_distance_threshold->setObjectName(QString::fromUtf8("plane_distance_threshold"));
        plane_distance_threshold->setDecimals(3);
        plane_distance_threshold->setSingleStep(0.100000000000000);
        plane_distance_threshold->setValue(0.100000000000000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, plane_distance_threshold);


        verticalLayout->addLayout(formLayout_2);

        groupBox = new QGroupBox(ROISelectionMeshModifier);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        cluster_tolerance = new QDoubleSpinBox(groupBox);
        cluster_tolerance->setObjectName(QString::fromUtf8("cluster_tolerance"));
        cluster_tolerance->setDecimals(3);
        cluster_tolerance->setSingleStep(0.100000000000000);
        cluster_tolerance->setValue(0.100000000000000);

        formLayout->setWidget(0, QFormLayout::FieldRole, cluster_tolerance);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        min_cluster_size = new QSpinBox(groupBox);
        min_cluster_size->setObjectName(QString::fromUtf8("min_cluster_size"));
        min_cluster_size->setMaximum(1000000);
        min_cluster_size->setValue(100);

        formLayout->setWidget(1, QFormLayout::FieldRole, min_cluster_size);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        max_cluster_size = new QSpinBox(groupBox);
        max_cluster_size->setObjectName(QString::fromUtf8("max_cluster_size"));
        max_cluster_size->setMinimum(0);
        max_cluster_size->setMaximum(1000000000);
        max_cluster_size->setValue(1000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, max_cluster_size);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ROISelectionMeshModifier);

        QMetaObject::connectSlotsByName(ROISelectionMeshModifier);
    } // setupUi

    void retranslateUi(QWidget *ROISelectionMeshModifier)
    {
        ROISelectionMeshModifier->setWindowTitle(QCoreApplication::translate("ROISelectionMeshModifier", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("ROISelectionMeshModifier", "Plane distance threshold (m)", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ROISelectionMeshModifier", "Region Growing", nullptr));
        label_4->setText(QCoreApplication::translate("ROISelectionMeshModifier", "Cluster tolerance (m)", nullptr));
        label->setText(QCoreApplication::translate("ROISelectionMeshModifier", "Minimum cluster size", nullptr));
        label_2->setText(QCoreApplication::translate("ROISelectionMeshModifier", "Maximum cluster size", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ROISelectionMeshModifier: public Ui_ROISelectionMeshModifier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROI_SELECTION_MESH_MODIFIER_WIDGET_H
