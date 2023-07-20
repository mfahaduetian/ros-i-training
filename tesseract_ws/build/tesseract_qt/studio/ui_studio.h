/********************************************************************************
** Form generated from reading UI file 'studio.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDIO_H
#define UI_STUDIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Studio
{
public:
    QAction *actionRestore_State;
    QAction *actionSave_State;
    QAction *actionCreate_Perspective;
    QAction *actionLoad_Plugins;
    QAction *actionLoad_Config;
    QAction *actionSave_Config;
    QAction *actionSave_Config_As;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuTools;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Studio)
    {
        if (Studio->objectName().isEmpty())
            Studio->setObjectName(QString::fromUtf8("Studio"));
        Studio->resize(800, 600);
        actionRestore_State = new QAction(Studio);
        actionRestore_State->setObjectName(QString::fromUtf8("actionRestore_State"));
        actionSave_State = new QAction(Studio);
        actionSave_State->setObjectName(QString::fromUtf8("actionSave_State"));
        actionCreate_Perspective = new QAction(Studio);
        actionCreate_Perspective->setObjectName(QString::fromUtf8("actionCreate_Perspective"));
        actionLoad_Plugins = new QAction(Studio);
        actionLoad_Plugins->setObjectName(QString::fromUtf8("actionLoad_Plugins"));
        actionLoad_Config = new QAction(Studio);
        actionLoad_Config->setObjectName(QString::fromUtf8("actionLoad_Config"));
        actionSave_Config = new QAction(Studio);
        actionSave_Config->setObjectName(QString::fromUtf8("actionSave_Config"));
        actionSave_Config->setEnabled(false);
        actionSave_Config_As = new QAction(Studio);
        actionSave_Config_As->setObjectName(QString::fromUtf8("actionSave_Config_As"));
        centralwidget = new QWidget(Studio);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Studio->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Studio);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 19));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        Studio->setMenuBar(menubar);
        statusbar = new QStatusBar(Studio);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Studio->setStatusBar(statusbar);
        toolBar = new QToolBar(Studio);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Studio->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuTools->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionLoad_Config);
        menuFile->addAction(actionSave_Config);
        menuFile->addAction(actionSave_Config_As);
        menuFile->addSeparator();
        menuFile->addAction(actionRestore_State);
        menuFile->addAction(actionSave_State);
        menuTools->addAction(actionLoad_Plugins);
        toolBar->addAction(actionRestore_State);
        toolBar->addAction(actionSave_State);
        toolBar->addAction(actionCreate_Perspective);

        retranslateUi(Studio);

        QMetaObject::connectSlotsByName(Studio);
    } // setupUi

    void retranslateUi(QMainWindow *Studio)
    {
        Studio->setWindowTitle(QCoreApplication::translate("Studio", "MainWindow", nullptr));
        actionRestore_State->setText(QCoreApplication::translate("Studio", "Restore State", nullptr));
        actionSave_State->setText(QCoreApplication::translate("Studio", "Save State", nullptr));
        actionCreate_Perspective->setText(QCoreApplication::translate("Studio", "Create Perspective", nullptr));
        actionLoad_Plugins->setText(QCoreApplication::translate("Studio", "Load Plugins", nullptr));
        actionLoad_Config->setText(QCoreApplication::translate("Studio", "Load Config", nullptr));
#if QT_CONFIG(shortcut)
        actionLoad_Config->setShortcut(QCoreApplication::translate("Studio", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_Config->setText(QCoreApplication::translate("Studio", "Save Config", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_Config->setShortcut(QCoreApplication::translate("Studio", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_Config_As->setText(QCoreApplication::translate("Studio", "Save Config As", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_Config_As->setShortcut(QCoreApplication::translate("Studio", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        menuFile->setTitle(QCoreApplication::translate("Studio", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("Studio", "View", nullptr));
        menuTools->setTitle(QCoreApplication::translate("Studio", "Tools", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Studio", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Studio: public Ui_Studio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDIO_H
