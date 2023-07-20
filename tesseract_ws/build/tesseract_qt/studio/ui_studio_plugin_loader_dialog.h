/********************************************************************************
** Form generated from reading UI file 'studio_plugin_loader_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDIO_PLUGIN_LOADER_DIALOG_H
#define UI_STUDIO_PLUGIN_LOADER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudioPluginLoaderDialog
{
public:
    QAction *actionRemove_Search_Path;
    QAction *actionRemove_Search_Library;
    QAction *actionAdd_Search_Path;
    QAction *actionAdd_Search_Library;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QFormLayout *formLayout;
    QLabel *plugin_name_label;
    QLineEdit *plugin_name_line_edit;
    QLabel *plugin_label;
    QComboBox *plugin_combo_box;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *add_push_button;
    QTabWidget *tabWidget;
    QWidget *search_paths_tab;
    QVBoxLayout *verticalLayout_2;
    QListView *search_paths_list_view;
    QWidget *search_libraries_tab;
    QVBoxLayout *verticalLayout_3;
    QListView *search_libraries_list_view;

    void setupUi(QDialog *StudioPluginLoaderDialog)
    {
        if (StudioPluginLoaderDialog->objectName().isEmpty())
            StudioPluginLoaderDialog->setObjectName(QString::fromUtf8("StudioPluginLoaderDialog"));
        StudioPluginLoaderDialog->resize(444, 480);
        actionRemove_Search_Path = new QAction(StudioPluginLoaderDialog);
        actionRemove_Search_Path->setObjectName(QString::fromUtf8("actionRemove_Search_Path"));
        actionRemove_Search_Library = new QAction(StudioPluginLoaderDialog);
        actionRemove_Search_Library->setObjectName(QString::fromUtf8("actionRemove_Search_Library"));
        actionAdd_Search_Path = new QAction(StudioPluginLoaderDialog);
        actionAdd_Search_Path->setObjectName(QString::fromUtf8("actionAdd_Search_Path"));
        actionAdd_Search_Library = new QAction(StudioPluginLoaderDialog);
        actionAdd_Search_Library->setObjectName(QString::fromUtf8("actionAdd_Search_Library"));
        verticalLayout = new QVBoxLayout(StudioPluginLoaderDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_2 = new QFrame(StudioPluginLoaderDialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        plugin_name_label = new QLabel(frame_2);
        plugin_name_label->setObjectName(QString::fromUtf8("plugin_name_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, plugin_name_label);

        plugin_name_line_edit = new QLineEdit(frame_2);
        plugin_name_line_edit->setObjectName(QString::fromUtf8("plugin_name_line_edit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, plugin_name_line_edit);

        plugin_label = new QLabel(frame_2);
        plugin_label->setObjectName(QString::fromUtf8("plugin_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, plugin_label);

        plugin_combo_box = new QComboBox(frame_2);
        plugin_combo_box->setObjectName(QString::fromUtf8("plugin_combo_box"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(plugin_combo_box->sizePolicy().hasHeightForWidth());
        plugin_combo_box->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, plugin_combo_box);


        verticalLayout->addWidget(frame_2);

        frame = new QFrame(StudioPluginLoaderDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        add_push_button = new QPushButton(frame);
        add_push_button->setObjectName(QString::fromUtf8("add_push_button"));
        add_push_button->setEnabled(false);

        horizontalLayout->addWidget(add_push_button);


        verticalLayout->addWidget(frame);

        tabWidget = new QTabWidget(StudioPluginLoaderDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        search_paths_tab = new QWidget();
        search_paths_tab->setObjectName(QString::fromUtf8("search_paths_tab"));
        verticalLayout_2 = new QVBoxLayout(search_paths_tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        search_paths_list_view = new QListView(search_paths_tab);
        search_paths_list_view->setObjectName(QString::fromUtf8("search_paths_list_view"));
        search_paths_list_view->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_2->addWidget(search_paths_list_view);

        tabWidget->addTab(search_paths_tab, QString());
        search_libraries_tab = new QWidget();
        search_libraries_tab->setObjectName(QString::fromUtf8("search_libraries_tab"));
        verticalLayout_3 = new QVBoxLayout(search_libraries_tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        search_libraries_list_view = new QListView(search_libraries_tab);
        search_libraries_list_view->setObjectName(QString::fromUtf8("search_libraries_list_view"));
        search_libraries_list_view->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout_3->addWidget(search_libraries_list_view);

        tabWidget->addTab(search_libraries_tab, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(StudioPluginLoaderDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StudioPluginLoaderDialog);
    } // setupUi

    void retranslateUi(QDialog *StudioPluginLoaderDialog)
    {
        StudioPluginLoaderDialog->setWindowTitle(QCoreApplication::translate("StudioPluginLoaderDialog", "Studio Plugin Loader", nullptr));
        actionRemove_Search_Path->setText(QCoreApplication::translate("StudioPluginLoaderDialog", "Remove Search_Path", nullptr));
        actionRemove_Search_Library->setText(QCoreApplication::translate("StudioPluginLoaderDialog", "Remove Search Library", nullptr));
        actionAdd_Search_Path->setText(QCoreApplication::translate("StudioPluginLoaderDialog", "Add Search Path", nullptr));
        actionAdd_Search_Library->setText(QCoreApplication::translate("StudioPluginLoaderDialog", "Add Search Library", nullptr));
        plugin_name_label->setText(QCoreApplication::translate("StudioPluginLoaderDialog", "Name:", nullptr));
        plugin_label->setText(QCoreApplication::translate("StudioPluginLoaderDialog", "Plugin", nullptr));
        add_push_button->setText(QCoreApplication::translate("StudioPluginLoaderDialog", "Add", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(search_paths_tab), QCoreApplication::translate("StudioPluginLoaderDialog", "Search Paths", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(search_libraries_tab), QCoreApplication::translate("StudioPluginLoaderDialog", "Search Libraries", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StudioPluginLoaderDialog: public Ui_StudioPluginLoaderDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDIO_PLUGIN_LOADER_DIALOG_H
