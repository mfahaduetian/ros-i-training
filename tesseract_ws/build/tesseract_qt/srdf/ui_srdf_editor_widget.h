/********************************************************************************
** Form generated from reading UI file 'srdf_editor_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SRDF_EDITOR_WIDGET_H
#define UI_SRDF_EDITOR_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tesseract_qt/acm/widgets/allowed_collision_matrix_editor_widget.h"
#include "tesseract_qt/kinematic_groups/widgets/group_joint_states_editor_widget.h"
#include "tesseract_qt/kinematic_groups/widgets/kinematic_groups_editor_widget.h"

QT_BEGIN_NAMESPACE

class Ui_SRDFEditorWidget
{
public:
    QVBoxLayout *top_layout;
    QToolBox *toolBox;
    QWidget *load_page;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLineEdit *srdf_line_edit;
    QLineEdit *urdf_line_edit;
    QPushButton *srdf_browse_button;
    QLabel *urdf_label;
    QPushButton *urdf_browse_button;
    QLabel *srdf_label;
    QPushButton *load_push_button;
    QSpacerItem *verticalSpacer;
    QWidget *acm_page;
    QVBoxLayout *verticalLayout;
    tesseract_gui::AllowedCollisionMatrixEditorWidget *acm_widget;
    QWidget *kin_groups_page;
    QVBoxLayout *verticalLayout_2;
    tesseract_gui::KinematicGroupsEditorWidget *groups_widget;
    QWidget *kin_group_states_page;
    QVBoxLayout *verticalLayout_3;
    tesseract_gui::GroupJointStatesEditorWidget *group_states_widget;
    QWidget *save_page;
    QGridLayout *gridLayout_2;
    QLineEdit *save_srdf_line_edit;
    QPushButton *save_srdf_browse_button;
    QLabel *save_srdf_label;
    QPushButton *save_srdf_save_button;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *SRDFEditorWidget)
    {
        if (SRDFEditorWidget->objectName().isEmpty())
            SRDFEditorWidget->setObjectName(QString::fromUtf8("SRDFEditorWidget"));
        SRDFEditorWidget->resize(400, 300);
        top_layout = new QVBoxLayout(SRDFEditorWidget);
        top_layout->setObjectName(QString::fromUtf8("top_layout"));
        top_layout->setContentsMargins(3, 3, 3, 3);
        toolBox = new QToolBox(SRDFEditorWidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        load_page = new QWidget();
        load_page->setObjectName(QString::fromUtf8("load_page"));
        load_page->setGeometry(QRect(0, 0, 394, 154));
        verticalLayout_4 = new QVBoxLayout(load_page);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(3, 3, 3, 3);
        frame = new QFrame(load_page);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        srdf_line_edit = new QLineEdit(frame);
        srdf_line_edit->setObjectName(QString::fromUtf8("srdf_line_edit"));
        srdf_line_edit->setReadOnly(true);

        gridLayout->addWidget(srdf_line_edit, 1, 1, 1, 1);

        urdf_line_edit = new QLineEdit(frame);
        urdf_line_edit->setObjectName(QString::fromUtf8("urdf_line_edit"));
        urdf_line_edit->setReadOnly(true);

        gridLayout->addWidget(urdf_line_edit, 0, 1, 1, 1);

        srdf_browse_button = new QPushButton(frame);
        srdf_browse_button->setObjectName(QString::fromUtf8("srdf_browse_button"));
        srdf_browse_button->setMinimumSize(QSize(80, 0));

        gridLayout->addWidget(srdf_browse_button, 1, 2, 1, 1);

        urdf_label = new QLabel(frame);
        urdf_label->setObjectName(QString::fromUtf8("urdf_label"));

        gridLayout->addWidget(urdf_label, 0, 0, 1, 1);

        urdf_browse_button = new QPushButton(frame);
        urdf_browse_button->setObjectName(QString::fromUtf8("urdf_browse_button"));
        urdf_browse_button->setMinimumSize(QSize(80, 0));

        gridLayout->addWidget(urdf_browse_button, 0, 2, 1, 1);

        srdf_label = new QLabel(frame);
        srdf_label->setObjectName(QString::fromUtf8("srdf_label"));

        gridLayout->addWidget(srdf_label, 1, 0, 1, 1);

        load_push_button = new QPushButton(frame);
        load_push_button->setObjectName(QString::fromUtf8("load_push_button"));
        load_push_button->setMinimumSize(QSize(80, 0));

        gridLayout->addWidget(load_push_button, 2, 2, 1, 1);


        verticalLayout_4->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 37, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        toolBox->addItem(load_page, QString::fromUtf8("Load URDF/SRDF"));
        acm_page = new QWidget();
        acm_page->setObjectName(QString::fromUtf8("acm_page"));
        acm_page->setGeometry(QRect(0, 0, 394, 154));
        verticalLayout = new QVBoxLayout(acm_page);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        acm_widget = new tesseract_gui::AllowedCollisionMatrixEditorWidget(acm_page);
        acm_widget->setObjectName(QString::fromUtf8("acm_widget"));

        verticalLayout->addWidget(acm_widget);

        toolBox->addItem(acm_page, QString::fromUtf8("Allowed Collision Matrix"));
        kin_groups_page = new QWidget();
        kin_groups_page->setObjectName(QString::fromUtf8("kin_groups_page"));
        kin_groups_page->setGeometry(QRect(0, 0, 394, 154));
        verticalLayout_2 = new QVBoxLayout(kin_groups_page);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        groups_widget = new tesseract_gui::KinematicGroupsEditorWidget(kin_groups_page);
        groups_widget->setObjectName(QString::fromUtf8("groups_widget"));

        verticalLayout_2->addWidget(groups_widget);

        toolBox->addItem(kin_groups_page, QString::fromUtf8("Kinematic Groups"));
        kin_group_states_page = new QWidget();
        kin_group_states_page->setObjectName(QString::fromUtf8("kin_group_states_page"));
        kin_group_states_page->setGeometry(QRect(0, 0, 394, 154));
        verticalLayout_3 = new QVBoxLayout(kin_group_states_page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(3, 3, 3, 3);
        group_states_widget = new tesseract_gui::GroupJointStatesEditorWidget(kin_group_states_page);
        group_states_widget->setObjectName(QString::fromUtf8("group_states_widget"));

        verticalLayout_3->addWidget(group_states_widget);

        toolBox->addItem(kin_group_states_page, QString::fromUtf8("Kinematic Group Joint States"));
        save_page = new QWidget();
        save_page->setObjectName(QString::fromUtf8("save_page"));
        save_page->setGeometry(QRect(0, 0, 394, 154));
        gridLayout_2 = new QGridLayout(save_page);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(3, 3, 3, 3);
        save_srdf_line_edit = new QLineEdit(save_page);
        save_srdf_line_edit->setObjectName(QString::fromUtf8("save_srdf_line_edit"));
        save_srdf_line_edit->setReadOnly(true);

        gridLayout_2->addWidget(save_srdf_line_edit, 4, 1, 1, 1);

        save_srdf_browse_button = new QPushButton(save_page);
        save_srdf_browse_button->setObjectName(QString::fromUtf8("save_srdf_browse_button"));
        save_srdf_browse_button->setMinimumSize(QSize(80, 0));

        gridLayout_2->addWidget(save_srdf_browse_button, 4, 2, 1, 1);

        save_srdf_label = new QLabel(save_page);
        save_srdf_label->setObjectName(QString::fromUtf8("save_srdf_label"));

        gridLayout_2->addWidget(save_srdf_label, 4, 0, 1, 1);

        save_srdf_save_button = new QPushButton(save_page);
        save_srdf_save_button->setObjectName(QString::fromUtf8("save_srdf_save_button"));
        save_srdf_save_button->setMinimumSize(QSize(80, 0));

        gridLayout_2->addWidget(save_srdf_save_button, 5, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 6, 2, 1, 1);

        toolBox->addItem(save_page, QString::fromUtf8("Save"));

        top_layout->addWidget(toolBox);


        retranslateUi(SRDFEditorWidget);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SRDFEditorWidget);
    } // setupUi

    void retranslateUi(QWidget *SRDFEditorWidget)
    {
        SRDFEditorWidget->setWindowTitle(QCoreApplication::translate("SRDFEditorWidget", "Form", nullptr));
        srdf_browse_button->setText(QCoreApplication::translate("SRDFEditorWidget", "Browse", nullptr));
        urdf_label->setText(QCoreApplication::translate("SRDFEditorWidget", "URDF FIle:", nullptr));
        urdf_browse_button->setText(QCoreApplication::translate("SRDFEditorWidget", "Browse", nullptr));
        srdf_label->setText(QCoreApplication::translate("SRDFEditorWidget", "SRDF File:", nullptr));
        load_push_button->setText(QCoreApplication::translate("SRDFEditorWidget", "Load", nullptr));
        toolBox->setItemText(toolBox->indexOf(load_page), QCoreApplication::translate("SRDFEditorWidget", "Load URDF/SRDF", nullptr));
        toolBox->setItemText(toolBox->indexOf(acm_page), QCoreApplication::translate("SRDFEditorWidget", "Allowed Collision Matrix", nullptr));
        toolBox->setItemText(toolBox->indexOf(kin_groups_page), QCoreApplication::translate("SRDFEditorWidget", "Kinematic Groups", nullptr));
        toolBox->setItemText(toolBox->indexOf(kin_group_states_page), QCoreApplication::translate("SRDFEditorWidget", "Kinematic Group Joint States", nullptr));
        save_srdf_browse_button->setText(QCoreApplication::translate("SRDFEditorWidget", "Browse", nullptr));
        save_srdf_label->setText(QCoreApplication::translate("SRDFEditorWidget", "SRDF File:", nullptr));
        save_srdf_save_button->setText(QCoreApplication::translate("SRDFEditorWidget", "Save", nullptr));
        toolBox->setItemText(toolBox->indexOf(save_page), QCoreApplication::translate("SRDFEditorWidget", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SRDFEditorWidget: public Ui_SRDFEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SRDF_EDITOR_WIDGET_H
