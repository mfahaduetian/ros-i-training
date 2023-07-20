/********************************************************************************
** Form generated from reading UI file 'joint_state_slider_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINT_STATE_SLIDER_WIDGET_H
#define UI_JOINT_STATE_SLIDER_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JointStateSliderWidget
{
public:

    void setupUi(QWidget *JointStateSliderWidget)
    {
        if (JointStateSliderWidget->objectName().isEmpty())
            JointStateSliderWidget->setObjectName(QString::fromUtf8("JointStateSliderWidget"));
        JointStateSliderWidget->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JointStateSliderWidget->sizePolicy().hasHeightForWidth());
        JointStateSliderWidget->setSizePolicy(sizePolicy);

        retranslateUi(JointStateSliderWidget);

        QMetaObject::connectSlotsByName(JointStateSliderWidget);
    } // setupUi

    void retranslateUi(QWidget *JointStateSliderWidget)
    {
        JointStateSliderWidget->setWindowTitle(QCoreApplication::translate("JointStateSliderWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JointStateSliderWidget: public Ui_JointStateSliderWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINT_STATE_SLIDER_WIDGET_H
