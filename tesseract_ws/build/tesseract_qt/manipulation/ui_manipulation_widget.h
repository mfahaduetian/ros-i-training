/********************************************************************************
** Form generated from reading UI file 'manipulation_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANIPULATION_WIDGET_H
#define UI_MANIPULATION_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tesseract_qt/common/widgets/cartesian_editor_widget.h"
#include "tesseract_qt/joint_state_slider/joint_state_slider_widget.h"
#include "tesseract_qt/scene_graph/widgets/scene_state_widget.h"

QT_BEGIN_NAMESPACE

class Ui_ManipulationWidget
{
public:
    QVBoxLayout *vertical_layout;
    QFrame *frame;
    QFormLayout *formLayout;
    QLabel *mode_label;
    QComboBox *mode_combo_box;
    QLabel *group_label;
    QComboBox *group_combo_box;
    QLabel *working_frame_label;
    QComboBox *working_frame_combo_box;
    QLabel *tcp_label;
    QComboBox *tcp_combo_box;
    QLabel *tcp_offset_label;
    QComboBox *tcp_offset_combo_box;
    QLabel *state_label;
    QComboBox *state_combo_box;
    QPushButton *reload_push_button;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *joint_tab;
    QVBoxLayout *verticalLayout_3;
    tesseract_gui::JointStateSliderWidget *joint_state_slider;
    QSpacerItem *verticalSpacer;
    QWidget *cartesian_tab;
    QVBoxLayout *verticalLayout;
    tesseract_gui::CartesianEditorWidget *cartesian_widget;
    QWidget *state_tab;
    QVBoxLayout *verticalLayout_2;
    tesseract_gui::SceneStateWidget *state_widget;

    void setupUi(QWidget *ManipulationWidget)
    {
        if (ManipulationWidget->objectName().isEmpty())
            ManipulationWidget->setObjectName(QString::fromUtf8("ManipulationWidget"));
        ManipulationWidget->resize(400, 637);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ManipulationWidget->sizePolicy().hasHeightForWidth());
        ManipulationWidget->setSizePolicy(sizePolicy);
        vertical_layout = new QVBoxLayout(ManipulationWidget);
        vertical_layout->setObjectName(QString::fromUtf8("vertical_layout"));
        vertical_layout->setSizeConstraint(QLayout::SetNoConstraint);
        vertical_layout->setContentsMargins(3, 3, 3, 3);
        frame = new QFrame(ManipulationWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        mode_label = new QLabel(frame);
        mode_label->setObjectName(QString::fromUtf8("mode_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, mode_label);

        mode_combo_box = new QComboBox(frame);
        mode_combo_box->addItem(QString());
        mode_combo_box->addItem(QString());
        mode_combo_box->setObjectName(QString::fromUtf8("mode_combo_box"));

        formLayout->setWidget(0, QFormLayout::FieldRole, mode_combo_box);

        group_label = new QLabel(frame);
        group_label->setObjectName(QString::fromUtf8("group_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, group_label);

        group_combo_box = new QComboBox(frame);
        group_combo_box->setObjectName(QString::fromUtf8("group_combo_box"));

        formLayout->setWidget(1, QFormLayout::FieldRole, group_combo_box);

        working_frame_label = new QLabel(frame);
        working_frame_label->setObjectName(QString::fromUtf8("working_frame_label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, working_frame_label);

        working_frame_combo_box = new QComboBox(frame);
        working_frame_combo_box->setObjectName(QString::fromUtf8("working_frame_combo_box"));

        formLayout->setWidget(2, QFormLayout::FieldRole, working_frame_combo_box);

        tcp_label = new QLabel(frame);
        tcp_label->setObjectName(QString::fromUtf8("tcp_label"));

        formLayout->setWidget(3, QFormLayout::LabelRole, tcp_label);

        tcp_combo_box = new QComboBox(frame);
        tcp_combo_box->setObjectName(QString::fromUtf8("tcp_combo_box"));

        formLayout->setWidget(3, QFormLayout::FieldRole, tcp_combo_box);

        tcp_offset_label = new QLabel(frame);
        tcp_offset_label->setObjectName(QString::fromUtf8("tcp_offset_label"));

        formLayout->setWidget(4, QFormLayout::LabelRole, tcp_offset_label);

        tcp_offset_combo_box = new QComboBox(frame);
        tcp_offset_combo_box->setObjectName(QString::fromUtf8("tcp_offset_combo_box"));

        formLayout->setWidget(4, QFormLayout::FieldRole, tcp_offset_combo_box);

        state_label = new QLabel(frame);
        state_label->setObjectName(QString::fromUtf8("state_label"));

        formLayout->setWidget(5, QFormLayout::LabelRole, state_label);

        state_combo_box = new QComboBox(frame);
        state_combo_box->setObjectName(QString::fromUtf8("state_combo_box"));

        formLayout->setWidget(5, QFormLayout::FieldRole, state_combo_box);

        reload_push_button = new QPushButton(frame);
        reload_push_button->setObjectName(QString::fromUtf8("reload_push_button"));

        formLayout->setWidget(6, QFormLayout::FieldRole, reload_push_button);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label);


        vertical_layout->addWidget(frame);

        tabWidget = new QTabWidget(ManipulationWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        joint_tab = new QWidget();
        joint_tab->setObjectName(QString::fromUtf8("joint_tab"));
        verticalLayout_3 = new QVBoxLayout(joint_tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(3, 3, 3, 3);
        joint_state_slider = new tesseract_gui::JointStateSliderWidget(joint_tab);
        joint_state_slider->setObjectName(QString::fromUtf8("joint_state_slider"));

        verticalLayout_3->addWidget(joint_state_slider);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tabWidget->addTab(joint_tab, QString());
        cartesian_tab = new QWidget();
        cartesian_tab->setObjectName(QString::fromUtf8("cartesian_tab"));
        verticalLayout = new QVBoxLayout(cartesian_tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        cartesian_widget = new tesseract_gui::CartesianEditorWidget(cartesian_tab);
        cartesian_widget->setObjectName(QString::fromUtf8("cartesian_widget"));

        verticalLayout->addWidget(cartesian_widget);

        tabWidget->addTab(cartesian_tab, QString());
        state_tab = new QWidget();
        state_tab->setObjectName(QString::fromUtf8("state_tab"));
        verticalLayout_2 = new QVBoxLayout(state_tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        state_widget = new tesseract_gui::SceneStateWidget(state_tab);
        state_widget->setObjectName(QString::fromUtf8("state_widget"));

        verticalLayout_2->addWidget(state_widget);

        tabWidget->addTab(state_tab, QString());

        vertical_layout->addWidget(tabWidget);


        retranslateUi(ManipulationWidget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ManipulationWidget);
    } // setupUi

    void retranslateUi(QWidget *ManipulationWidget)
    {
        ManipulationWidget->setWindowTitle(QCoreApplication::translate("ManipulationWidget", "Form", nullptr));
        mode_label->setText(QCoreApplication::translate("ManipulationWidget", "Mode:", nullptr));
        mode_combo_box->setItemText(0, QCoreApplication::translate("ManipulationWidget", "Joint", nullptr));
        mode_combo_box->setItemText(1, QCoreApplication::translate("ManipulationWidget", "Cartesian", nullptr));

        group_label->setText(QCoreApplication::translate("ManipulationWidget", "Group Name:", nullptr));
        working_frame_label->setText(QCoreApplication::translate("ManipulationWidget", "Working Frame:", nullptr));
        tcp_label->setText(QCoreApplication::translate("ManipulationWidget", "TCP Frame:", nullptr));
        tcp_offset_label->setText(QCoreApplication::translate("ManipulationWidget", "TCP Offset:", nullptr));
        state_label->setText(QCoreApplication::translate("ManipulationWidget", "State:", nullptr));
        reload_push_button->setText(QCoreApplication::translate("ManipulationWidget", "Reload", nullptr));
        label->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(joint_tab), QCoreApplication::translate("ManipulationWidget", "Joint", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(cartesian_tab), QCoreApplication::translate("ManipulationWidget", "Cartesian", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(state_tab), QCoreApplication::translate("ManipulationWidget", "State", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManipulationWidget: public Ui_ManipulationWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANIPULATION_WIDGET_H
