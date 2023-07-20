/********************************************************************************
** Form generated from reading UI file 'joint_trajectory_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOINT_TRAJECTORY_WIDGET_H
#define UI_JOINT_TRAJECTORY_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "tesseract_qt/common/widgets/tree_view.h"

QT_BEGIN_NAMESPACE

class Ui_JointTrajectoryWidget
{
public:
    QVBoxLayout *verticalLayout;
    tesseract_gui::TreeView *trajectoryTreeView;
    QFrame *trajectoryPlayerFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *trajectoryCurrentDurationLabel;
    QSlider *trajectorySlider;
    QLabel *trajectoryDurationLabel;
    QPushButton *trajectoryPlayButton;
    QPushButton *trajectoryPauseButton;

    void setupUi(QWidget *JointTrajectoryWidget)
    {
        if (JointTrajectoryWidget->objectName().isEmpty())
            JointTrajectoryWidget->setObjectName(QString::fromUtf8("JointTrajectoryWidget"));
        JointTrajectoryWidget->resize(400, 513);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(JointTrajectoryWidget->sizePolicy().hasHeightForWidth());
        JointTrajectoryWidget->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(JointTrajectoryWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        trajectoryTreeView = new tesseract_gui::TreeView(JointTrajectoryWidget);
        trajectoryTreeView->setObjectName(QString::fromUtf8("trajectoryTreeView"));
        trajectoryTreeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        trajectoryTreeView->setSelectionMode(QAbstractItemView::SingleSelection);
        trajectoryTreeView->setRootIsDecorated(true);
        trajectoryTreeView->setHeaderHidden(false);
        trajectoryTreeView->header()->setVisible(true);

        verticalLayout->addWidget(trajectoryTreeView);

        trajectoryPlayerFrame = new QFrame(JointTrajectoryWidget);
        trajectoryPlayerFrame->setObjectName(QString::fromUtf8("trajectoryPlayerFrame"));
        trajectoryPlayerFrame->setEnabled(false);
        trajectoryPlayerFrame->setFrameShape(QFrame::StyledPanel);
        trajectoryPlayerFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(trajectoryPlayerFrame);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        trajectoryCurrentDurationLabel = new QLabel(trajectoryPlayerFrame);
        trajectoryCurrentDurationLabel->setObjectName(QString::fromUtf8("trajectoryCurrentDurationLabel"));
        trajectoryCurrentDurationLabel->setMinimumSize(QSize(60, 0));
        trajectoryCurrentDurationLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(trajectoryCurrentDurationLabel);

        trajectorySlider = new QSlider(trajectoryPlayerFrame);
        trajectorySlider->setObjectName(QString::fromUtf8("trajectorySlider"));
        trajectorySlider->setStyleSheet(QString::fromUtf8(""));
        trajectorySlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(trajectorySlider);

        trajectoryDurationLabel = new QLabel(trajectoryPlayerFrame);
        trajectoryDurationLabel->setObjectName(QString::fromUtf8("trajectoryDurationLabel"));
        trajectoryDurationLabel->setMinimumSize(QSize(60, 0));
        trajectoryDurationLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(trajectoryDurationLabel);

        trajectoryPlayButton = new QPushButton(trajectoryPlayerFrame);
        trajectoryPlayButton->setObjectName(QString::fromUtf8("trajectoryPlayButton"));
        trajectoryPlayButton->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("media-playback-start");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        trajectoryPlayButton->setIcon(icon);

        horizontalLayout->addWidget(trajectoryPlayButton);

        trajectoryPauseButton = new QPushButton(trajectoryPlayerFrame);
        trajectoryPauseButton->setObjectName(QString::fromUtf8("trajectoryPauseButton"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("media-playback-pause");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        trajectoryPauseButton->setIcon(icon1);

        horizontalLayout->addWidget(trajectoryPauseButton);


        verticalLayout->addWidget(trajectoryPlayerFrame);


        retranslateUi(JointTrajectoryWidget);

        QMetaObject::connectSlotsByName(JointTrajectoryWidget);
    } // setupUi

    void retranslateUi(QWidget *JointTrajectoryWidget)
    {
        JointTrajectoryWidget->setWindowTitle(QCoreApplication::translate("JointTrajectoryWidget", "Joint Trajectory Widget", nullptr));
        trajectoryCurrentDurationLabel->setText(QCoreApplication::translate("JointTrajectoryWidget", "0.000", nullptr));
        trajectoryDurationLabel->setText(QCoreApplication::translate("JointTrajectoryWidget", "0.000", nullptr));
#if QT_CONFIG(tooltip)
        trajectoryPlayButton->setToolTip(QCoreApplication::translate("JointTrajectoryWidget", "Play Trajectory", nullptr));
#endif // QT_CONFIG(tooltip)
        trajectoryPlayButton->setText(QString());
#if QT_CONFIG(tooltip)
        trajectoryPauseButton->setToolTip(QCoreApplication::translate("JointTrajectoryWidget", "Pause Trajectory", nullptr));
#endif // QT_CONFIG(tooltip)
        trajectoryPauseButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class JointTrajectoryWidget: public Ui_JointTrajectoryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOINT_TRAJECTORY_WIDGET_H
