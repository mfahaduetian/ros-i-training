/********************************************************************************
** Form generated from reading UI file 'image_viewer_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGE_VIEWER_WIDGET_H
#define UI_IMAGE_VIEWER_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageViewerWidget
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scroll_area;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *ImageViewerWidget)
    {
        if (ImageViewerWidget->objectName().isEmpty())
            ImageViewerWidget->setObjectName(QString::fromUtf8("ImageViewerWidget"));
        ImageViewerWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(ImageViewerWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scroll_area = new QScrollArea(ImageViewerWidget);
        scroll_area->setObjectName(QString::fromUtf8("scroll_area"));
        scroll_area->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 380, 280));
        scroll_area->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scroll_area);


        retranslateUi(ImageViewerWidget);

        QMetaObject::connectSlotsByName(ImageViewerWidget);
    } // setupUi

    void retranslateUi(QWidget *ImageViewerWidget)
    {
        ImageViewerWidget->setWindowTitle(QCoreApplication::translate("ImageViewerWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImageViewerWidget: public Ui_ImageViewerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGE_VIEWER_WIDGET_H
