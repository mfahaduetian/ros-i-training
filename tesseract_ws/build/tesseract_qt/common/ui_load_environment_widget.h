/********************************************************************************
** Form generated from reading UI file 'load_environment_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOAD_ENVIRONMENT_WIDGET_H
#define UI_LOAD_ENVIRONMENT_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoadEnvironmentWidget
{
public:
    QGridLayout *gridLayout;
    QLineEdit *srdf_line_edit;
    QPushButton *srdf_browse_button;
    QPushButton *urdf_browse_button;
    QLabel *srdf_label;
    QLabel *urdf_label;
    QLineEdit *urdf_line_edit;

    void setupUi(QWidget *LoadEnvironmentWidget)
    {
        if (LoadEnvironmentWidget->objectName().isEmpty())
            LoadEnvironmentWidget->setObjectName(QString::fromUtf8("LoadEnvironmentWidget"));
        LoadEnvironmentWidget->resize(400, 68);
        gridLayout = new QGridLayout(LoadEnvironmentWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        srdf_line_edit = new QLineEdit(LoadEnvironmentWidget);
        srdf_line_edit->setObjectName(QString::fromUtf8("srdf_line_edit"));
        srdf_line_edit->setReadOnly(true);

        gridLayout->addWidget(srdf_line_edit, 1, 1, 1, 1);

        srdf_browse_button = new QPushButton(LoadEnvironmentWidget);
        srdf_browse_button->setObjectName(QString::fromUtf8("srdf_browse_button"));
        srdf_browse_button->setMinimumSize(QSize(80, 0));

        gridLayout->addWidget(srdf_browse_button, 1, 2, 1, 1);

        urdf_browse_button = new QPushButton(LoadEnvironmentWidget);
        urdf_browse_button->setObjectName(QString::fromUtf8("urdf_browse_button"));
        urdf_browse_button->setMinimumSize(QSize(80, 0));

        gridLayout->addWidget(urdf_browse_button, 0, 2, 1, 1);

        srdf_label = new QLabel(LoadEnvironmentWidget);
        srdf_label->setObjectName(QString::fromUtf8("srdf_label"));

        gridLayout->addWidget(srdf_label, 1, 0, 1, 1);

        urdf_label = new QLabel(LoadEnvironmentWidget);
        urdf_label->setObjectName(QString::fromUtf8("urdf_label"));

        gridLayout->addWidget(urdf_label, 0, 0, 1, 1);

        urdf_line_edit = new QLineEdit(LoadEnvironmentWidget);
        urdf_line_edit->setObjectName(QString::fromUtf8("urdf_line_edit"));
        urdf_line_edit->setReadOnly(true);

        gridLayout->addWidget(urdf_line_edit, 0, 1, 1, 1);


        retranslateUi(LoadEnvironmentWidget);

        QMetaObject::connectSlotsByName(LoadEnvironmentWidget);
    } // setupUi

    void retranslateUi(QWidget *LoadEnvironmentWidget)
    {
        LoadEnvironmentWidget->setWindowTitle(QCoreApplication::translate("LoadEnvironmentWidget", "Form", nullptr));
        srdf_browse_button->setText(QCoreApplication::translate("LoadEnvironmentWidget", "Browse", nullptr));
        urdf_browse_button->setText(QCoreApplication::translate("LoadEnvironmentWidget", "Browse", nullptr));
        srdf_label->setText(QCoreApplication::translate("LoadEnvironmentWidget", "SRDF File:", nullptr));
        urdf_label->setText(QCoreApplication::translate("LoadEnvironmentWidget", "URDF FIle:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoadEnvironmentWidget: public Ui_LoadEnvironmentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOAD_ENVIRONMENT_WIDGET_H
