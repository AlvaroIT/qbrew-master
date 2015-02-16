/********************************************************************************
** Form generated from reading UI file 'mashwatertool.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MASHWATERTOOL_H
#define UI_MASHWATERTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MashWaterDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *strikeWaterGroupBox;
    QFormLayout *formLayout;
    QLabel *strikeWaterVolumeLabel;
    QDoubleSpinBox *strikeWaterVolumeDoubleSpinBox;
    QLabel *grainMassLabel;
    QDoubleSpinBox *grainMassDoubleSpinBox;
    QLabel *targetTempLabel;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *targetStrikeTempSpinBox;
    QSlider *targetStrikeTempSlider;
    QLabel *grainTempLabel;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *grainTempSpinBox;
    QSlider *grainTempSlider;
    QLabel *ratioLabelLabel;
    QLabel *ratioLabel;
    QLabel *strikeWaterTempLabelLabel;
    QLabel *strikeWaterTempLabel;
    QGroupBox *secondStepGroupBox;
    QFormLayout *formLayout_2;
    QLabel *step2TargetTempLabel;
    QHBoxLayout *horizontalLayout_4;
    QSpinBox *step2TargetTempSpinBox;
    QSlider *step2TargetTempSlider;
    QLabel *step2WaterTempLabel;
    QHBoxLayout *horizontalLayout_5;
    QSpinBox *step2WaterTempSpinBox;
    QSlider *step2WaterTempSlider;
    QLabel *step2WaterVolumeLabel;
    QLabel *step2WaterVolumeLabeLabel;
    QGroupBox *thirdStepGroupBox;
    QFormLayout *formLayout_3;
    QLabel *step3TargetTempLabel;
    QHBoxLayout *horizontalLayout_7;
    QSpinBox *step3TargetTempSpinBox;
    QSlider *step3TargetTempSlider;
    QLabel *step3WaterTempLabel;
    QHBoxLayout *horizontalLayout_6;
    QSpinBox *step3WaterTempSpinBox;
    QSlider *step3WaterTempSlider;
    QLabel *step3WaterVolumeLabelLabel;
    QLabel *step3WaterVolumeLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *moreButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MashWaterDialog)
    {
        if (MashWaterDialog->objectName().isEmpty())
            MashWaterDialog->setObjectName(QStringLiteral("MashWaterDialog"));
        MashWaterDialog->resize(359, 537);
        verticalLayout = new QVBoxLayout(MashWaterDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        strikeWaterGroupBox = new QGroupBox(MashWaterDialog);
        strikeWaterGroupBox->setObjectName(QStringLiteral("strikeWaterGroupBox"));
        formLayout = new QFormLayout(strikeWaterGroupBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        strikeWaterVolumeLabel = new QLabel(strikeWaterGroupBox);
        strikeWaterVolumeLabel->setObjectName(QStringLiteral("strikeWaterVolumeLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, strikeWaterVolumeLabel);

        strikeWaterVolumeDoubleSpinBox = new QDoubleSpinBox(strikeWaterGroupBox);
        strikeWaterVolumeDoubleSpinBox->setObjectName(QStringLiteral("strikeWaterVolumeDoubleSpinBox"));
        strikeWaterVolumeDoubleSpinBox->setSizeIncrement(QSize(0, 0));
        strikeWaterVolumeDoubleSpinBox->setMinimum(0.5);
        strikeWaterVolumeDoubleSpinBox->setMaximum(80);
        strikeWaterVolumeDoubleSpinBox->setSingleStep(0.25);
        strikeWaterVolumeDoubleSpinBox->setValue(20);

        formLayout->setWidget(0, QFormLayout::FieldRole, strikeWaterVolumeDoubleSpinBox);

        grainMassLabel = new QLabel(strikeWaterGroupBox);
        grainMassLabel->setObjectName(QStringLiteral("grainMassLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, grainMassLabel);

        grainMassDoubleSpinBox = new QDoubleSpinBox(strikeWaterGroupBox);
        grainMassDoubleSpinBox->setObjectName(QStringLiteral("grainMassDoubleSpinBox"));
        grainMassDoubleSpinBox->setMinimum(0.25);
        grainMassDoubleSpinBox->setMaximum(60);
        grainMassDoubleSpinBox->setSingleStep(0.1);
        grainMassDoubleSpinBox->setValue(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, grainMassDoubleSpinBox);

        targetTempLabel = new QLabel(strikeWaterGroupBox);
        targetTempLabel->setObjectName(QStringLiteral("targetTempLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, targetTempLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        targetStrikeTempSpinBox = new QSpinBox(strikeWaterGroupBox);
        targetStrikeTempSpinBox->setObjectName(QStringLiteral("targetStrikeTempSpinBox"));
        targetStrikeTempSpinBox->setMinimum(80);
        targetStrikeTempSpinBox->setMaximum(180);
        targetStrikeTempSpinBox->setValue(153);

        horizontalLayout_2->addWidget(targetStrikeTempSpinBox);

        targetStrikeTempSlider = new QSlider(strikeWaterGroupBox);
        targetStrikeTempSlider->setObjectName(QStringLiteral("targetStrikeTempSlider"));
        targetStrikeTempSlider->setMinimumSize(QSize(100, 0));
        targetStrikeTempSlider->setMinimum(80);
        targetStrikeTempSlider->setMaximum(180);
        targetStrikeTempSlider->setValue(153);
        targetStrikeTempSlider->setOrientation(Qt::Horizontal);
        targetStrikeTempSlider->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_2->addWidget(targetStrikeTempSlider);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_2);

        grainTempLabel = new QLabel(strikeWaterGroupBox);
        grainTempLabel->setObjectName(QStringLiteral("grainTempLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, grainTempLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        grainTempSpinBox = new QSpinBox(strikeWaterGroupBox);
        grainTempSpinBox->setObjectName(QStringLiteral("grainTempSpinBox"));
        grainTempSpinBox->setMinimum(32);
        grainTempSpinBox->setMaximum(100);
        grainTempSpinBox->setValue(70);

        horizontalLayout_3->addWidget(grainTempSpinBox);

        grainTempSlider = new QSlider(strikeWaterGroupBox);
        grainTempSlider->setObjectName(QStringLiteral("grainTempSlider"));
        grainTempSlider->setMinimumSize(QSize(100, 0));
        grainTempSlider->setMinimum(30);
        grainTempSlider->setMaximum(100);
        grainTempSlider->setValue(70);
        grainTempSlider->setOrientation(Qt::Horizontal);
        grainTempSlider->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_3->addWidget(grainTempSlider);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);

        ratioLabelLabel = new QLabel(strikeWaterGroupBox);
        ratioLabelLabel->setObjectName(QStringLiteral("ratioLabelLabel"));
        ratioLabelLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, ratioLabelLabel);

        ratioLabel = new QLabel(strikeWaterGroupBox);
        ratioLabel->setObjectName(QStringLiteral("ratioLabel"));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        ratioLabel->setFont(font);
        ratioLabel->setFrameShape(QFrame::NoFrame);

        formLayout->setWidget(4, QFormLayout::FieldRole, ratioLabel);

        strikeWaterTempLabelLabel = new QLabel(strikeWaterGroupBox);
        strikeWaterTempLabelLabel->setObjectName(QStringLiteral("strikeWaterTempLabelLabel"));
        strikeWaterTempLabelLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, strikeWaterTempLabelLabel);

        strikeWaterTempLabel = new QLabel(strikeWaterGroupBox);
        strikeWaterTempLabel->setObjectName(QStringLiteral("strikeWaterTempLabel"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setWeight(50);
        strikeWaterTempLabel->setFont(font1);
        strikeWaterTempLabel->setFrameShape(QFrame::NoFrame);
        strikeWaterTempLabel->setFrameShadow(QFrame::Plain);
        strikeWaterTempLabel->setLineWidth(2);
        strikeWaterTempLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        strikeWaterTempLabel->setMargin(1);

        formLayout->setWidget(5, QFormLayout::FieldRole, strikeWaterTempLabel);


        verticalLayout->addWidget(strikeWaterGroupBox);

        secondStepGroupBox = new QGroupBox(MashWaterDialog);
        secondStepGroupBox->setObjectName(QStringLiteral("secondStepGroupBox"));
        formLayout_2 = new QFormLayout(secondStepGroupBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        step2TargetTempLabel = new QLabel(secondStepGroupBox);
        step2TargetTempLabel->setObjectName(QStringLiteral("step2TargetTempLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, step2TargetTempLabel);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        step2TargetTempSpinBox = new QSpinBox(secondStepGroupBox);
        step2TargetTempSpinBox->setObjectName(QStringLiteral("step2TargetTempSpinBox"));
        step2TargetTempSpinBox->setMinimum(100);
        step2TargetTempSpinBox->setMaximum(180);
        step2TargetTempSpinBox->setValue(140);

        horizontalLayout_4->addWidget(step2TargetTempSpinBox);

        step2TargetTempSlider = new QSlider(secondStepGroupBox);
        step2TargetTempSlider->setObjectName(QStringLiteral("step2TargetTempSlider"));
        step2TargetTempSlider->setMinimumSize(QSize(80, 0));
        step2TargetTempSlider->setMinimum(100);
        step2TargetTempSlider->setMaximum(180);
        step2TargetTempSlider->setValue(140);
        step2TargetTempSlider->setOrientation(Qt::Horizontal);
        step2TargetTempSlider->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_4->addWidget(step2TargetTempSlider);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, horizontalLayout_4);

        step2WaterTempLabel = new QLabel(secondStepGroupBox);
        step2WaterTempLabel->setObjectName(QStringLiteral("step2WaterTempLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, step2WaterTempLabel);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        step2WaterTempSpinBox = new QSpinBox(secondStepGroupBox);
        step2WaterTempSpinBox->setObjectName(QStringLiteral("step2WaterTempSpinBox"));
        step2WaterTempSpinBox->setMinimum(140);
        step2WaterTempSpinBox->setMaximum(212);
        step2WaterTempSpinBox->setValue(210);

        horizontalLayout_5->addWidget(step2WaterTempSpinBox);

        step2WaterTempSlider = new QSlider(secondStepGroupBox);
        step2WaterTempSlider->setObjectName(QStringLiteral("step2WaterTempSlider"));
        step2WaterTempSlider->setMinimumSize(QSize(80, 0));
        step2WaterTempSlider->setMinimum(140);
        step2WaterTempSlider->setMaximum(212);
        step2WaterTempSlider->setValue(210);
        step2WaterTempSlider->setOrientation(Qt::Horizontal);
        step2WaterTempSlider->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_5->addWidget(step2WaterTempSlider);


        formLayout_2->setLayout(1, QFormLayout::FieldRole, horizontalLayout_5);

        step2WaterVolumeLabel = new QLabel(secondStepGroupBox);
        step2WaterVolumeLabel->setObjectName(QStringLiteral("step2WaterVolumeLabel"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, step2WaterVolumeLabel);

        step2WaterVolumeLabeLabel = new QLabel(secondStepGroupBox);
        step2WaterVolumeLabeLabel->setObjectName(QStringLiteral("step2WaterVolumeLabeLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, step2WaterVolumeLabeLabel);


        verticalLayout->addWidget(secondStepGroupBox);

        thirdStepGroupBox = new QGroupBox(MashWaterDialog);
        thirdStepGroupBox->setObjectName(QStringLiteral("thirdStepGroupBox"));
        formLayout_3 = new QFormLayout(thirdStepGroupBox);
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        step3TargetTempLabel = new QLabel(thirdStepGroupBox);
        step3TargetTempLabel->setObjectName(QStringLiteral("step3TargetTempLabel"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, step3TargetTempLabel);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        step3TargetTempSpinBox = new QSpinBox(thirdStepGroupBox);
        step3TargetTempSpinBox->setObjectName(QStringLiteral("step3TargetTempSpinBox"));
        step3TargetTempSpinBox->setMinimum(120);
        step3TargetTempSpinBox->setMaximum(200);
        step3TargetTempSpinBox->setValue(158);

        horizontalLayout_7->addWidget(step3TargetTempSpinBox);

        step3TargetTempSlider = new QSlider(thirdStepGroupBox);
        step3TargetTempSlider->setObjectName(QStringLiteral("step3TargetTempSlider"));
        step3TargetTempSlider->setMinimumSize(QSize(80, 0));
        step3TargetTempSlider->setMinimum(120);
        step3TargetTempSlider->setMaximum(200);
        step3TargetTempSlider->setValue(158);
        step3TargetTempSlider->setOrientation(Qt::Horizontal);
        step3TargetTempSlider->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_7->addWidget(step3TargetTempSlider);


        formLayout_3->setLayout(0, QFormLayout::FieldRole, horizontalLayout_7);

        step3WaterTempLabel = new QLabel(thirdStepGroupBox);
        step3WaterTempLabel->setObjectName(QStringLiteral("step3WaterTempLabel"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, step3WaterTempLabel);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        step3WaterTempSpinBox = new QSpinBox(thirdStepGroupBox);
        step3WaterTempSpinBox->setObjectName(QStringLiteral("step3WaterTempSpinBox"));
        step3WaterTempSpinBox->setMinimum(140);
        step3WaterTempSpinBox->setMaximum(212);
        step3WaterTempSpinBox->setValue(210);

        horizontalLayout_6->addWidget(step3WaterTempSpinBox);

        step3WaterTempSlider = new QSlider(thirdStepGroupBox);
        step3WaterTempSlider->setObjectName(QStringLiteral("step3WaterTempSlider"));
        step3WaterTempSlider->setMinimumSize(QSize(80, 0));
        step3WaterTempSlider->setMinimum(140);
        step3WaterTempSlider->setMaximum(212);
        step3WaterTempSlider->setValue(210);
        step3WaterTempSlider->setOrientation(Qt::Horizontal);
        step3WaterTempSlider->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_6->addWidget(step3WaterTempSlider);


        formLayout_3->setLayout(1, QFormLayout::FieldRole, horizontalLayout_6);

        step3WaterVolumeLabelLabel = new QLabel(thirdStepGroupBox);
        step3WaterVolumeLabelLabel->setObjectName(QStringLiteral("step3WaterVolumeLabelLabel"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, step3WaterVolumeLabelLabel);

        step3WaterVolumeLabel = new QLabel(thirdStepGroupBox);
        step3WaterVolumeLabel->setObjectName(QStringLiteral("step3WaterVolumeLabel"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, step3WaterVolumeLabel);


        verticalLayout->addWidget(thirdStepGroupBox);

        verticalSpacer = new QSpacerItem(QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        moreButton = new QPushButton(MashWaterDialog);
        moreButton->setObjectName(QStringLiteral("moreButton"));
        moreButton->setCheckable(true);
        moreButton->setChecked(false);

        horizontalLayout->addWidget(moreButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(MashWaterDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);

#ifndef QT_NO_SHORTCUT
        strikeWaterVolumeLabel->setBuddy(strikeWaterVolumeDoubleSpinBox);
        grainMassLabel->setBuddy(grainMassDoubleSpinBox);
        targetTempLabel->setBuddy(targetStrikeTempSpinBox);
        grainTempLabel->setBuddy(grainTempSpinBox);
        step2TargetTempLabel->setBuddy(step2TargetTempSpinBox);
        step2WaterTempLabel->setBuddy(step2WaterTempSpinBox);
        step3TargetTempLabel->setBuddy(step3TargetTempSpinBox);
        step3WaterTempLabel->setBuddy(step3WaterTempSpinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(MashWaterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MashWaterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MashWaterDialog, SLOT(reject()));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), secondStepGroupBox, SLOT(setVisible(bool)));
        QObject::connect(moreButton, SIGNAL(toggled(bool)), thirdStepGroupBox, SLOT(setVisible(bool)));

        QMetaObject::connectSlotsByName(MashWaterDialog);
    } // setupUi

    void retranslateUi(QDialog *MashWaterDialog)
    {
        MashWaterDialog->setWindowTitle(QApplication::translate("MashWaterDialog", "Mash Water Tool", 0));
        strikeWaterGroupBox->setTitle(QApplication::translate("MashWaterDialog", "Strike &Water", 0));
        strikeWaterVolumeLabel->setText(QApplication::translate("MashWaterDialog", "Quarts of &water", 0));
        grainMassLabel->setText(QApplication::translate("MashWaterDialog", "Pounds of &grain", 0));
        targetTempLabel->setText(QApplication::translate("MashWaterDialog", "&Target temp", 0));
        grainTempLabel->setText(QApplication::translate("MashWaterDialog", "G&rain temp", 0));
        ratioLabelLabel->setText(QApplication::translate("MashWaterDialog", "Water/grain ratio:", 0));
        ratioLabel->setText(QApplication::translate("MashWaterDialog", "2.0", 0));
        strikeWaterTempLabelLabel->setText(QApplication::translate("MashWaterDialog", "Strike water temperature:", 0));
        strikeWaterTempLabel->setText(QApplication::translate("MashWaterDialog", "161.30", 0));
        secondStepGroupBox->setTitle(QApplication::translate("MashWaterDialog", "&Second Step", 0));
        step2TargetTempLabel->setText(QApplication::translate("MashWaterDialog", "Step &2 target temp", 0));
        step2WaterTempLabel->setText(QApplication::translate("MashWaterDialog", "I&nfusion water temp", 0));
        step2WaterVolumeLabel->setText(QApplication::translate("MashWaterDialog", "6.17", 0));
        step2WaterVolumeLabeLabel->setText(QApplication::translate("MashWaterDialog", "Volume of water to add:", 0));
        thirdStepGroupBox->setTitle(QApplication::translate("MashWaterDialog", "&Third Step", 0));
        step3TargetTempLabel->setText(QApplication::translate("MashWaterDialog", "Step &3 target temp", 0));
        step3WaterTempLabel->setText(QApplication::translate("MashWaterDialog", "Infu&sion water temp", 0));
        step3WaterVolumeLabelLabel->setText(QApplication::translate("MashWaterDialog", "Volume of water to add:", 0));
        step3WaterVolumeLabel->setText(QApplication::translate("MashWaterDialog", "6.29", 0));
        moreButton->setText(QApplication::translate("MashWaterDialog", "&More >>", 0));
    } // retranslateUi

};

namespace Ui {
    class MashWaterDialog: public Ui_MashWaterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MASHWATERTOOL_H
