/********************************************************************************
** Form generated from reading UI file 'group_joint_states_editor_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUP_JOINT_STATES_EDITOR_WIDGET_H
#define UI_GROUP_JOINT_STATES_EDITOR_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tesseract_qt/common/widgets/combo_box.h"
#include "tesseract_qt/joint_state_slider/joint_state_slider_widget.h"
#include "tesseract_qt/kinematic_groups/widgets/group_joint_states_widget.h"

QT_BEGIN_NAMESPACE

class Ui_GroupJointStatesEditorWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QFormLayout *formLayout;
    QLabel *groupNameLabel;
    QLabel *jointStateNameLabel;
    tesseract_gui::ComboBox *groupNamesComboBox;
    QLineEdit *jointStateNameLineEdit;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addPushButton;
    QPushButton *removePushButton;
    QPushButton *applyPushButton;
    tesseract_gui::JointStateSliderWidget *jointSliderWidget;
    tesseract_gui::GroupJointStatesWidget *groupJointStatesWidget;

    void setupUi(QWidget *GroupJointStatesEditorWidget)
    {
        if (GroupJointStatesEditorWidget->objectName().isEmpty())
            GroupJointStatesEditorWidget->setObjectName(QString::fromUtf8("GroupJointStatesEditorWidget"));
        GroupJointStatesEditorWidget->resize(400, 395);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GroupJointStatesEditorWidget->sizePolicy().hasHeightForWidth());
        GroupJointStatesEditorWidget->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(GroupJointStatesEditorWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        frame = new QFrame(GroupJointStatesEditorWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        groupNameLabel = new QLabel(frame);
        groupNameLabel->setObjectName(QString::fromUtf8("groupNameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, groupNameLabel);

        jointStateNameLabel = new QLabel(frame);
        jointStateNameLabel->setObjectName(QString::fromUtf8("jointStateNameLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, jointStateNameLabel);

        groupNamesComboBox = new tesseract_gui::ComboBox(frame);
        groupNamesComboBox->setObjectName(QString::fromUtf8("groupNamesComboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, groupNamesComboBox);

        jointStateNameLineEdit = new QLineEdit(frame);
        jointStateNameLineEdit->setObjectName(QString::fromUtf8("jointStateNameLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, jointStateNameLineEdit);


        verticalLayout_2->addWidget(frame);

        frame_2 = new QFrame(GroupJointStatesEditorWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addPushButton = new QPushButton(frame_2);
        addPushButton->setObjectName(QString::fromUtf8("addPushButton"));
        addPushButton->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(addPushButton);

        removePushButton = new QPushButton(frame_2);
        removePushButton->setObjectName(QString::fromUtf8("removePushButton"));
        removePushButton->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(removePushButton);

        applyPushButton = new QPushButton(frame_2);
        applyPushButton->setObjectName(QString::fromUtf8("applyPushButton"));

        horizontalLayout->addWidget(applyPushButton);


        verticalLayout_2->addWidget(frame_2);

        jointSliderWidget = new tesseract_gui::JointStateSliderWidget(GroupJointStatesEditorWidget);
        jointSliderWidget->setObjectName(QString::fromUtf8("jointSliderWidget"));

        verticalLayout_2->addWidget(jointSliderWidget);

        groupJointStatesWidget = new tesseract_gui::GroupJointStatesWidget(GroupJointStatesEditorWidget);
        groupJointStatesWidget->setObjectName(QString::fromUtf8("groupJointStatesWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(groupJointStatesWidget->sizePolicy().hasHeightForWidth());
        groupJointStatesWidget->setSizePolicy(sizePolicy2);

        verticalLayout_2->addWidget(groupJointStatesWidget);


        retranslateUi(GroupJointStatesEditorWidget);

        QMetaObject::connectSlotsByName(GroupJointStatesEditorWidget);
    } // setupUi

    void retranslateUi(QWidget *GroupJointStatesEditorWidget)
    {
        GroupJointStatesEditorWidget->setWindowTitle(QCoreApplication::translate("GroupJointStatesEditorWidget", "Form", nullptr));
        groupNameLabel->setText(QCoreApplication::translate("GroupJointStatesEditorWidget", "Group Name:", nullptr));
        jointStateNameLabel->setText(QCoreApplication::translate("GroupJointStatesEditorWidget", "Joint State Name:", nullptr));
        addPushButton->setText(QCoreApplication::translate("GroupJointStatesEditorWidget", "Add State", nullptr));
        removePushButton->setText(QCoreApplication::translate("GroupJointStatesEditorWidget", "Remove State", nullptr));
        applyPushButton->setText(QCoreApplication::translate("GroupJointStatesEditorWidget", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupJointStatesEditorWidget: public Ui_GroupJointStatesEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUP_JOINT_STATES_EDITOR_WIDGET_H
