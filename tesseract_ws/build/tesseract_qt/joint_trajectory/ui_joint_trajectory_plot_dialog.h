/********************************************************************************
** Form generated from reading UI file 'joint_trajectory_plot_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINT_TRAJECTORY_PLOT_DIALOG_H
#define UI_JOINT_TRAJECTORY_PLOT_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_JointTrajectoryPlotDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *jtpTabWidget;
    QSlider *jtpHorizontalSlider;

    void setupUi(QDialog *JointTrajectoryPlotDialog)
    {
        if (JointTrajectoryPlotDialog->objectName().isEmpty())
            JointTrajectoryPlotDialog->setObjectName(QString::fromUtf8("JointTrajectoryPlotDialog"));
        JointTrajectoryPlotDialog->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JointTrajectoryPlotDialog->sizePolicy().hasHeightForWidth());
        JointTrajectoryPlotDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8(":/tesseract_qt/svg/plot_image.svg");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        JointTrajectoryPlotDialog->setWindowIcon(icon);
        JointTrajectoryPlotDialog->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(JointTrajectoryPlotDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetNoConstraint);
        jtpTabWidget = new QTabWidget(JointTrajectoryPlotDialog);
        jtpTabWidget->setObjectName(QString::fromUtf8("jtpTabWidget"));

        verticalLayout->addWidget(jtpTabWidget);

        jtpHorizontalSlider = new QSlider(JointTrajectoryPlotDialog);
        jtpHorizontalSlider->setObjectName(QString::fromUtf8("jtpHorizontalSlider"));
        jtpHorizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(jtpHorizontalSlider);


        retranslateUi(JointTrajectoryPlotDialog);

        jtpTabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(JointTrajectoryPlotDialog);
    } // setupUi

    void retranslateUi(QDialog *JointTrajectoryPlotDialog)
    {
        JointTrajectoryPlotDialog->setWindowTitle(QCoreApplication::translate("JointTrajectoryPlotDialog", "Joint Trajectory Plot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JointTrajectoryPlotDialog: public Ui_JointTrajectoryPlotDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINT_TRAJECTORY_PLOT_DIALOG_H
