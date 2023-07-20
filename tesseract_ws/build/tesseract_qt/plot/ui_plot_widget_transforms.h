/********************************************************************************
** Form generated from reading UI file 'plot_widget_transforms.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOT_WIDGET_TRANSFORMS_H
#define UI_PLOT_WIDGET_TRANSFORMS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlotWidgetTransforms
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *framePlotPreview;
    QWidget *widgetBottom;
    QHBoxLayout *horizontalLayout_3;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QListWidget *listCurves;
    QWidget *layoutWidget;
    QVBoxLayout *transformLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEditAlias;
    QSpacerItem *horizontalSpacer;
    QFrame *tansformFrame;
    QHBoxLayout *horizontalLayout;
    QListWidget *listTransforms;
    QFrame *line;
    QStackedWidget *stackedWidgetArguments;
    QWidget *pageEmpty;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonCancel;
    QPushButton *pushButtonSave;

    void setupUi(QDialog *PlotWidgetTransforms)
    {
        if (PlotWidgetTransforms->objectName().isEmpty())
            PlotWidgetTransforms->setObjectName(QString::fromUtf8("PlotWidgetTransforms"));
        PlotWidgetTransforms->resize(924, 607);
        verticalLayout_2 = new QVBoxLayout(PlotWidgetTransforms);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetNoConstraint);
        framePlotPreview = new QFrame(PlotWidgetTransforms);
        framePlotPreview->setObjectName(QString::fromUtf8("framePlotPreview"));
        framePlotPreview->setMinimumSize(QSize(600, 300));
        framePlotPreview->setFrameShape(QFrame::StyledPanel);
        framePlotPreview->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(framePlotPreview);

        widgetBottom = new QWidget(PlotWidgetTransforms);
        widgetBottom->setObjectName(QString::fromUtf8("widgetBottom"));
        widgetBottom->setMinimumSize(QSize(0, 250));
        widgetBottom->setMaximumSize(QSize(16777215, 250));
        horizontalLayout_3 = new QHBoxLayout(widgetBottom);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(widgetBottom);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, -1, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 25));

        verticalLayout->addWidget(label_2);

        listCurves = new QListWidget(widget);
        listCurves->setObjectName(QString::fromUtf8("listCurves"));
        listCurves->setFocusPolicy(Qt::NoFocus);
        listCurves->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listCurves->setSelectionMode(QAbstractItemView::SingleSelection);
        listCurves->setSelectionBehavior(QAbstractItemView::SelectRows);
        listCurves->setProperty("isWrapping", QVariant(false));

        verticalLayout->addWidget(listCurves);

        splitter->addWidget(widget);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        transformLayout = new QVBoxLayout(layoutWidget);
        transformLayout->setObjectName(QString::fromUtf8("transformLayout"));
        transformLayout->setContentsMargins(9, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(16777215, 16777215));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label);

        lineEditAlias = new QLineEdit(layoutWidget);
        lineEditAlias->setObjectName(QString::fromUtf8("lineEditAlias"));
        lineEditAlias->setMinimumSize(QSize(300, 0));
        lineEditAlias->setMaximumSize(QSize(500, 16777215));
        lineEditAlias->setFocusPolicy(Qt::ClickFocus);

        horizontalLayout_2->addWidget(lineEditAlias);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        transformLayout->addLayout(horizontalLayout_2);

        tansformFrame = new QFrame(layoutWidget);
        tansformFrame->setObjectName(QString::fromUtf8("tansformFrame"));
        tansformFrame->setFrameShape(QFrame::Box);
        horizontalLayout = new QHBoxLayout(tansformFrame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listTransforms = new QListWidget(tansformFrame);
        QFont font;
        font.setItalic(true);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listTransforms);
        __qlistwidgetitem->setFont(font);
        listTransforms->setObjectName(QString::fromUtf8("listTransforms"));
        listTransforms->setMinimumSize(QSize(150, 0));
        listTransforms->setMaximumSize(QSize(200, 16777215));
        listTransforms->setFocusPolicy(Qt::NoFocus);
        listTransforms->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listTransforms->setSelectionBehavior(QAbstractItemView::SelectRows);
        listTransforms->setSpacing(4);
        listTransforms->setSelectionRectVisible(false);

        horizontalLayout->addWidget(listTransforms);

        line = new QFrame(tansformFrame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        stackedWidgetArguments = new QStackedWidget(tansformFrame);
        stackedWidgetArguments->setObjectName(QString::fromUtf8("stackedWidgetArguments"));
        stackedWidgetArguments->setMinimumSize(QSize(250, 0));
        pageEmpty = new QWidget();
        pageEmpty->setObjectName(QString::fromUtf8("pageEmpty"));
        stackedWidgetArguments->addWidget(pageEmpty);

        horizontalLayout->addWidget(stackedWidgetArguments);


        transformLayout->addWidget(tansformFrame);

        splitter->addWidget(layoutWidget);

        horizontalLayout_3->addWidget(splitter);


        verticalLayout_2->addWidget(widgetBottom);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        pushButtonCancel = new QPushButton(PlotWidgetTransforms);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_5->addWidget(pushButtonCancel);

        pushButtonSave = new QPushButton(PlotWidgetTransforms);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_5->addWidget(pushButtonSave);


        verticalLayout_2->addLayout(horizontalLayout_5);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);

        retranslateUi(PlotWidgetTransforms);

        QMetaObject::connectSlotsByName(PlotWidgetTransforms);
    } // setupUi

    void retranslateUi(QDialog *PlotWidgetTransforms)
    {
        PlotWidgetTransforms->setWindowTitle(QCoreApplication::translate("PlotWidgetTransforms", "Transform Editor", nullptr));
        label_2->setText(QCoreApplication::translate("PlotWidgetTransforms", "Source curve:", nullptr));
        label->setText(QCoreApplication::translate("PlotWidgetTransforms", "Alias:", nullptr));

        const bool __sortingEnabled = listTransforms->isSortingEnabled();
        listTransforms->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listTransforms->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("PlotWidgetTransforms", "-- NO Transform --", nullptr));
        listTransforms->setSortingEnabled(__sortingEnabled);

        pushButtonCancel->setText(QCoreApplication::translate("PlotWidgetTransforms", "Cancel", nullptr));
        pushButtonSave->setText(QCoreApplication::translate("PlotWidgetTransforms", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlotWidgetTransforms: public Ui_PlotWidgetTransforms {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOT_WIDGET_TRANSFORMS_H
