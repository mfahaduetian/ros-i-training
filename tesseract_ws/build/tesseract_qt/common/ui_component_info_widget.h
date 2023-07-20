/********************************************************************************
** Form generated from reading UI file 'component_info_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPONENT_INFO_WIDGET_H
#define UI_COMPONENT_INFO_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComponentInfoWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QComboBox *combo_box;
    QPushButton *push_button;

    void setupUi(QWidget *ComponentInfoWidget)
    {
        if (ComponentInfoWidget->objectName().isEmpty())
            ComponentInfoWidget->setObjectName(QString::fromUtf8("ComponentInfoWidget"));
        ComponentInfoWidget->resize(400, 22);
        horizontalLayout = new QHBoxLayout(ComponentInfoWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        combo_box = new QComboBox(ComponentInfoWidget);
        combo_box->setObjectName(QString::fromUtf8("combo_box"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(combo_box->sizePolicy().hasHeightForWidth());
        combo_box->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(combo_box);

        push_button = new QPushButton(ComponentInfoWidget);
        push_button->setObjectName(QString::fromUtf8("push_button"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(push_button->sizePolicy().hasHeightForWidth());
        push_button->setSizePolicy(sizePolicy1);
        push_button->setMinimumSize(QSize(22, 22));

        horizontalLayout->addWidget(push_button);


        retranslateUi(ComponentInfoWidget);

        QMetaObject::connectSlotsByName(ComponentInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *ComponentInfoWidget)
    {
        ComponentInfoWidget->setWindowTitle(QCoreApplication::translate("ComponentInfoWidget", "Form", nullptr));
        push_button->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ComponentInfoWidget: public Ui_ComponentInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPONENT_INFO_WIDGET_H
