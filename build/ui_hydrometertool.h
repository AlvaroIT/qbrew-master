/********************************************************************************
** Form generated from reading UI file 'hydrometertool.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HYDROMETERTOOL_H
#define UI_HYDROMETERTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HydrometerTool
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *hydrometerbox;
    QFormLayout *formLayout;
    QLabel *samplelabel;
    QDoubleSpinBox *sample;
    QLabel *calibratedlabel;
    QDoubleSpinBox *calibrated;
    QLabel *readinglabel;
    QDoubleSpinBox *reading;
    QSpacerItem *spacerItem;
    QLabel *correctedlabel;
    QLabel *corrected;
    QDialogButtonBox *buttonbox;

    void setupUi(QDialog *HydrometerTool)
    {
        if (HydrometerTool->objectName().isEmpty())
            HydrometerTool->setObjectName(QStringLiteral("HydrometerTool"));
        HydrometerTool->resize(268, 231);
        vboxLayout = new QVBoxLayout(HydrometerTool);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hydrometerbox = new QGroupBox(HydrometerTool);
        hydrometerbox->setObjectName(QStringLiteral("hydrometerbox"));
        formLayout = new QFormLayout(hydrometerbox);
#ifndef Q_OS_MAC
        formLayout->setContentsMargins(9, 9, 9, 9);
#endif
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(6);
        samplelabel = new QLabel(hydrometerbox);
        samplelabel->setObjectName(QStringLiteral("samplelabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, samplelabel);

        sample = new QDoubleSpinBox(hydrometerbox);
        sample->setObjectName(QStringLiteral("sample"));
        sample->setAccelerated(true);
        sample->setDecimals(1);
        sample->setMinimum(32);
        sample->setMaximum(212);
        sample->setSingleStep(0.2);
        sample->setValue(60);

        formLayout->setWidget(0, QFormLayout::FieldRole, sample);

        calibratedlabel = new QLabel(hydrometerbox);
        calibratedlabel->setObjectName(QStringLiteral("calibratedlabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, calibratedlabel);

        calibrated = new QDoubleSpinBox(hydrometerbox);
        calibrated->setObjectName(QStringLiteral("calibrated"));
        calibrated->setAccelerated(true);
        calibrated->setDecimals(1);
        calibrated->setMinimum(32);
        calibrated->setMaximum(212);
        calibrated->setSingleStep(0.2);
        calibrated->setValue(60);

        formLayout->setWidget(1, QFormLayout::FieldRole, calibrated);

        readinglabel = new QLabel(hydrometerbox);
        readinglabel->setObjectName(QStringLiteral("readinglabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, readinglabel);

        reading = new QDoubleSpinBox(hydrometerbox);
        reading->setObjectName(QStringLiteral("reading"));
        reading->setAccelerated(true);
        reading->setDecimals(3);
        reading->setMinimum(0.85);
        reading->setMaximum(1.2);
        reading->setSingleStep(0.001);
        reading->setValue(1);

        formLayout->setWidget(2, QFormLayout::FieldRole, reading);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::LabelRole, spacerItem);

        correctedlabel = new QLabel(hydrometerbox);
        correctedlabel->setObjectName(QStringLiteral("correctedlabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, correctedlabel);

        corrected = new QLabel(hydrometerbox);
        corrected->setObjectName(QStringLiteral("corrected"));

        formLayout->setWidget(4, QFormLayout::FieldRole, corrected);


        vboxLayout->addWidget(hydrometerbox);

        buttonbox = new QDialogButtonBox(HydrometerTool);
        buttonbox->setObjectName(QStringLiteral("buttonbox"));
        buttonbox->setOrientation(Qt::Horizontal);
        buttonbox->setStandardButtons(QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonbox);

#ifndef QT_NO_SHORTCUT
        samplelabel->setBuddy(sample);
        calibratedlabel->setBuddy(calibrated);
        readinglabel->setBuddy(reading);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(sample, calibrated);
        QWidget::setTabOrder(calibrated, reading);

        retranslateUi(HydrometerTool);
        QObject::connect(buttonbox, SIGNAL(accepted()), HydrometerTool, SLOT(close()));

        QMetaObject::connectSlotsByName(HydrometerTool);
    } // setupUi

    void retranslateUi(QDialog *HydrometerTool)
    {
        HydrometerTool->setWindowTitle(QApplication::translate("HydrometerTool", "Hydrometer Tool", 0));
        hydrometerbox->setTitle(QApplication::translate("HydrometerTool", "Hydrometer", 0));
        samplelabel->setText(QApplication::translate("HydrometerTool", "&Sample temperature", 0));
#ifndef QT_NO_WHATSTHIS
        sample->setWhatsThis(QApplication::translate("HydrometerTool", "Enter the temperature of your sample", 0));
#endif // QT_NO_WHATSTHIS
        calibratedlabel->setText(QApplication::translate("HydrometerTool", "&Calibrated temperature", 0));
#ifndef QT_NO_WHATSTHIS
        calibrated->setWhatsThis(QApplication::translate("HydrometerTool", "Enter the temperature your hydrometer is calibrated for", 0));
#endif // QT_NO_WHATSTHIS
        readinglabel->setText(QApplication::translate("HydrometerTool", "&Hydrometer reading", 0));
#ifndef QT_NO_WHATSTHIS
        reading->setWhatsThis(QApplication::translate("HydrometerTool", "Enter the reading obtained from your hydrometer", 0));
#endif // QT_NO_WHATSTHIS
        correctedlabel->setText(QApplication::translate("HydrometerTool", "Corrected reading", 0));
        corrected->setText(QApplication::translate("HydrometerTool", "1.000", 0));
    } // retranslateUi

};

namespace Ui {
    class HydrometerTool: public Ui_HydrometerTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HYDROMETERTOOL_H
