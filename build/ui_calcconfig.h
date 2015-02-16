/********************************************************************************
** Form generated from reading UI file 'calcconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCCONFIG_H
#define UI_CALCCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalcConfig
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *calcbox;
    QFormLayout *formLayout;
    QLabel *unitslabel;
    QComboBox *units;
    QLabel *efficiencylabel;
    QDoubleSpinBox *efficiency;
    QLabel *steeplabel;
    QDoubleSpinBox *steepyield;
    QCheckBox *morey;
    QLabel *moreylabel;
    QLabel *tinsethlabel;
    QCheckBox *tinseth;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *CalcConfig)
    {
        if (CalcConfig->objectName().isEmpty())
            CalcConfig->setObjectName(QStringLiteral("CalcConfig"));
        CalcConfig->resize(345, 208);
        vboxLayout = new QVBoxLayout(CalcConfig);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        calcbox = new QGroupBox(CalcConfig);
        calcbox->setObjectName(QStringLiteral("calcbox"));
        formLayout = new QFormLayout(calcbox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        unitslabel = new QLabel(calcbox);
        unitslabel->setObjectName(QStringLiteral("unitslabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, unitslabel);

        units = new QComboBox(calcbox);
        units->setObjectName(QStringLiteral("units"));
        units->setDuplicatesEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, units);

        efficiencylabel = new QLabel(calcbox);
        efficiencylabel->setObjectName(QStringLiteral("efficiencylabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, efficiencylabel);

        efficiency = new QDoubleSpinBox(calcbox);
        efficiency->setObjectName(QStringLiteral("efficiency"));
        efficiency->setAccelerated(true);
        efficiency->setMaximum(1);
        efficiency->setSingleStep(0.01);

        formLayout->setWidget(1, QFormLayout::FieldRole, efficiency);

        steeplabel = new QLabel(calcbox);
        steeplabel->setObjectName(QStringLiteral("steeplabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, steeplabel);

        steepyield = new QDoubleSpinBox(calcbox);
        steepyield->setObjectName(QStringLiteral("steepyield"));
        steepyield->setAccelerated(true);
        steepyield->setMaximum(1);
        steepyield->setSingleStep(0.01);

        formLayout->setWidget(2, QFormLayout::FieldRole, steepyield);

        morey = new QCheckBox(calcbox);
        morey->setObjectName(QStringLiteral("morey"));

        formLayout->setWidget(6, QFormLayout::FieldRole, morey);

        moreylabel = new QLabel(calcbox);
        moreylabel->setObjectName(QStringLiteral("moreylabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, moreylabel);

        tinsethlabel = new QLabel(calcbox);
        tinsethlabel->setObjectName(QStringLiteral("tinsethlabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, tinsethlabel);

        tinseth = new QCheckBox(calcbox);
        tinseth->setObjectName(QStringLiteral("tinseth"));

        formLayout->setWidget(4, QFormLayout::FieldRole, tinseth);


        vboxLayout->addWidget(calcbox);

        spacerItem = new QSpacerItem(337, 81, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

#ifndef QT_NO_SHORTCUT
        unitslabel->setBuddy(units);
        efficiencylabel->setBuddy(efficiency);
        steeplabel->setBuddy(steepyield);
        moreylabel->setBuddy(morey);
        tinsethlabel->setBuddy(tinseth);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(units, efficiency);
        QWidget::setTabOrder(efficiency, steepyield);

        retranslateUi(CalcConfig);

        QMetaObject::connectSlotsByName(CalcConfig);
    } // setupUi

    void retranslateUi(QWidget *CalcConfig)
    {
        CalcConfig->setWindowTitle(QApplication::translate("CalcConfig", "Calc Configuration", 0));
        calcbox->setTitle(QApplication::translate("CalcConfig", "Calculation Options", 0));
        unitslabel->setText(QApplication::translate("CalcConfig", "Measurement &units", 0));
#ifndef QT_NO_WHATSTHIS
        units->setWhatsThis(QApplication::translate("CalcConfig", "<p>Select the units of measurement you wish to use. Your choices are \"<b>Metric</b>\" and \"<b>US</b>\".</p>", 0));
#endif // QT_NO_WHATSTHIS
        efficiencylabel->setText(QApplication::translate("CalcConfig", "Mash &efficiency", 0));
#ifndef QT_NO_WHATSTHIS
        efficiency->setWhatsThis(QApplication::translate("CalcConfig", "<p>Enter the mash efficiency for your brew house</p>", 0));
#endif // QT_NO_WHATSTHIS
        steeplabel->setText(QApplication::translate("CalcConfig", "Steep &yield", 0));
#ifndef QT_NO_WHATSTHIS
        morey->setWhatsThis(QApplication::translate("CalcConfig", "<p>There are two color calculations that QBrew can use.  The default method uses the <b>Daniels</b> formula. By selecting this check box, you can change the calculation to use the <b>Morey</b> formula.</p>", 0));
#endif // QT_NO_WHATSTHIS
        morey->setShortcut(QApplication::translate("CalcConfig", "Alt+M", 0));
        moreylabel->setText(QApplication::translate("CalcConfig", "Use &Morey color calculation", 0));
        tinsethlabel->setText(QApplication::translate("CalcConfig", "Use &Tinseth bitterness calculation", 0));
#ifndef QT_NO_WHATSTHIS
        tinseth->setWhatsThis(QApplication::translate("CalcConfig", "<p>There are two bitterness calculations that QBrew can use.  The default method is to use the <b>Rager</b> formula. By selecting this check box, you can change the calculation to use the <b>Tinseth</b> formula.</p>", 0));
#endif // QT_NO_WHATSTHIS
        tinseth->setShortcut(QApplication::translate("CalcConfig", "Alt+T", 0));
    } // retranslateUi

};

namespace Ui {
    class CalcConfig: public Ui_CalcConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCCONFIG_H
