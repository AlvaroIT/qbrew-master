/********************************************************************************
** Form generated from reading UI file 'databasetool.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASETOOL_H
#define UI_DATABASETOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DatabaseTool
{
public:
    QAction *actionsave;
    QAction *actionquit;
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QTabWidget *ingredients;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DatabaseTool)
    {
        if (DatabaseTool->objectName().isEmpty())
            DatabaseTool->setObjectName(QStringLiteral("DatabaseTool"));
        DatabaseTool->resize(600, 400);
        actionsave = new QAction(DatabaseTool);
        actionsave->setObjectName(QStringLiteral("actionsave"));
        actionquit = new QAction(DatabaseTool);
        actionquit->setObjectName(QStringLiteral("actionquit"));
        centralwidget = new QWidget(DatabaseTool);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        ingredients = new QTabWidget(centralwidget);
        ingredients->setObjectName(QStringLiteral("ingredients"));
        ingredients->setMinimumSize(QSize(0, 128));

        vboxLayout->addWidget(ingredients);

        DatabaseTool->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DatabaseTool);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        DatabaseTool->setMenuBar(menubar);
        statusbar = new QStatusBar(DatabaseTool);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DatabaseTool->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionsave);
        menuFile->addSeparator();
        menuFile->addAction(actionquit);

        retranslateUi(DatabaseTool);

        QMetaObject::connectSlotsByName(DatabaseTool);
    } // setupUi

    void retranslateUi(QMainWindow *DatabaseTool)
    {
        DatabaseTool->setWindowTitle(QApplication::translate("DatabaseTool", "Database Tool", 0));
        actionsave->setText(QApplication::translate("DatabaseTool", "Save", 0));
#ifndef QT_NO_STATUSTIP
        actionsave->setStatusTip(QApplication::translate("DatabaseTool", "Save the database", 0));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionsave->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        actionsave->setShortcut(QApplication::translate("DatabaseTool", "Ctrl+S", 0));
        actionquit->setText(QApplication::translate("DatabaseTool", "Quit", 0));
#ifndef QT_NO_STATUSTIP
        actionquit->setStatusTip(QApplication::translate("DatabaseTool", "Close the database tool", 0));
#endif // QT_NO_STATUSTIP
        actionquit->setShortcut(QApplication::translate("DatabaseTool", "Ctrl+Q", 0));
        menuFile->setTitle(QApplication::translate("DatabaseTool", "&File", 0));
    } // retranslateUi

};

namespace Ui {
    class DatabaseTool: public Ui_DatabaseTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASETOOL_H
