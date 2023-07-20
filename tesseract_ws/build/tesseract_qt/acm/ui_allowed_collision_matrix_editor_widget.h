/********************************************************************************
** Form generated from reading UI file 'allowed_collision_matrix_editor_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLOWED_COLLISION_MATRIX_EDITOR_WIDGET_H
#define UI_ALLOWED_COLLISION_MATRIX_EDITOR_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tesseract_qt/acm/widgets/allowed_collision_matrix_widget.h"

QT_BEGIN_NAMESPACE

class Ui_AllowedCollisionMatrixEditorWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *resolutionLabel;
    QSlider *resolutionSlider;
    QPushButton *generatePushButton;
    tesseract_gui::AllowedCollisionMatrixWidget *acm_widget;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *addPushButton;
    QPushButton *removePushButton;
    QPushButton *applyPushButton;

    void setupUi(QWidget *AllowedCollisionMatrixEditorWidget)
    {
        if (AllowedCollisionMatrixEditorWidget->objectName().isEmpty())
            AllowedCollisionMatrixEditorWidget->setObjectName(QString::fromUtf8("AllowedCollisionMatrixEditorWidget"));
        AllowedCollisionMatrixEditorWidget->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AllowedCollisionMatrixEditorWidget->sizePolicy().hasHeightForWidth());
        AllowedCollisionMatrixEditorWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AllowedCollisionMatrixEditorWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        frame = new QFrame(AllowedCollisionMatrixEditorWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(1);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        resolutionLabel = new QLabel(frame);
        resolutionLabel->setObjectName(QString::fromUtf8("resolutionLabel"));

        horizontalLayout->addWidget(resolutionLabel);

        resolutionSlider = new QSlider(frame);
        resolutionSlider->setObjectName(QString::fromUtf8("resolutionSlider"));
        resolutionSlider->setMinimum(1000);
        resolutionSlider->setMaximum(10000);
        resolutionSlider->setValue(8000);
        resolutionSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(resolutionSlider);

        generatePushButton = new QPushButton(frame);
        generatePushButton->setObjectName(QString::fromUtf8("generatePushButton"));
        generatePushButton->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(generatePushButton);


        verticalLayout->addWidget(frame);

        acm_widget = new tesseract_gui::AllowedCollisionMatrixWidget(AllowedCollisionMatrixEditorWidget);
        acm_widget->setObjectName(QString::fromUtf8("acm_widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(acm_widget->sizePolicy().hasHeightForWidth());
        acm_widget->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(acm_widget);

        frame_2 = new QFrame(AllowedCollisionMatrixEditorWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        addPushButton = new QPushButton(frame_2);
        addPushButton->setObjectName(QString::fromUtf8("addPushButton"));
        addPushButton->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(addPushButton);

        removePushButton = new QPushButton(frame_2);
        removePushButton->setObjectName(QString::fromUtf8("removePushButton"));
        removePushButton->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(removePushButton);

        applyPushButton = new QPushButton(frame_2);
        applyPushButton->setObjectName(QString::fromUtf8("applyPushButton"));
        applyPushButton->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(applyPushButton);


        verticalLayout->addWidget(frame_2);


        retranslateUi(AllowedCollisionMatrixEditorWidget);

        QMetaObject::connectSlotsByName(AllowedCollisionMatrixEditorWidget);
    } // setupUi

    void retranslateUi(QWidget *AllowedCollisionMatrixEditorWidget)
    {
        AllowedCollisionMatrixEditorWidget->setWindowTitle(QCoreApplication::translate("AllowedCollisionMatrixEditorWidget", "Form", nullptr));
        resolutionLabel->setText(QCoreApplication::translate("AllowedCollisionMatrixEditorWidget", "Resolution:", nullptr));
        generatePushButton->setText(QCoreApplication::translate("AllowedCollisionMatrixEditorWidget", "Generate", nullptr));
        addPushButton->setText(QCoreApplication::translate("AllowedCollisionMatrixEditorWidget", "Add", nullptr));
        removePushButton->setText(QCoreApplication::translate("AllowedCollisionMatrixEditorWidget", "Remove", nullptr));
        applyPushButton->setText(QCoreApplication::translate("AllowedCollisionMatrixEditorWidget", "Apply", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllowedCollisionMatrixEditorWidget: public Ui_AllowedCollisionMatrixEditorWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLOWED_COLLISION_MATRIX_EDITOR_WIDGET_H
