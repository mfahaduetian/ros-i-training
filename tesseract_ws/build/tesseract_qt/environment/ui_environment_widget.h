/********************************************************************************
** Form generated from reading UI file 'environment_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVIRONMENT_WIDGET_H
#define UI_ENVIRONMENT_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tesseract_qt/acm/widgets/allowed_collision_matrix_widget.h"
#include "tesseract_qt/collision/widgets/contact_results_compute_widget.h"
#include "tesseract_qt/environment/widgets/environment_commands_widget.h"
#include "tesseract_qt/kinematic_groups/widgets/group_joint_states_widget.h"
#include "tesseract_qt/kinematic_groups/widgets/group_tcps_widget.h"
#include "tesseract_qt/kinematic_groups/widgets/kinematic_groups_widget.h"
#include "tesseract_qt/scene_graph/widgets/scene_graph_widget.h"
#include "tesseract_qt/scene_graph/widgets/scene_state_widget.h"

QT_BEGIN_NAMESPACE

class Ui_EnvironmentWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tab_widget;
    QWidget *scene_tab;
    QVBoxLayout *verticalLayout_2;
    tesseract_gui::SceneGraphWidget *scene_widget;
    QWidget *state_tab;
    QVBoxLayout *verticalLayout_5;
    tesseract_gui::SceneStateWidget *scene_state_widget;
    QWidget *acm_tab;
    QVBoxLayout *verticalLayout_3;
    tesseract_gui::AllowedCollisionMatrixWidget *acm_widget;
    QWidget *groups_tab;
    QVBoxLayout *verticalLayout_4;
    tesseract_gui::KinematicGroupsWidget *groups_widget;
    QWidget *group_states_tab;
    QVBoxLayout *verticalLayout_8;
    tesseract_gui::GroupJointStatesWidget *group_states_widget;
    QWidget *group_tcps_tab;
    QVBoxLayout *verticalLayout_6;
    tesseract_gui::GroupTCPsWidget *group_tcps_widget;
    QWidget *cmd_history_tab;
    QVBoxLayout *verticalLayout_7;
    tesseract_gui::EnvironmentCommandsWidget *cmd_history_widget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_9;
    tesseract_gui::ContactResultsComputeWidget *contacts_widget;

    void setupUi(QWidget *EnvironmentWidget)
    {
        if (EnvironmentWidget->objectName().isEmpty())
            EnvironmentWidget->setObjectName(QString::fromUtf8("EnvironmentWidget"));
        EnvironmentWidget->resize(506, 431);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EnvironmentWidget->sizePolicy().hasHeightForWidth());
        EnvironmentWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(EnvironmentWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tab_widget = new QTabWidget(EnvironmentWidget);
        tab_widget->setObjectName(QString::fromUtf8("tab_widget"));
        scene_tab = new QWidget();
        scene_tab->setObjectName(QString::fromUtf8("scene_tab"));
        verticalLayout_2 = new QVBoxLayout(scene_tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        scene_widget = new tesseract_gui::SceneGraphWidget(scene_tab);
        scene_widget->setObjectName(QString::fromUtf8("scene_widget"));

        verticalLayout_2->addWidget(scene_widget);

        tab_widget->addTab(scene_tab, QString());
        state_tab = new QWidget();
        state_tab->setObjectName(QString::fromUtf8("state_tab"));
        verticalLayout_5 = new QVBoxLayout(state_tab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(3, 3, 3, 3);
        scene_state_widget = new tesseract_gui::SceneStateWidget(state_tab);
        scene_state_widget->setObjectName(QString::fromUtf8("scene_state_widget"));

        verticalLayout_5->addWidget(scene_state_widget);

        tab_widget->addTab(state_tab, QString());
        acm_tab = new QWidget();
        acm_tab->setObjectName(QString::fromUtf8("acm_tab"));
        verticalLayout_3 = new QVBoxLayout(acm_tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(3, 3, 3, 3);
        acm_widget = new tesseract_gui::AllowedCollisionMatrixWidget(acm_tab);
        acm_widget->setObjectName(QString::fromUtf8("acm_widget"));

        verticalLayout_3->addWidget(acm_widget);

        tab_widget->addTab(acm_tab, QString());
        groups_tab = new QWidget();
        groups_tab->setObjectName(QString::fromUtf8("groups_tab"));
        verticalLayout_4 = new QVBoxLayout(groups_tab);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(3, 3, 3, 3);
        groups_widget = new tesseract_gui::KinematicGroupsWidget(groups_tab);
        groups_widget->setObjectName(QString::fromUtf8("groups_widget"));

        verticalLayout_4->addWidget(groups_widget);

        tab_widget->addTab(groups_tab, QString());
        group_states_tab = new QWidget();
        group_states_tab->setObjectName(QString::fromUtf8("group_states_tab"));
        verticalLayout_8 = new QVBoxLayout(group_states_tab);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(3, 3, 3, 3);
        group_states_widget = new tesseract_gui::GroupJointStatesWidget(group_states_tab);
        group_states_widget->setObjectName(QString::fromUtf8("group_states_widget"));

        verticalLayout_8->addWidget(group_states_widget);

        tab_widget->addTab(group_states_tab, QString());
        group_tcps_tab = new QWidget();
        group_tcps_tab->setObjectName(QString::fromUtf8("group_tcps_tab"));
        verticalLayout_6 = new QVBoxLayout(group_tcps_tab);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(3, 3, 3, 3);
        group_tcps_widget = new tesseract_gui::GroupTCPsWidget(group_tcps_tab);
        group_tcps_widget->setObjectName(QString::fromUtf8("group_tcps_widget"));

        verticalLayout_6->addWidget(group_tcps_widget);

        tab_widget->addTab(group_tcps_tab, QString());
        cmd_history_tab = new QWidget();
        cmd_history_tab->setObjectName(QString::fromUtf8("cmd_history_tab"));
        verticalLayout_7 = new QVBoxLayout(cmd_history_tab);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(3, 3, 3, 3);
        cmd_history_widget = new tesseract_gui::EnvironmentCommandsWidget(cmd_history_tab);
        cmd_history_widget->setObjectName(QString::fromUtf8("cmd_history_widget"));

        verticalLayout_7->addWidget(cmd_history_widget);

        tab_widget->addTab(cmd_history_tab, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_9 = new QVBoxLayout(tab);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(3, 3, 3, 3);
        contacts_widget = new tesseract_gui::ContactResultsComputeWidget(tab);
        contacts_widget->setObjectName(QString::fromUtf8("contacts_widget"));

        verticalLayout_9->addWidget(contacts_widget);

        tab_widget->addTab(tab, QString());

        verticalLayout->addWidget(tab_widget);


        retranslateUi(EnvironmentWidget);

        tab_widget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(EnvironmentWidget);
    } // setupUi

    void retranslateUi(QWidget *EnvironmentWidget)
    {
        EnvironmentWidget->setWindowTitle(QCoreApplication::translate("EnvironmentWidget", "Form", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(scene_tab), QCoreApplication::translate("EnvironmentWidget", "Scene", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(state_tab), QCoreApplication::translate("EnvironmentWidget", "State", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(acm_tab), QCoreApplication::translate("EnvironmentWidget", "ACM", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(groups_tab), QCoreApplication::translate("EnvironmentWidget", "Groups", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(group_states_tab), QCoreApplication::translate("EnvironmentWidget", "States", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(group_tcps_tab), QCoreApplication::translate("EnvironmentWidget", "TCPs", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(cmd_history_tab), QCoreApplication::translate("EnvironmentWidget", "History", nullptr));
        tab_widget->setTabText(tab_widget->indexOf(tab), QCoreApplication::translate("EnvironmentWidget", "Contacts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnvironmentWidget: public Ui_EnvironmentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVIRONMENT_WIDGET_H
