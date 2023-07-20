/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CMainWindow
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuView;
    QToolBar *toolBar;

    void setupUi(QMainWindow *CMainWindow)
    {
        if (CMainWindow->objectName().isEmpty())
            CMainWindow->setObjectName(QString::fromUtf8("CMainWindow"));
        CMainWindow->resize(1284, 757);
        centralwidget = new QWidget(CMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        CMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1284, 21));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        CMainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(CMainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        CMainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuView->menuAction());

        retranslateUi(CMainWindow);

        QMetaObject::connectSlotsByName(CMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CMainWindow)
    {
        CMainWindow->setWindowTitle(QCoreApplication::translate("CMainWindow", "MainWindow", nullptr));
        menuView->setTitle(QCoreApplication::translate("CMainWindow", "View", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("CMainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CMainWindow: public Ui_CMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
