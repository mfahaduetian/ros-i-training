/********************************************************************************
** Form generated from reading UI file 'snp_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNP_WIDGET_H
#define UI_SNP_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SNPWidget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *button_box;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *calibration_group_box;
    QGridLayout *gridLayout_2;
    QPushButton *run_calibration_button;
    QPushButton *install_calibration_button;
    QPushButton *observe_button;
    QPushButton *get_correlation_button;
    QPushButton *reset_calibration_button;
    QPushButton *scan_button;
    QPushButton *tpp_button;
    QPushButton *motion_plan_button;
    QPushButton *motion_execution_button;
    QPushButton *reset_button;
    QTextEdit *text_edit_log;
    QSpacerItem *verticalSpacer;
    QProgressBar *progress_bar;

    void setupUi(QWidget *SNPWidget)
    {
        if (SNPWidget->objectName().isEmpty())
            SNPWidget->setObjectName(QString::fromUtf8("SNPWidget"));
        SNPWidget->resize(784, 650);
        verticalLayout = new QVBoxLayout(SNPWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        button_box = new QGroupBox(SNPWidget);
        button_box->setObjectName(QString::fromUtf8("button_box"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_box->sizePolicy().hasHeightForWidth());
        button_box->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(button_box);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        calibration_group_box = new QGroupBox(button_box);
        calibration_group_box->setObjectName(QString::fromUtf8("calibration_group_box"));
        calibration_group_box->setEnabled(true);
        calibration_group_box->setCheckable(true);
        calibration_group_box->setChecked(false);
        gridLayout_2 = new QGridLayout(calibration_group_box);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        run_calibration_button = new QPushButton(calibration_group_box);
        run_calibration_button->setObjectName(QString::fromUtf8("run_calibration_button"));
        run_calibration_button->setEnabled(false);

        gridLayout_2->addWidget(run_calibration_button, 0, 1, 1, 1);

        install_calibration_button = new QPushButton(calibration_group_box);
        install_calibration_button->setObjectName(QString::fromUtf8("install_calibration_button"));
        install_calibration_button->setEnabled(false);

        gridLayout_2->addWidget(install_calibration_button, 0, 2, 1, 1);

        observe_button = new QPushButton(calibration_group_box);
        observe_button->setObjectName(QString::fromUtf8("observe_button"));

        gridLayout_2->addWidget(observe_button, 0, 0, 1, 1);

        get_correlation_button = new QPushButton(calibration_group_box);
        get_correlation_button->setObjectName(QString::fromUtf8("get_correlation_button"));
        get_correlation_button->setEnabled(false);

        gridLayout_2->addWidget(get_correlation_button, 2, 1, 1, 1);

        reset_calibration_button = new QPushButton(calibration_group_box);
        reset_calibration_button->setObjectName(QString::fromUtf8("reset_calibration_button"));
        reset_calibration_button->setEnabled(false);

        gridLayout_2->addWidget(reset_calibration_button, 2, 2, 1, 1);


        verticalLayout_2->addWidget(calibration_group_box);

        scan_button = new QPushButton(button_box);
        scan_button->setObjectName(QString::fromUtf8("scan_button"));
        scan_button->setEnabled(true);

        verticalLayout_2->addWidget(scan_button);

        tpp_button = new QPushButton(button_box);
        tpp_button->setObjectName(QString::fromUtf8("tpp_button"));
        tpp_button->setEnabled(true);

        verticalLayout_2->addWidget(tpp_button);

        motion_plan_button = new QPushButton(button_box);
        motion_plan_button->setObjectName(QString::fromUtf8("motion_plan_button"));
        motion_plan_button->setEnabled(true);

        verticalLayout_2->addWidget(motion_plan_button);

        motion_execution_button = new QPushButton(button_box);
        motion_execution_button->setObjectName(QString::fromUtf8("motion_execution_button"));
        motion_execution_button->setEnabled(true);

        verticalLayout_2->addWidget(motion_execution_button);

        reset_button = new QPushButton(button_box);
        reset_button->setObjectName(QString::fromUtf8("reset_button"));

        verticalLayout_2->addWidget(reset_button);

        text_edit_log = new QTextEdit(button_box);
        text_edit_log->setObjectName(QString::fromUtf8("text_edit_log"));

        verticalLayout_2->addWidget(text_edit_log);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout->addWidget(button_box);

        progress_bar = new QProgressBar(SNPWidget);
        progress_bar->setObjectName(QString::fromUtf8("progress_bar"));
        progress_bar->setValue(0);

        verticalLayout->addWidget(progress_bar);


        retranslateUi(SNPWidget);

        QMetaObject::connectSlotsByName(SNPWidget);
    } // setupUi

    void retranslateUi(QWidget *SNPWidget)
    {
        SNPWidget->setWindowTitle(QCoreApplication::translate("SNPWidget", "Form", nullptr));
        button_box->setTitle(QString());
        calibration_group_box->setTitle(QCoreApplication::translate("SNPWidget", "Camera Calibration", nullptr));
        run_calibration_button->setText(QCoreApplication::translate("SNPWidget", "Run", nullptr));
        install_calibration_button->setText(QCoreApplication::translate("SNPWidget", "Install", nullptr));
        observe_button->setText(QCoreApplication::translate("SNPWidget", "Observe", nullptr));
        get_correlation_button->setText(QCoreApplication::translate("SNPWidget", "Get Correlation", nullptr));
        reset_calibration_button->setText(QCoreApplication::translate("SNPWidget", "Reset", nullptr));
        scan_button->setText(QCoreApplication::translate("SNPWidget", "Get Detailed Scan", nullptr));
        tpp_button->setText(QCoreApplication::translate("SNPWidget", "Generate Tool Path Plan", nullptr));
        motion_plan_button->setText(QCoreApplication::translate("SNPWidget", "Generate Motion Plan", nullptr));
        motion_execution_button->setText(QCoreApplication::translate("SNPWidget", "Execute Motion Plan", nullptr));
        reset_button->setText(QCoreApplication::translate("SNPWidget", "Reset", nullptr));
        text_edit_log->setHtml(QCoreApplication::translate("SNPWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Waiting to calibrate...</p></body></html>", nullptr));
        progress_bar->setFormat(QString());
    } // retranslateUi

};

namespace Ui {
    class SNPWidget: public Ui_SNPWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNP_WIDGET_H
