/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QAction *actionfilenew;
    QAction *actionfileopen;
    QAction *actionfilesave;
    QAction *actionfilesaveas;
    QAction *actionfileprint;
    QAction *actionfileexport;
    QAction *actionexit;
    QAction *actiontogglestatusbar;
    QAction *actionconfigure;
    QAction *actionhelpcontents;
    QAction *actionabout;
    QAction *actioncontexthelp;
    QAction *actionalcoholtool;
    QAction *actionhydrometertool;
    QAction *actiondatabasetool;
    QAction *actionprimer;
    QAction *actionfileprintpreview;
    QAction *actionmashwatertool;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuhelp;
    QMenu *menuoptions;
    QMenu *menu_Tools;
    QMenu *menufile;
    QMenu *menuopenrecent;
    QStatusBar *statusbar;
    QToolBar *maintoolbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 400);
        MainWindow->setIconSize(QSize(22, 22));
        actionfilenew = new QAction(MainWindow);
        actionfilenew->setObjectName(QStringLiteral("actionfilenew"));
        actionfileopen = new QAction(MainWindow);
        actionfileopen->setObjectName(QStringLiteral("actionfileopen"));
        actionfilesave = new QAction(MainWindow);
        actionfilesave->setObjectName(QStringLiteral("actionfilesave"));
        actionfilesaveas = new QAction(MainWindow);
        actionfilesaveas->setObjectName(QStringLiteral("actionfilesaveas"));
        actionfileprint = new QAction(MainWindow);
        actionfileprint->setObjectName(QStringLiteral("actionfileprint"));
        actionfileexport = new QAction(MainWindow);
        actionfileexport->setObjectName(QStringLiteral("actionfileexport"));
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QStringLiteral("actionexit"));
        actiontogglestatusbar = new QAction(MainWindow);
        actiontogglestatusbar->setObjectName(QStringLiteral("actiontogglestatusbar"));
        actiontogglestatusbar->setCheckable(true);
        actionconfigure = new QAction(MainWindow);
        actionconfigure->setObjectName(QStringLiteral("actionconfigure"));
        actionhelpcontents = new QAction(MainWindow);
        actionhelpcontents->setObjectName(QStringLiteral("actionhelpcontents"));
        actionabout = new QAction(MainWindow);
        actionabout->setObjectName(QStringLiteral("actionabout"));
        actioncontexthelp = new QAction(MainWindow);
        actioncontexthelp->setObjectName(QStringLiteral("actioncontexthelp"));
        actionalcoholtool = new QAction(MainWindow);
        actionalcoholtool->setObjectName(QStringLiteral("actionalcoholtool"));
        actionhydrometertool = new QAction(MainWindow);
        actionhydrometertool->setObjectName(QStringLiteral("actionhydrometertool"));
        actiondatabasetool = new QAction(MainWindow);
        actiondatabasetool->setObjectName(QStringLiteral("actiondatabasetool"));
        actionprimer = new QAction(MainWindow);
        actionprimer->setObjectName(QStringLiteral("actionprimer"));
        actionfileprintpreview = new QAction(MainWindow);
        actionfileprintpreview->setObjectName(QStringLiteral("actionfileprintpreview"));
        actionmashwatertool = new QAction(MainWindow);
        actionmashwatertool->setObjectName(QStringLiteral("actionmashwatertool"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 26));
        menuhelp = new QMenu(menubar);
        menuhelp->setObjectName(QStringLiteral("menuhelp"));
        menuoptions = new QMenu(menubar);
        menuoptions->setObjectName(QStringLiteral("menuoptions"));
        menu_Tools = new QMenu(menubar);
        menu_Tools->setObjectName(QStringLiteral("menu_Tools"));
        menufile = new QMenu(menubar);
        menufile->setObjectName(QStringLiteral("menufile"));
        menuopenrecent = new QMenu(menufile);
        menuopenrecent->setObjectName(QStringLiteral("menuopenrecent"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        maintoolbar = new QToolBar(MainWindow);
        maintoolbar->setObjectName(QStringLiteral("maintoolbar"));
        maintoolbar->setOrientation(Qt::Horizontal);
        maintoolbar->setIconSize(QSize(22, 22));
        MainWindow->addToolBar(Qt::TopToolBarArea, maintoolbar);

        menubar->addAction(menufile->menuAction());
        menubar->addAction(menu_Tools->menuAction());
        menubar->addAction(menuoptions->menuAction());
        menubar->addAction(menuhelp->menuAction());
        menuhelp->addAction(actionhelpcontents);
        menuhelp->addAction(actionprimer);
        menuhelp->addAction(actioncontexthelp);
        menuhelp->addSeparator();
        menuhelp->addAction(actionabout);
        menuoptions->addAction(actiontogglestatusbar);
        menuoptions->addSeparator();
        menuoptions->addAction(actionconfigure);
        menu_Tools->addAction(actionalcoholtool);
        menu_Tools->addAction(actionhydrometertool);
        menu_Tools->addAction(actionmashwatertool);
        menu_Tools->addAction(actiondatabasetool);
        menufile->addAction(actionfilenew);
        menufile->addAction(actionfileopen);
        menufile->addAction(menuopenrecent->menuAction());
        menufile->addSeparator();
        menufile->addAction(actionfilesave);
        menufile->addAction(actionfilesaveas);
        menufile->addSeparator();
        menufile->addAction(actionfileexport);
        menufile->addAction(actionfileprintpreview);
        menufile->addAction(actionfileprint);
        menufile->addSeparator();
        menufile->addAction(actionexit);
        maintoolbar->addAction(actionfilenew);
        maintoolbar->addAction(actionfileopen);
        maintoolbar->addAction(actionfilesave);
        maintoolbar->addAction(actionfileprint);
        maintoolbar->addSeparator();
        maintoolbar->addAction(actioncontexthelp);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "QBrew[*]", 0));
        actionfilenew->setText(QApplication::translate("MainWindow", "&New", 0));
