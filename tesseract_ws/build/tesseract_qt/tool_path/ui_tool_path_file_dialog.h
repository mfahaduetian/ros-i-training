/********************************************************************************
** Form generated from reading UI file 'tool_path_file_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOOL_PATH_FILE_DIALOG_H
#define UI_TOOL_PATH_FILE_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ToolPathFileDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *frame_label;
    QComboBox *frame_combo_box;
    QLineEdit *file_path_line_edit;
    QLabel *file_path_label;
    QPushButton *file_path_push_button;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ToolPathFileDialog)
    {
        if (ToolPathFileDialog->objectName().isEmpty())
            ToolPathFileDialog->setObjectName(QString::fromUtf8("ToolPathFileDialog"));
        ToolPathFileDialog->resize(400, 116);
        verticalLayout = new QVBoxLayout(ToolPathFileDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(ToolPathFileDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame_label = new QLabel(frame);
        frame_label->setObjectName(QString::fromUtf8("frame_label"));

        gridLayout->addWidget(frame_label, 0, 0, 1, 1);

        frame_combo_box = new QComboBox(frame);
        frame_combo_box->setObjectName(QString::fromUtf8("frame_combo_box"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_combo_box->sizePolicy().hasHeightForWidth());
        frame_combo_box->setSizePolicy(sizePolicy);

        gridLayout->addWidget(frame_combo_box, 0, 1, 1, 1);

        file_path_line_edit = new QLineEdit(frame);
        file_path_line_edit->setObjectName(QString::fromUtf8("file_path_line_edit"));
        file_path_line_edit->setReadOnly(true);

        gridLayout->addWidget(file_path_line_edit, 1, 1, 1, 1);

        file_path_label = new QLabel(frame);
        file_path_label->setObjectName(QString::fromUtf8("file_path_label"));

        gridLayout->addWidget(file_path_label, 1, 0, 1, 1);

        file_path_push_button = new QPushButton(frame);
        file_path_push_button->setObjectName(QString::fromUtf8("file_path_push_button"));

        gridLayout->addWidget(file_path_push_button, 1, 2, 1, 1);


        verticalLayout->addWidget(frame);

        buttonBox = new QDialogButtonBox(ToolPathFileDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ToolPathFileDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ToolPathFileDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ToolPathFileDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ToolPathFileDialog);
    } // setupUi

    void retranslateUi(QDialog *ToolPathFileDialog)
    {
        ToolPathFileDialog->setWindowTitle(QCoreApplication::translate("ToolPathFileDialog", "Dialog", nullptr));
        frame_label->setText(QCoreApplication::translate("ToolPathFileDialog", "Link Name:", nullptr));
        file_path_label->setText(QCoreApplication::translate("ToolPathFileDialog", "File Path:", nullptr));
        file_path_push_button->setText(QCoreApplication::translate("ToolPathFileDialog", "Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ToolPathFileDialog: public Ui_ToolPathFileDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOOL_PATH_FILE_DIALOG_H
