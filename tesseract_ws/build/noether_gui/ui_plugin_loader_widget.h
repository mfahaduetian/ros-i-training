/********************************************************************************
** Form generated from reading UI file 'plugin_loader_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGIN_LOADER_WIDGET_H
#define UI_PLUGIN_LOADER_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PluginLoader
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *group_box;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontal_layout;
    QComboBox *combo_box;
    QPushButton *push_button_add;
    QVBoxLayout *vertical_layout_plugins;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PluginLoader)
    {
        if (PluginLoader->objectName().isEmpty())
            PluginLoader->setObjectName(QString::fromUtf8("PluginLoader"));
        PluginLoader->resize(400, 300);
        verticalLayout = new QVBoxLayout(PluginLoader);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        group_box = new QGroupBox(PluginLoader);
        group_box->setObjectName(QString::fromUtf8("group_box"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(group_box->sizePolicy().hasHeightForWidth());
        group_box->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(group_box);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontal_layout = new QHBoxLayout();
        horizontal_layout->setObjectName(QString::fromUtf8("horizontal_layout"));
        combo_box = new QComboBox(group_box);
        combo_box->setObjectName(QString::fromUtf8("combo_box"));

        horizontal_layout->addWidget(combo_box);

        push_button_add = new QPushButton(group_box);
        push_button_add->setObjectName(QString::fromUtf8("push_button_add"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(push_button_add->sizePolicy().hasHeightForWidth());
        push_button_add->setSizePolicy(sizePolicy1);

        horizontal_layout->addWidget(push_button_add);


        verticalLayout_2->addLayout(horizontal_layout);

        vertical_layout_plugins = new QVBoxLayout();
        vertical_layout_plugins->setObjectName(QString::fromUtf8("vertical_layout_plugins"));

        verticalLayout_2->addLayout(vertical_layout_plugins);


        verticalLayout->addWidget(group_box);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(PluginLoader);

        QMetaObject::connectSlotsByName(PluginLoader);
    } // setupUi

    void retranslateUi(QWidget *PluginLoader)
    {
        PluginLoader->setWindowTitle(QCoreApplication::translate("PluginLoader", "Form", nullptr));
        group_box->setTitle(QCoreApplication::translate("PluginLoader", "Group", nullptr));
        push_button_add->setText(QCoreApplication::translate("PluginLoader", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PluginLoader: public Ui_PluginLoader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGIN_LOADER_WIDGET_H