#ifndef QT_NO_STATUSTIP
        actionfilenew->setStatusTip(QApplication::translate("MainWindow", "Create a new recipe", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionfilenew->setWhatsThis(QApplication::translate("MainWindow", "Use this command to create a new recipe", 0));
#endif // QT_NO_WHATSTHIS
        actionfilenew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        actionfileopen->setText(QApplication::translate("MainWindow", "&Open", 0));
#ifndef QT_NO_STATUSTIP
        actionfileopen->setStatusTip(QApplication::translate("MainWindow", "Open a recipe", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionfileopen->setWhatsThis(QApplication::translate("MainWindow", "Use this command to open a recipe", 0));
#endif // QT_NO_WHATSTHIS
        actionfileopen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        actionfilesave->setText(QApplication::translate("MainWindow", "&Save", 0));
#ifndef QT_NO_STATUSTIP
        actionfilesave->setStatusTip(QApplication::translate("MainWindow", "Save the recipe", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionfilesave->setWhatsThis(QApplication::translate("MainWindow", "Use this command to save the current recipe", 0));
#endif // QT_NO_WHATSTHIS
        actionfilesave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionfilesaveas->setText(QApplication::translate("MainWindow", "Save &as...", 0));
#ifndef QT_NO_STATUSTIP
        actionfilesaveas->setStatusTip(QApplication::translate("MainWindow", "Save the recipe", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionfilesaveas->setWhatsThis(QApplication::translate("MainWindow", "Save the recipe under a new name", 0));
#endif // QT_NO_WHATSTHIS
        actionfileprint->setText(QApplication::translate("MainWindow", "&Print...", 0));
#ifndef QT_NO_STATUSTIP
        actionfileprint->setStatusTip(QApplication::translate("MainWindow", "Print the recipe", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionfileprint->setWhatsThis(QApplication::translate("MainWindow", "Use this command to print the recipe", 0));
#endif // QT_NO_WHATSTHIS
        actionfileprint->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        actionfileexport->setText(QApplication::translate("MainWindow", "&Export...", 0));
#ifndef QT_NO_STATUSTIP
        actionfileexport->setStatusTip(QApplication::translate("MainWindow", "Export the recipe", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionfileexport->setWhatsThis(QApplication::translate("MainWindow", "Export the recipe to a non-native format", 0));
#endif // QT_NO_WHATSTHIS
        actionexit->setText(QApplication::translate("MainWindow", "&Quit", 0));
#ifndef QT_NO_STATUSTIP
        actionexit->setStatusTip(QApplication::translate("MainWindow", "Quit the application", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionexit->setWhatsThis(QApplication::translate("MainWindow", "Quit the application", 0));
#endif // QT_NO_WHATSTHIS
        actionexit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0));
        actiontogglestatusbar->setText(QApplication::translate("MainWindow", "&Statusbar", 0));
#ifndef QT_NO_STATUSTIP
        actiontogglestatusbar->setStatusTip(QApplication::translate("MainWindow", "Toggle the statusbar", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actiontogglestatusbar->setWhatsThis(QApplication::translate("MainWindow", "Enable or disable the Statusbar", 0));
#endif // QT_NO_WHATSTHIS
        actionconfigure->setText(QApplication::translate("MainWindow", "&Configure...", 0));
#ifndef QT_NO_STATUSTIP
        actionconfigure->setStatusTip(QApplication::translate("MainWindow", "Display the configuration dialog", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionconfigure->setWhatsThis(QApplication::translate("MainWindow", "Display the configuration dialog", 0));
#endif // QT_NO_WHATSTHIS
        actionhelpcontents->setText(QApplication::translate("MainWindow", "&Contents", 0));
#ifndef QT_NO_STATUSTIP
        actionhelpcontents->setStatusTip(QApplication::translate("MainWindow", "Display the application handbook", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionhelpcontents->setWhatsThis(QApplication::translate("MainWindow", "Display the application handbook", 0));
#endif // QT_NO_WHATSTHIS
        actionhelpcontents->setShortcut(QApplication::translate("MainWindow", "F1", 0));
        actionabout->setText(QApplication::translate("MainWindow", "&About...", 0));
#ifndef QT_NO_STATUSTIP
        actionabout->setStatusTip(QApplication::translate("MainWindow", "Application information", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionabout->setWhatsThis(QApplication::translate("MainWindow", "Display application copyright and information", 0));
#endif // QT_NO_WHATSTHIS
        actioncontexthelp->setText(QApplication::translate("MainWindow", "&What's This?", 0));
#ifndef QT_NO_STATUSTIP
        actioncontexthelp->setStatusTip(QApplication::translate("MainWindow", "Context help", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actioncontexthelp->setWhatsThis(QApplication::translate("MainWindow", "Display context sensitive help cursor", 0));
#endif // QT_NO_WHATSTHIS
        actioncontexthelp->setShortcut(QApplication::translate("MainWindow", "Shift+F1", 0));
        actionalcoholtool->setText(QApplication::translate("MainWindow", "&Alcohol % Calculator", 0));
#ifndef QT_NO_STATUSTIP
        actionalcoholtool->setStatusTip(QApplication::translate("MainWindow", "Alcohol percentage calculator", 0));
#endif // QT_NO_STATUSTIP
        actionhydrometertool->setText(QApplication::translate("MainWindow", "&Hydrometer Correction...", 0));
#ifndef QT_NO_STATUSTIP
        actionhydrometertool->setStatusTip(QApplication::translate("MainWindow", "Hydrometer correction utility", 0));
#endif // QT_NO_STATUSTIP
        actiondatabasetool->setText(QApplication::translate("MainWindow", "&Database Editor", 0));
#ifndef QT_NO_STATUSTIP
        actiondatabasetool->setStatusTip(QApplication::translate("MainWindow", "Database editor", 0));
#endif // QT_NO_STATUSTIP
        actionprimer->setText(QApplication::translate("MainWindow", "Primer", 0));
#ifndef QT_NO_STATUSTIP
        actionprimer->setStatusTip(QApplication::translate("MainWindow", "Display a brewing primer", 0));
#endif // QT_NO_STATUSTIP
        actionfileprintpreview->setText(QApplication::translate("MainWindow", "Print Pre&view...", 0));
#ifndef QT_NO_STATUSTIP
        actionfileprintpreview->setStatusTip(QApplication::translate("MainWindow", "Preview the printed recipe", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionfileprintpreview->setWhatsThis(QApplication::translate("MainWindow", "Use this command to preview printing the recipe", 0));
#endif // QT_NO_WHATSTHIS
        actionmashwatertool->setText(QApplication::translate("MainWindow", "&Mash Schedule Calculation...", 0));
#ifndef QT_NO_STATUSTIP
        actionmashwatertool->setStatusTip(QApplication::translate("MainWindow", "Mash volume and temperature calculation utility", 0));
#endif // QT_NO_STATUSTIP
        menuhelp->setTitle(QApplication::translate("MainWindow", "&Help", 0));
        menuoptions->setTitle(QApplication::translate("MainWindow", "&Options", 0));
        menu_Tools->setTitle(QApplication::translate("MainWindow", "&Tools", 0));
        menufile->setTitle(QApplication::translate("MainWindow", "&File", 0));
        menuopenrecent->setTitle(QApplication::translate("MainWindow", "Open &Recent", 0));
        maintoolbar->setWindowTitle(QApplication::translate("MainWindow", "Main Toolbar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
