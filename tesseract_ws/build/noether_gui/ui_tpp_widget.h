/********************************************************************************
** Form generated from reading UI file 'tpp_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPP_WIDGET_H
#define UI_TPP_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TPP
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *group_box_mesh;
    QHBoxLayout *horizontalLayout;
    QLineEdit *line_edit_mesh;
    QPushButton *push_button_load_mesh;
    QGroupBox *group_box_configuration;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *line_edit_configuration;
    QPushButton *push_button_load_configuration;
    QPushButton *push_button_save_configuration;
    QScrollArea *scroll_area;
    QWidget *content;
    QPushButton *push_button_plan;

    void setupUi(QWidget *TPP)
    {
        if (TPP->objectName().isEmpty())
            TPP->setObjectName(QString::fromUtf8("TPP"));
        TPP->resize(400, 551);
        verticalLayout = new QVBoxLayout(TPP);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        group_box_mesh = new QGroupBox(TPP);
        group_box_mesh->setObjectName(QString::fromUtf8("group_box_mesh"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(group_box_mesh->sizePolicy().hasHeightForWidth());
        group_box_mesh->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(group_box_mesh);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        line_edit_mesh = new QLineEdit(group_box_mesh);
        line_edit_mesh->setObjectName(QString::fromUtf8("line_edit_mesh"));
        line_edit_mesh->setReadOnly(true);

        horizontalLayout->addWidget(line_edit_mesh);

        push_button_load_mesh = new QPushButton(group_box_mesh);
        push_button_load_mesh->setObjectName(QString::fromUtf8("push_button_load_mesh"));

        horizontalLayout->addWidget(push_button_load_mesh);


        verticalLayout->addWidget(group_box_mesh);

        group_box_configuration = new QGroupBox(TPP);
        group_box_configuration->setObjectName(QString::fromUtf8("group_box_configuration"));
        verticalLayout_2 = new QVBoxLayout(group_box_configuration);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        line_edit_configuration = new QLineEdit(group_box_configuration);
        line_edit_configuration->setObjectName(QString::fromUtf8("line_edit_configuration"));
        line_edit_configuration->setReadOnly(true);

        horizontalLayout_2->addWidget(line_edit_configuration);

        push_button_load_configuration = new QPushButton(group_box_configuration);
        push_button_load_configuration->setObjectName(QString::fromUtf8("push_button_load_configuration"));

        horizontalLayout_2->addWidget(push_button_load_configuration);


        verticalLayout_2->addLayout(horizontalLayout_2);

        push_button_save_configuration = new QPushButton(group_box_configuration);
        push_button_save_configuration->setObjectName(QString::fromUtf8("push_button_save_configuration"));

        verticalLayout_2->addWidget(push_button_save_configuration);


        verticalLayout->addWidget(group_box_configuration);

        scroll_area = new QScrollArea(TPP);
        scroll_area->setObjectName(QString::fromUtf8("scroll_area"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scroll_area->sizePolicy().hasHeightForWidth());
        scroll_area->setSizePolicy(sizePolicy1);
        scroll_area->setMaximumSize(QSize(16777215, 1024));
        scroll_area->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scroll_area->setWidgetResizable(true);
        content = new QWidget();
        content->setObjectName(QString::fromUtf8("content"));
        content->setGeometry(QRect(0, 0, 380, 335));
        scroll_area->setWidget(content);

        verticalLayout->addWidget(scroll_area);

        push_button_plan = new QPushButton(TPP);
        push_button_plan->setObjectName(QString::fromUtf8("push_button_plan"));

        verticalLayout->addWidget(push_button_plan);

        QWidget::setTabOrder(line_edit_mesh, push_button_load_mesh);
        QWidget::setTabOrder(push_button_load_mesh, line_edit_configuration);
        QWidget::setTabOrder(line_edit_configuration, push_button_load_configuration);
        QWidget::setTabOrder(push_button_load_configuration, push_button_save_configuration);
        QWidget::setTabOrder(push_button_save_configuration, scroll_area);
        QWidget::setTabOrder(scroll_area, push_button_plan);

        retranslateUi(TPP);

        QMetaObject::connectSlotsByName(TPP);
    } // setupUi

    void retranslateUi(QWidget *TPP)
    {
        TPP->setWindowTitle(QCoreApplication::translate("TPP", "Form", nullptr));
        group_box_mesh->setTitle(QCoreApplication::translate("TPP", "Mesh", nullptr));
        push_button_load_mesh->setText(QCoreApplication::translate("TPP", "Load", nullptr));
        group_box_configuration->setTitle(QCoreApplication::translate("TPP", "Configuration", nullptr));
        push_button_load_configuration->setText(QCoreApplication::translate("TPP", "Load", nullptr));
        push_button_save_configuration->setText(QCoreApplication::translate("TPP", "Save", nullptr));
        push_button_plan->setText(QCoreApplication::translate("TPP", "Plan", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TPP: public Ui_TPP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPP_WIDGET_H
