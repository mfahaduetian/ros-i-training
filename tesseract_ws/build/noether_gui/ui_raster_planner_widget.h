/********************************************************************************
** Form generated from reading UI file 'raster_planner_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RASTER_PLANNER_WIDGET_H
#define UI_RASTER_PLANNER_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RasterPlanner
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab_direction_generator;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout;
    QComboBox *combo_box_dir_gen;
    QPushButton *push_button_dir_gen;
    QFrame *line;
    QGroupBox *group_box_dir_gen;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_dir_gen;
    QWidget *tab_origin_generator;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *combo_box_origin_gen;
    QPushButton *push_button_origin_gen;
    QFrame *line_2;
    QGroupBox *group_box_origin_gen;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_origin_gen;
    QGroupBox *group_box_raster_planner;
    QVBoxLayout *verticalLayout;
    QFormLayout *form_layout;
    QLabel *label_line_spacing;
    QDoubleSpinBox *double_spin_box_line_spacing;
    QDoubleSpinBox *double_spin_box_point_spacing;
    QLabel *label_point_spacing;
    QLabel *label_min_hole_size;
    QDoubleSpinBox *double_spin_box_minimum_hole_size;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *RasterPlanner)
    {
        if (RasterPlanner->objectName().isEmpty())
            RasterPlanner->setObjectName(QString::fromUtf8("RasterPlanner"));
        RasterPlanner->resize(413, 373);
        verticalLayout_4 = new QVBoxLayout(RasterPlanner);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tabWidget = new QTabWidget(RasterPlanner);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_direction_generator = new QWidget();
        tab_direction_generator->setObjectName(QString::fromUtf8("tab_direction_generator"));
        verticalLayout_7 = new QVBoxLayout(tab_direction_generator);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        combo_box_dir_gen = new QComboBox(tab_direction_generator);
        combo_box_dir_gen->setObjectName(QString::fromUtf8("combo_box_dir_gen"));

        horizontalLayout->addWidget(combo_box_dir_gen);

        push_button_dir_gen = new QPushButton(tab_direction_generator);
        push_button_dir_gen->setObjectName(QString::fromUtf8("push_button_dir_gen"));

        horizontalLayout->addWidget(push_button_dir_gen);


        verticalLayout_7->addLayout(horizontalLayout);

        line = new QFrame(tab_direction_generator);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_7->addWidget(line);

        group_box_dir_gen = new QGroupBox(tab_direction_generator);
        group_box_dir_gen->setObjectName(QString::fromUtf8("group_box_dir_gen"));
        verticalLayout_3 = new QVBoxLayout(group_box_dir_gen);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget_dir_gen = new QWidget(group_box_dir_gen);
        widget_dir_gen->setObjectName(QString::fromUtf8("widget_dir_gen"));

        verticalLayout_3->addWidget(widget_dir_gen);


        verticalLayout_7->addWidget(group_box_dir_gen);

        tabWidget->addTab(tab_direction_generator, QString());
        tab_origin_generator = new QWidget();
        tab_origin_generator->setObjectName(QString::fromUtf8("tab_origin_generator"));
        verticalLayout_2 = new QVBoxLayout(tab_origin_generator);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        combo_box_origin_gen = new QComboBox(tab_origin_generator);
        combo_box_origin_gen->setObjectName(QString::fromUtf8("combo_box_origin_gen"));

        horizontalLayout_2->addWidget(combo_box_origin_gen);

        push_button_origin_gen = new QPushButton(tab_origin_generator);
        push_button_origin_gen->setObjectName(QString::fromUtf8("push_button_origin_gen"));

        horizontalLayout_2->addWidget(push_button_origin_gen);


        verticalLayout_2->addLayout(horizontalLayout_2);

        line_2 = new QFrame(tab_origin_generator);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        group_box_origin_gen = new QGroupBox(tab_origin_generator);
        group_box_origin_gen->setObjectName(QString::fromUtf8("group_box_origin_gen"));
        verticalLayout_6 = new QVBoxLayout(group_box_origin_gen);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        widget_origin_gen = new QWidget(group_box_origin_gen);
        widget_origin_gen->setObjectName(QString::fromUtf8("widget_origin_gen"));

        verticalLayout_6->addWidget(widget_origin_gen);


        verticalLayout_2->addWidget(group_box_origin_gen);

        tabWidget->addTab(tab_origin_generator, QString());

        verticalLayout_4->addWidget(tabWidget);

        group_box_raster_planner = new QGroupBox(RasterPlanner);
        group_box_raster_planner->setObjectName(QString::fromUtf8("group_box_raster_planner"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(group_box_raster_planner->sizePolicy().hasHeightForWidth());
        group_box_raster_planner->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(group_box_raster_planner);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        form_layout = new QFormLayout();
        form_layout->setObjectName(QString::fromUtf8("form_layout"));
        label_line_spacing = new QLabel(group_box_raster_planner);
        label_line_spacing->setObjectName(QString::fromUtf8("label_line_spacing"));

        form_layout->setWidget(0, QFormLayout::LabelRole, label_line_spacing);

        double_spin_box_line_spacing = new QDoubleSpinBox(group_box_raster_planner);
        double_spin_box_line_spacing->setObjectName(QString::fromUtf8("double_spin_box_line_spacing"));
        double_spin_box_line_spacing->setDecimals(3);
        double_spin_box_line_spacing->setMinimum(0.000000000000000);
        double_spin_box_line_spacing->setMaximum(100.000000000000000);
        double_spin_box_line_spacing->setValue(0.100000000000000);

        form_layout->setWidget(0, QFormLayout::FieldRole, double_spin_box_line_spacing);

        double_spin_box_point_spacing = new QDoubleSpinBox(group_box_raster_planner);
        double_spin_box_point_spacing->setObjectName(QString::fromUtf8("double_spin_box_point_spacing"));
        double_spin_box_point_spacing->setDecimals(3);
        double_spin_box_point_spacing->setMinimum(0.000000000000000);
        double_spin_box_point_spacing->setMaximum(100.000000000000000);
        double_spin_box_point_spacing->setValue(0.025000000000000);

        form_layout->setWidget(1, QFormLayout::FieldRole, double_spin_box_point_spacing);

        label_point_spacing = new QLabel(group_box_raster_planner);
        label_point_spacing->setObjectName(QString::fromUtf8("label_point_spacing"));

        form_layout->setWidget(1, QFormLayout::LabelRole, label_point_spacing);

        label_min_hole_size = new QLabel(group_box_raster_planner);
        label_min_hole_size->setObjectName(QString::fromUtf8("label_min_hole_size"));

        form_layout->setWidget(2, QFormLayout::LabelRole, label_min_hole_size);

        double_spin_box_minimum_hole_size = new QDoubleSpinBox(group_box_raster_planner);
        double_spin_box_minimum_hole_size->setObjectName(QString::fromUtf8("double_spin_box_minimum_hole_size"));
        double_spin_box_minimum_hole_size->setDecimals(3);
        double_spin_box_minimum_hole_size->setMinimum(0.000000000000000);
        double_spin_box_minimum_hole_size->setMaximum(100.000000000000000);
        double_spin_box_minimum_hole_size->setValue(0.100000000000000);

        form_layout->setWidget(2, QFormLayout::FieldRole, double_spin_box_minimum_hole_size);


        verticalLayout->addLayout(form_layout);


        verticalLayout_4->addWidget(group_box_raster_planner);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        retranslateUi(RasterPlanner);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RasterPlanner);
    } // setupUi

    void retranslateUi(QWidget *RasterPlanner)
    {
        RasterPlanner->setWindowTitle(QCoreApplication::translate("RasterPlanner", "Form", nullptr));
        push_button_dir_gen->setText(QCoreApplication::translate("RasterPlanner", "Select", nullptr));
        group_box_dir_gen->setTitle(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_direction_generator), QCoreApplication::translate("RasterPlanner", "Direction Generator", nullptr));
        push_button_origin_gen->setText(QCoreApplication::translate("RasterPlanner", "Select", nullptr));
        group_box_origin_gen->setTitle(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_origin_generator), QCoreApplication::translate("RasterPlanner", "Origin Generator", nullptr));
        group_box_raster_planner->setTitle(QCoreApplication::translate("RasterPlanner", "Raster Planner", nullptr));
        label_line_spacing->setText(QCoreApplication::translate("RasterPlanner", "Line Spacing", nullptr));
        label_point_spacing->setText(QCoreApplication::translate("RasterPlanner", "Point Spacing", nullptr));
        label_min_hole_size->setText(QCoreApplication::translate("RasterPlanner", "Minimum Hole Size", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RasterPlanner: public Ui_RasterPlanner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RASTER_PLANNER_WIDGET_H
