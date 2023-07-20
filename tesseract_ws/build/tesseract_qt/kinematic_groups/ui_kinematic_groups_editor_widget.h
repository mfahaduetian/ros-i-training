/********************************************************************************
** Form generated from reading UI file 'kinematic_groups_editor_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KINEMATIC_GROUPS_EDITOR_WIDGET_H
#define UI_KINEMATIC_GROUPS_EDITOR_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tesseract_qt/common/widgets/combo_box.h"
#include "tesseract_qt/kinematic_groups/widgets/kinematic_groups_widget.h"

QT_BEGIN_NAMESPACE

class Ui_KinematicGroupsEditorWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *groupNameLabel;
    QLineEdit *groupNameLineEdit;
    QTabWidget *kinGroupTabWidget;
    QWidget *chainTab;
    QGridLayout *formLayout1;
    QLabel *tipLinkNameLabel;
    tesseract_gui::ComboBox *tipLinkNameComboBox;
    QLabel *baseLinkNameLabel;
    tesseract_gui::ComboBox *baseLinkNameComboBox;
    QSpacerItem *verticalSpacer;
    QWidget *jointsTab;
    QGridLayout *formLayout2;
    QLabel *jointLabel;
    QPushButton *addJointPushButton;
    tesseract_gui::ComboBox *jointComboBox;
    QPushButton *removeJointPushButton;
    QListWidget *jointListWidget;
    QWidget *linksTab;
    QGridLayout *formLayout3;
    QLabel *linkLabel;
    tesseract_gui::ComboBox *linkComboBox;
    QPushButton *addLinkPushButton;
    QPushButton *removeLinkPushButton;
    QListWidget *linkListWidget;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *addGroupPushButton;
    QPushButton *removeGroupPushButton;
    QPushButton *applyPushButton;
    tesseract_gui::KinematicGroupsWidget *kinGroupsWidget;

    void setupUi(QWidget *KinematicGroupsEditorWidget)
    {
        if (KinematicGroupsEditorWidget->objectName().isEmpty())
            KinematicGroupsEditorWidget->setObjectName(QString::fromUtf8("KinematicGroupsEditorWidget"));
        KinematicGroupsEditorWidget->resize(538, 665);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(KinematicGroupsEditorWidget->sizePolicy().hasHeightForWidth());
        KinematicGroupsEditorWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(KinematicGroupsEditorWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        frame_2 = new QFrame(KinematicGroupsEditorWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupNameLabel = new QLabel(frame_2);
        groupNameLabel->setObjectName(QString::fromUtf8("groupNameLabel"));

        horizontalLayout_2->addWidget(groupNameLabel);

        groupNameLineEdit = new QLineEdit(frame_2);
        groupNameLineEdit->setObjectName(QString::fromUtf8("groupNameLineEdit"));

        horizontalLayout_2->addWidget(groupNameLineEdit);


        verticalLayout->addWidget(frame_2);

        kinGroupTabWidget = new QTabWidget(KinematicGroupsEditorWidget);
        kinGroupTabWidget->setObjectName(QString::fromUtf8("kinGroupTabWidget"));
        chainTab = new QWidget();
        chainTab->setObjectName(QString::fromUtf8("chainTab"));
        formLayout1 = new QGridLayout(chainTab);
        formLayout1->setObjectName(QString::fromUtf8("formLayout1"));
        tipLinkNameLabel = new QLabel(chainTab);
        tipLinkNameLabel->setObjectName(QString::fromUtf8("tipLinkNameLabel"));

        formLayout1->addWidget(tipLinkNameLabel, 1, 0, 1, 1);

        tipLinkNameComboBox = new tesseract_gui::ComboBox(chainTab);
        tipLinkNameComboBox->setObjectName(QString::fromUtf8("tipLinkNameComboBox"));

        formLayout1->addWidget(tipLinkNameComboBox, 1, 1, 1, 1);

        baseLinkNameLabel = new QLabel(chainTab);
        baseLinkNameLabel->setObjectName(QString::fromUtf8("baseLinkNameLabel"));

        formLayout1->addWidget(baseLinkNameLabel, 0, 0, 1, 1);

        baseLinkNameComboBox = new tesseract_gui::ComboBox(chainTab);
        baseLinkNameComboBox->setObjectName(QString::fromUtf8("baseLinkNameComboBox"));

        formLayout1->addWidget(baseLinkNameComboBox, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout1->addItem(verticalSpacer, 2, 0, 1, 1);

        formLayout1->setColumnStretch(1, 1);
        kinGroupTabWidget->addTab(chainTab, QString());
        jointsTab = new QWidget();
        jointsTab->setObjectName(QString::fromUtf8("jointsTab"));
        formLayout2 = new QGridLayout(jointsTab);
        formLayout2->setObjectName(QString::fromUtf8("formLayout2"));
        jointLabel = new QLabel(jointsTab);
        jointLabel->setObjectName(QString::fromUtf8("jointLabel"));

        formLayout2->addWidget(jointLabel, 0, 0, 1, 1);

        addJointPushButton = new QPushButton(jointsTab);
        addJointPushButton->setObjectName(QString::fromUtf8("addJointPushButton"));
        addJointPushButton->setMinimumSize(QSize(100, 0));

        formLayout2->addWidget(addJointPushButton, 0, 2, 1, 1);

        jointComboBox = new tesseract_gui::ComboBox(jointsTab);
        jointComboBox->setObjectName(QString::fromUtf8("jointComboBox"));

        formLayout2->addWidget(jointComboBox, 0, 1, 1, 1);

        removeJointPushButton = new QPushButton(jointsTab);
        removeJointPushButton->setObjectName(QString::fromUtf8("removeJointPushButton"));
        removeJointPushButton->setMinimumSize(QSize(100, 0));

        formLayout2->addWidget(removeJointPushButton, 0, 3, 1, 1);

        jointListWidget = new QListWidget(jointsTab);
        jointListWidget->setObjectName(QString::fromUtf8("jointListWidget"));
        jointListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        formLayout2->addWidget(jointListWidget, 1, 0, 1, 4);

        formLayout2->setColumnStretch(1, 1);
        kinGroupTabWidget->addTab(jointsTab, QString());
        linksTab = new QWidget();
        linksTab->setObjectName(QString::fromUtf8("linksTab"));
        formLayout3 = new QGridLayout(linksTab);
        formLayout3->setObjectName(QString::fromUtf8("formLayout3"));
        linkLabel = new QLabel(linksTab);
        linkLabel->setObjectName(QString::fromUtf8("linkLabel"));

        formLayout3->addWidget(linkLabel, 0, 0, 1, 1);

        linkComboBox = new tesseract_gui::ComboBox(linksTab);
        linkComboBox->setObjectName(QString::fromUtf8("linkComboBox"));

        formLayout3->addWidget(linkComboBox, 0, 1, 1, 1);

        addLinkPushButton = new QPushButton(linksTab);
        addLinkPushButton->setObjectName(QString::fromUtf8("addLinkPushButton"));
        addLinkPushButton->setMinimumSize(QSize(100, 0));

        formLayout3->addWidget(addLinkPushButton, 0, 2, 1, 1);

        removeLinkPushButton = new QPushButton(linksTab);
        removeLinkPushButton->setObjectName(QString::fromUtf8("removeLinkPushButton"));
        removeLinkPushButton->setMinimumSize(QSize(100, 0));

        formLayout3->addWidget(removeLinkPushButton, 0, 3, 1, 1);

        linkListWidget = new QListWidget(linksTab);
        linkListWidget->setObjectName(QString::fromUtf8("linkListWidget"));
        linkListWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

        formLayout3->addWidget(linkListWidget, 1, 0, 1, 4);

        formLayout3->setColumnStretch(1, 1);
        kinGroupTabWidget->addTab(linksTab, QString());

        verticalLayout->addWidget(kinGroupTabWidget);

        frame = new QFrame(KinematicGroupsEditorWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        addGroupPushButton = new QPushButton(frame);
        addGroupPushButton->setObjectName(QString::fromUtf8("addGroupPushButton"));
        addGroupPushButton->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(addGroupPushButton);

        removeGroupPushButton = new QPushButton(frame);
        removeGroupPushButton->setObjectName(QString::fromUtf8("removeGroupPushButton"));
        removeGroupPushButton->setMinimumSize(QSize(100, 0));

        horizontalLayout->addWidget(removeGroupPushButton);

        applyPushButton = new QPushButton(frame);
        applyPushButton->setObjectName(QString::fromUtf8("applyPushButton"));

        horizontalLayout->addWidget(applyPushButton);


        verticalLayout->addWidget(frame);

        kinGroupsWidget = new tesseract_gui::KinematicGroupsWidget(KinematicGroupsEditorWidget);
        kinGroupsWidget->setObjectName(QString::fromUtf8("kinGroupsWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(kinGroupsWidget->sizePolicy().hasHeightForWidth());
        kinGroupsWidget->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(kinGroupsWidget);


        retranslateUi(KinematicGroupsEditorWidget);

        kinGroupTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(KinematicGroupsEditorWidget);
    } // setupUi

    void retranslateUi(QWidget *KinematicGroupsEditorWidget)
    {
        KinematicGroupsEditorWidget->setWindowTitle(QCoreApplication::translate("KinematicGroupsEditorWidget", "Form", nullptr));
        groupNameLabel->setText(QCoreApplication::translate("KinematicGroupsEditorWidget", "Group Name:", nullptr));
        tipLinkNameLabel->setText(QCoreApplication::translate("KinematicGroupsEditorWidget", "Tip Link:", nullptr));
        baseLinkNameLabel->setText(QCoreApplication::translate("KinematicGroupsEditorWidget", "Base Link:", nullptr));
        kinGroupTabWidget->setTabText(kinGroupTabWidget->indexOf(chainTab), QCoreApplication::translate("KinematicGroupsEditorWidget", "CHAIN", nullptr));
        jointLabel->setText(QCoreApplication::translate("KinematicGroupsEditorWidget", "Joint:", nullptr));
        addJointPushButton->setText(QCoreApplication::translate("KinematicGroupsEditorWidget", "Add Joint", nullptr));
        removeJointPushButton->setText(QCoreApplication::translate("KinematicGroupsEditorWidget", "Remove Joint", nullptr));
        kinGroupTabWidget->setTabText(kinGroupTabWidget->indexOf(jointsTab), QCoreApplication::translate("KinematicGroupsEditorWidget", "JOINTS", nullptr));
        linkLabel->setText(QCoreApplication::translate("KinematicGroupsEditorWidget", "Link:", nullptr));
        addLinkPushButton->setText(QCoreApplication::translate("KinematicGroupsEditorWidget", "Add Link", nullptr));
        removeLinkPushButton->setText(QCoreApplication::translate("KinematicGroupsEditorWidget", "Remove Link", nullptr));
        kinGroupTabWidget->setTabText(kinGroupTabWidget->indexOf(linksTab), QCoreApplication::translate("KinematicGroupsEditorWidget", "LINKS", nullptr));
        addGroupPushButton->setText(QCoreApplication::translate("KinematicGroupsEditorWidget", "Add Group", nullptr));
        removeGroupPushButton->setText(QCoreApplication::translate("KinematicGroupsEditorWidget", "Remove Group", nullptr));
        applyPushButton->setText(QCoreApplication::translate("KinematicGroupsEditorWidget", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KinematicGroupsEditorWidget: public Ui_KinematicGroupsEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KINEMATIC_GROUPS_EDITOR_WIDGET_H
