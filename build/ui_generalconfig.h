/********************************************************************************
** Form generated from reading UI file 'generalconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALCONFIG_H
#define UI_GENERALCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeneralConfig
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *appearancebox;
    QFormLayout *formLayout;
    QLabel *lookfeellabel;
    QComboBox *lookfeel;
    QCheckBox *showsplash;
    QLabel *showsplashlabel;
    QGroupBox *filebox;
    QFormLayout *formLayout_2;
    QLabel *recentlabel;
    QSpinBox *recentnum;
    QSpinBox *saveinterval;
    QLabel *autobackuplabel;
    QCheckBox *autobackup;
    QLabel *loadlastlabel;
    QCheckBox *loadlast;
    QCheckBox *autosave;
    QLabel *autosavelabel;
    QLabel *saveintervallabel;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *GeneralConfig)
    {
        if (GeneralConfig->objectName().isEmpty())
            GeneralConfig->setObjectName(QStringLiteral("GeneralConfig"));
        GeneralConfig->resize(282, 340);
        vboxLayout = new QVBoxLayout(GeneralConfig);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        appearancebox = new QGroupBox(GeneralConfig);
        appearancebox->setObjectName(QStringLiteral("appearancebox"));
        appearancebox->setFlat(false);
        appearancebox->setCheckable(false);
        formLayout = new QFormLayout(appearancebox);
#ifndef Q_OS_MAC
        formLayout->setContentsMargins(9, 9, 9, 9);
#endif
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(6);
        lookfeellabel = new QLabel(appearancebox);
        lookfeellabel->setObjectName(QStringLiteral("lookfeellabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lookfeellabel);

        lookfeel = new QComboBox(appearancebox);
        lookfeel->setObjectName(QStringLiteral("lookfeel"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lookfeel);

        showsplash = new QCheckBox(appearancebox);
        showsplash->setObjectName(QStringLiteral("showsplash"));

        formLayout->setWidget(1, QFormLayout::FieldRole, showsplash);

        showsplashlabel = new QLabel(appearancebox);
        showsplashlabel->setObjectName(QStringLiteral("showsplashlabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, showsplashlabel);


        vboxLayout->addWidget(appearancebox);

        filebox = new QGroupBox(GeneralConfig);
        filebox->setObjectName(QStringLiteral("filebox"));
        formLayout_2 = new QFormLayout(filebox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        recentlabel = new QLabel(filebox);
        recentlabel->setObjectName(QStringLiteral("recentlabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, recentlabel);

        recentnum = new QSpinBox(filebox);
        recentnum->setObjectName(QStringLiteral("recentnum"));
        recentnum->setMaximum(50);
        recentnum->setValue(5);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, recentnum);

        saveinterval = new QSpinBox(filebox);
        saveinterval->setObjectName(QStringLiteral("saveinterval"));
        saveinterval->setMaximum(30);
        saveinterval->setSingleStep(5);
        saveinterval->setValue(5);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, saveinterval);

        autobackuplabel = new QLabel(filebox);
        autobackuplabel->setObjectName(QStringLiteral("autobackuplabel"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, autobackuplabel);

        autobackup = new QCheckBox(filebox);
        autobackup->setObjectName(QStringLiteral("autobackup"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, autobackup);

        loadlastlabel = new QLabel(filebox);
        loadlastlabel->setObjectName(QStringLiteral("loadlastlabel"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, loadlastlabel);

        loadlast = new QCheckBox(filebox);
        loadlast->setObjectName(QStringLiteral("loadlast"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, loadlast);

        autosave = new QCheckBox(filebox);
        autosave->setObjectName(QStringLiteral("autosave"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, autosave);

        autosavelabel = new QLabel(filebox);
        autosavelabel->setObjectName(QStringLiteral("autosavelabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, autosavelabel);

        saveintervallabel = new QLabel(filebox);
        saveintervallabel->setObjectName(QStringLiteral("saveintervallabel"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, saveintervallabel);


        vboxLayout->addWidget(filebox);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

#ifndef QT_NO_SHORTCUT
        lookfeellabel->setBuddy(lookfeel);
        showsplashlabel->setBuddy(showsplash);
        recentlabel->setBuddy(recentnum);
        autobackuplabel->setBuddy(autobackup);
        loadlastlabel->setBuddy(loadlast);
        autosavelabel->setBuddy(autosave);
        saveintervallabel->setBuddy(saveinterval);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lookfeel, showsplash);
        QWidget::setTabOrder(showsplash, recentnum);
        QWidget::setTabOrder(recentnum, autosave);
        QWidget::setTabOrder(autosave, saveinterval);
        QWidget::setTabOrder(saveinterval, autobackup);
        QWidget::setTabOrder(autobackup, loadlast);

        retranslateUi(GeneralConfig);

        QMetaObject::connectSlotsByName(GeneralConfig);
    } // setupUi

    void retranslateUi(QWidget *GeneralConfig)
    {
        GeneralConfig->setWindowTitle(QApplication::translate("GeneralConfig", "Form", 0));
        appearancebox->setTitle(QApplication::translate("GeneralConfig", "Appearance Options", 0));
        lookfeellabel->setText(QApplication::translate("GeneralConfig", "&Look and feel", 0));
#ifndef QT_NO_WHATSTHIS
        lookfeel->setWhatsThis(QApplication::translate("GeneralConfig", "<p>You may select a different look and feel for the application. This will affect the appearance of the application's controls and widgets.</p>", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        showsplash->setWhatsThis(QApplication::translate("GeneralConfig", "<p>Select this option to show the splash screen when the program starts.</p>", 0));
#endif // QT_NO_WHATSTHIS
        showsplash->setText(QString());
        showsplashlabel->setText(QApplication::translate("GeneralConfig", "&Show splash screen", 0));
        filebox->setTitle(QApplication::translate("GeneralConfig", "File Options", 0));
        recentlabel->setText(QApplication::translate("GeneralConfig", "Number of &recent files", 0));
#ifndef QT_NO_WHATSTHIS
        recentnum->setWhatsThis(QApplication::translate("GeneralConfig", "<p>Use this to set the number of files displayed in the <b>Open Recent...</b> menu</p>", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        saveinterval->setWhatsThis(QApplication::translate("GeneralConfig", "<p>This field will allow you to select the Autosave interval.</p>", 0));
#endif // QT_NO_WHATSTHIS
        saveinterval->setSuffix(QApplication::translate("GeneralConfig", " Minutes", 0));
        autobackuplabel->setText(QApplication::translate("GeneralConfig", "Enable auto&backup", 0));
#ifndef QT_NO_WHATSTHIS
        autobackup->setWhatsThis(QApplication::translate("GeneralConfig", "<p>Selecting this will cause the program to automatically backup every file that you open and modify.</p>", 0));
#endif // QT_NO_WHATSTHIS
        loadlastlabel->setText(QApplication::translate("GeneralConfig", "Load last &file", 0));
#ifndef QT_NO_WHATSTHIS
        loadlast->setWhatsThis(QApplication::translate("GeneralConfig", "<p>Select this option to automatically load the last file used in this program.</p>", 0));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        autosave->setWhatsThis(QApplication::translate("GeneralConfig", "<p>Enables autosaving of files. If this is checked, files will be automatically saved at the selected interval.</p>", 0));
#endif // QT_NO_WHATSTHIS
        autosavelabel->setText(QApplication::translate("GeneralConfig", "Enable &autosave", 0));
        saveintervallabel->setText(QApplication::translate("GeneralConfig", "Autosave &interval", 0));
    } // retranslateUi

};

namespace Ui {
    class GeneralConfig: public Ui_GeneralConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALCONFIG_H
