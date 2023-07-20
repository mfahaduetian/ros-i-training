/********************************************************************************
** Form generated from reading UI file 'tpp_pipeline_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPP_PIPELINE_WIDGET_H
#define UI_TPP_PIPELINE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TPPPipeline
{
public:
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab_mesh_modifier;
    QWidget *tab_tool_path_planner;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *combo_box_tpp;
    QPushButton *push_button_select_tpp;
    QFrame *line;
    QGroupBox *group_box_tpp;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_tpp;
    QWidget *tab_tool_path_modifier;

    void setupUi(QWidget *TPPPipeline)
    {
        if (TPPPipeline->objectName().isEmpty())
            TPPPipeline->setObjectName(QString::fromUtf8("TPPPipeline"));
        TPPPipeline->resize(430, 421);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TPPPipeline->sizePolicy().hasHeightForWidth());
        TPPPipeline->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(TPPPipeline);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tabWidget = new QTabWidget(TPPPipeline);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_mesh_modifier = new QWidget();
        tab_mesh_modifier->setObjectName(QString::fromUtf8("tab_mesh_modifier"));
        tabWidget->addTab(tab_mesh_modifier, QString());
        tab_tool_path_planner = new QWidget();
        tab_tool_path_planner->setObjectName(QString::fromUtf8("tab_tool_path_planner"));
        verticalLayout_3 = new QVBoxLayout(tab_tool_path_planner);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        combo_box_tpp = new QComboBox(tab_tool_path_planner);
        combo_box_tpp->setObjectName(QString::fromUtf8("combo_box_tpp"));

        horizontalLayout_3->addWidget(combo_box_tpp);

        push_button_select_tpp = new QPushButton(tab_tool_path_planner);
        push_button_select_tpp->setObjectName(QString::fromUtf8("push_button_select_tpp"));

        horizontalLayout_3->addWidget(push_button_select_tpp);


        verticalLayout_3->addLayout(horizontalLayout_3);

        line = new QFrame(tab_tool_path_planner);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        group_box_tpp = new QGroupBox(tab_tool_path_planner);
        group_box_tpp->setObjectName(QString::fromUtf8("group_box_tpp"));
        verticalLayout_2 = new QVBoxLayout(group_box_tpp);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget_tpp = new QWidget(group_box_tpp);
        widget_tpp->setObjectName(QString::fromUtf8("widget_tpp"));

        verticalLayout_2->addWidget(widget_tpp);


        verticalLayout_3->addWidget(group_box_tpp);

        tabWidget->addTab(tab_tool_path_planner, QString());
        tab_tool_path_modifier = new QWidget();
        tab_tool_path_modifier->setObjectName(QString::fromUtf8("tab_tool_path_modifier"));
        tabWidget->addTab(tab_tool_path_modifier, QString());

        verticalLayout_4->addWidget(tabWidget);


        retranslateUi(TPPPipeline);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TPPPipeline);
    } // setupUi

    void retranslateUi(QWidget *TPPPipeline)
    {
        TPPPipeline->setWindowTitle(QCoreApplication::translate("TPPPipeline", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_mesh_modifier), QCoreApplication::translate("TPPPipeline", "Mesh Modifier", nullptr));
        push_button_select_tpp->setText(QCoreApplication::translate("TPPPipeline", "Select", nullptr));
        group_box_tpp->setTitle(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_tool_path_planner), QCoreApplication::translate("TPPPipeline", "Tool Path Planner", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_tool_path_modifier), QCoreApplication::translate("TPPPipeline", "Tool Path Modifier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TPPPipeline: public Ui_TPPPipeline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPP_PIPELINE_WIDGET_H
