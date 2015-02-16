/********************************************************************************
** Form generated from reading UI file 'helpviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPVIEWER_H
#define UI_HELPVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpViewer
{
public:
    QAction *actionback;
    QAction *actionforward;
    QAction *actiongohome;
    QAction *actionfileprint;
    QAction *actionquit;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menu_Navigate;
    QMenu *menu_File;
    QStatusBar *statusbar;
    QToolBar *maintoolbar;

    void setupUi(QMainWindow *HelpViewer)
    {
        if (HelpViewer->objectName().isEmpty())
            HelpViewer->setObjectName(QStringLiteral("HelpViewer"));
        HelpViewer->setEnabled(true);
        HelpViewer->resize(600, 600);
        HelpViewer->setIconSize(QSize(22, 22));
        actionback = new QAction(HelpViewer);
        actionback->setObjectName(QStringLiteral("actionback"));
        actionback->setEnabled(false);
        actionforward = new QAction(HelpViewer);
        actionforward->setObjectName(QStringLiteral("actionforward"));
        actionforward->setEnabled(false);
        actiongohome = new QAction(HelpViewer);
        actiongohome->setObjectName(QStringLiteral("actiongohome"));
        actionfileprint = new QAction(HelpViewer);
        actionfileprint->setObjectName(QStringLiteral("actionfileprint"));
        actionquit = new QAction(HelpViewer);
        actionquit->setObjectName(QStringLiteral("actionquit"));
        centralwidget = new QWidget(HelpViewer);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        HelpViewer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HelpViewer);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 26));
        menu_Navigate = new QMenu(menubar);
        menu_Navigate->setObjectName(QStringLiteral("menu_Navigate"));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        HelpViewer->setMenuBar(menubar);
        statusbar = new QStatusBar(HelpViewer);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        HelpViewer->setStatusBar(statusbar);
        maintoolbar = new QToolBar(HelpViewer);
        maintoolbar->setObjectName(QStringLiteral("maintoolbar"));
        maintoolbar->setOrientation(Qt::Horizontal);
        maintoolbar->setIconSize(QSize(22, 22));
        HelpViewer->addToolBar(Qt::TopToolBarArea, maintoolbar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Navigate->menuAction());
        menu_Navigate->addAction(actionback);
        menu_Navigate->addAction(actionforward);
        menu_Navigate->addAction(actiongohome);
        menu_File->addAction(actionfileprint);
        menu_File->addSeparator();
        menu_File->addAction(actionquit);
        maintoolbar->addAction(actionback);
        maintoolbar->addAction(actionforward);
        maintoolbar->addAction(actiongohome);
        maintoolbar->addSeparator();
        maintoolbar->addAction(actionfileprint);
        maintoolbar->addAction(actionquit);

        retranslateUi(HelpViewer);

        QMetaObject::connectSlotsByName(HelpViewer);
    } // setupUi

    void retranslateUi(QMainWindow *HelpViewer)
    {
        HelpViewer->setWindowTitle(QApplication::translate("HelpViewer", "Help Viewer[*]", 0));
        actionback->setText(QApplication::translate("HelpViewer", "&Backward", 0));
#ifndef QT_NO_STATUSTIP
        actionback->setStatusTip(QApplication::translate("HelpViewer", "Go to the previous page", 0));
#endif // QT_NO_STATUSTIP
        actionback->setShortcut(QApplication::translate("HelpViewer", "Alt+", 0));
        actionforward->setText(QApplication::translate("HelpViewer", "&Forward", 0));
#ifndef QT_NO_STATUSTIP
        actionforward->setStatusTip(QApplication::translate("HelpViewer", "Go to the next page", 0));
#endif // QT_NO_STATUSTIP
        actionforward->setShortcut(QApplication::translate("HelpViewer", "Alt+", 0));
        actiongohome->setText(QApplication::translate("HelpViewer", "&Home", 0));
#ifndef QT_NO_STATUSTIP
        actiongohome->setStatusTip(QApplication::translate("HelpViewer", "Go to the index page", 0));
#endif // QT_NO_STATUSTIP
        actiongohome->setShortcut(QApplication::translate("HelpViewer", "Ctrl+Home", 0));
        actionfileprint->setText(QApplication::translate("HelpViewer", "&Print...", 0));
#ifndef QT_NO_STATUSTIP
        actionfileprint->setStatusTip(QApplication::translate("HelpViewer", "Print the document", 0));
#endif // QT_NO_STATUSTIP
        actionfileprint->setShortcut(QApplication::translate("HelpViewer", "Ctrl+P", 0));
        actionquit->setText(QApplication::translate("HelpViewer", "&Quit", 0));
#ifndef QT_NO_STATUSTIP
        actionquit->setStatusTip(QApplication::translate("HelpViewer", "Close the help viewer", 0));
#endif // QT_NO_STATUSTIP
        actionquit->setShortcut(QApplication::translate("HelpViewer", "Ctrl+Q", 0));
        menu_Navigate->setTitle(QApplication::translate("HelpViewer", "&Navigate", 0));
        menu_File->setTitle(QApplication::translate("HelpViewer", "&File", 0));
        maintoolbar->setWindowTitle(QApplication::translate("HelpViewer", "Main Toolbar", 0));
    } // retranslateUi

};

namespace Ui {
    class HelpViewer: public Ui_HelpViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPVIEWER_H
