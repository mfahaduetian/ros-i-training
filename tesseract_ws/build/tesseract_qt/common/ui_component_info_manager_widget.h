/********************************************************************************
** Form generated from reading UI file 'component_info_manager_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENT_INFO_MANAGER_WIDGET_H
#define UI_COMPONENT_INFO_MANAGER_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tesseract_qt/common/widgets/tree_view.h"

QT_BEGIN_NAMESPACE

class Ui_ComponentInfoManagerWidget
{
public:
    QAction *actionCreate;
    QAction *actionCreate_Child;
    QAction *actionRemove;
    QVBoxLayout *verticalLayout;
    tesseract_gui::TreeView *tree_view;

    void setupUi(QWidget *ComponentInfoManagerWidget)
    {
        if (ComponentInfoManagerWidget->objectName().isEmpty())
            ComponentInfoManagerWidget->setObjectName(QString::fromUtf8("ComponentInfoManagerWidget"));
        ComponentInfoManagerWidget->resize(416, 226);
        actionCreate = new QAction(ComponentInfoManagerWidget);
        actionCreate->setObjectName(QString::fromUtf8("actionCreate"));
        actionCreate_Child = new QAction(ComponentInfoManagerWidget);
        actionCreate_Child->setObjectName(QString::fromUtf8("actionCreate_Child"));
        actionRemove = new QAction(ComponentInfoManagerWidget);
        actionRemove->setObjectName(QString::fromUtf8("actionRemove"));
        verticalLayout = new QVBoxLayout(ComponentInfoManagerWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        tree_view = new tesseract_gui::TreeView(ComponentInfoManagerWidget);
        tree_view->setObjectName(QString::fromUtf8("tree_view"));

        verticalLayout->addWidget(tree_view);


        retranslateUi(ComponentInfoManagerWidget);

        QMetaObject::connectSlotsByName(ComponentInfoManagerWidget);
    } // setupUi

    void retranslateUi(QWidget *ComponentInfoManagerWidget)
    {
        ComponentInfoManagerWidget->setWindowTitle(QCoreApplication::translate("ComponentInfoManagerWidget", "Form", nullptr));
        actionCreate->setText(QCoreApplication::translate("ComponentInfoManagerWidget", "Create", nullptr));
        actionCreate_Child->setText(QCoreApplication::translate("ComponentInfoManagerWidget", "Create Child", nullptr));
        actionRemove->setText(QCoreApplication::translate("ComponentInfoManagerWidget", "Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComponentInfoManagerWidget: public Ui_ComponentInfoManagerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENT_INFO_MANAGER_WIDGET_H
