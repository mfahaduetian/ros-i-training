/********************************************************************************
** Form generated from reading UI file 'workbench_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKBENCH_WIDGET_H
#define UI_WORKBENCH_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tesseract_qt/environment/widgets/environment_widget.h"
#include "tesseract_qt/joint_trajectory/widgets/joint_trajectory_widget.h"
#include "tesseract_qt/manipulation/manipulation_widget.h"

QT_BEGIN_NAMESPACE

class Ui_WorkbenchWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *environment_tab;
    QVBoxLayout *verticalLayout_2;
    tesseract_gui::EnvironmentWidget *environment_widget;
    QWidget *trajectory_tab;
    QHBoxLayout *horizontalLayout;
    tesseract_gui::EnvironmentWidget *jt_environment_widget;
    QFrame *line;
    tesseract_gui::JointTrajectoryWidget *joint_trajectory_widget;
    QWidget *manipulation_tab;
    QVBoxLayout *verticalLayout_4;
    tesseract_gui::ManipulationWidget *manipulation_widget;
    QWidget *planning_tab;

    void setupUi(QWidget *WorkbenchWidget)
    {
        if (WorkbenchWidget->objectName().isEmpty())
            WorkbenchWidget->setObjectName(QString::fromUtf8("WorkbenchWidget"));
        WorkbenchWidget->resize(369, 347);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(WorkbenchWidget->sizePolicy().hasHeightForWidth());
        WorkbenchWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(WorkbenchWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        tabWidget = new QTabWidget(WorkbenchWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        environment_tab = new QWidget();
        environment_tab->setObjectName(QString::fromUtf8("environment_tab"));
        sizePolicy.setHeightForWidth(environment_tab->sizePolicy().hasHeightForWidth());
        environment_tab->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(environment_tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        environment_widget = new tesseract_gui::EnvironmentWidget(environment_tab);
        environment_widget->setObjectName(QString::fromUtf8("environment_widget"));

        verticalLayout_2->addWidget(environment_widget);

        tabWidget->addTab(environment_tab, QString());
        trajectory_tab = new QWidget();
        trajectory_tab->setObjectName(QString::fromUtf8("trajectory_tab"));
        sizePolicy.setHeightForWidth(trajectory_tab->sizePolicy().hasHeightForWidth());
        trajectory_tab->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(trajectory_tab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 3, 3, 3);
        jt_environment_widget = new tesseract_gui::EnvironmentWidget(trajectory_tab);
        jt_environment_widget->setObjectName(QString::fromUtf8("jt_environment_widget"));

        horizontalLayout->addWidget(jt_environment_widget);

        line = new QFrame(trajectory_tab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        joint_trajectory_widget = new tesseract_gui::JointTrajectoryWidget(trajectory_tab);
        joint_trajectory_widget->setObjectName(QString::fromUtf8("joint_trajectory_widget"));

        horizontalLayout->addWidget(joint_trajectory_widget);

        tabWidget->addTab(trajectory_tab, QString());
        manipulation_tab = new QWidget();
        manipulation_tab->setObjectName(QString::fromUtf8("manipulation_tab"));
        sizePolicy.setHeightForWidth(manipulation_tab->sizePolicy().hasHeightForWidth());
        manipulation_tab->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(manipulation_tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(3, 3, 3, 3);
        manipulation_widget = new tesseract_gui::ManipulationWidget(manipulation_tab);
        manipulation_widget->setObjectName(QString::fromUtf8("manipulation_widget"));

        verticalLayout_4->addWidget(manipulation_widget);

        tabWidget->addTab(manipulation_tab, QString());
        planning_tab = new QWidget();
        planning_tab->setObjectName(QString::fromUtf8("planning_tab"));
        sizePolicy.setHeightForWidth(planning_tab->sizePolicy().hasHeightForWidth());
        planning_tab->setSizePolicy(sizePolicy);
        tabWidget->addTab(planning_tab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(WorkbenchWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WorkbenchWidget);
    } // setupUi

    void retranslateUi(QWidget *WorkbenchWidget)
    {
        WorkbenchWidget->setWindowTitle(QCoreApplication::translate("WorkbenchWidget", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(environment_tab), QCoreApplication::translate("WorkbenchWidget", "Environment", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(trajectory_tab), QCoreApplication::translate("WorkbenchWidget", "Trajectory", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(manipulation_tab), QCoreApplication::translate("WorkbenchWidget", "Manipulation", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(planning_tab), QCoreApplication::translate("WorkbenchWidget", "Planning", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WorkbenchWidget: public Ui_WorkbenchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKBENCH_WIDGET_H
