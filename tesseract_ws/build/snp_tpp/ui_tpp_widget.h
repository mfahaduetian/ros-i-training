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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TPPWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *line_edit_configuration;
    QPushButton *push_button_load_configuration;
    QPushButton *push_button_save_configuration;
    QFrame *line;

    void setupUi(QWidget *TPPWidget)
    {
        if (TPPWidget->objectName().isEmpty())
            TPPWidget->setObjectName(QString::fromUtf8("TPPWidget"));
        TPPWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(TPPWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        line_edit_configuration = new QLineEdit(TPPWidget);
        line_edit_configuration->setObjectName(QString::fromUtf8("line_edit_configuration"));
        line_edit_configuration->setReadOnly(true);

        horizontalLayout->addWidget(line_edit_configuration);

        push_button_load_configuration = new QPushButton(TPPWidget);
        push_button_load_configuration->setObjectName(QString::fromUtf8("push_button_load_configuration"));

        horizontalLayout->addWidget(push_button_load_configuration);


        verticalLayout->addLayout(horizontalLayout);

        push_button_save_configuration = new QPushButton(TPPWidget);
        push_button_save_configuration->setObjectName(QString::fromUtf8("push_button_save_configuration"));

        verticalLayout->addWidget(push_button_save_configuration);

        line = new QFrame(TPPWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        QWidget::setTabOrder(line_edit_configuration, push_button_load_configuration);
        QWidget::setTabOrder(push_button_load_configuration, push_button_save_configuration);

        retranslateUi(TPPWidget);

        QMetaObject::connectSlotsByName(TPPWidget);
    } // setupUi

    void retranslateUi(QWidget *TPPWidget)
    {
        TPPWidget->setWindowTitle(QCoreApplication::translate("TPPWidget", "Form", nullptr));
        push_button_load_configuration->setText(QCoreApplication::translate("TPPWidget", "Load", nullptr));
        push_button_save_configuration->setText(QCoreApplication::translate("TPPWidget", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TPPWidget: public Ui_TPPWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPP_WIDGET_H
