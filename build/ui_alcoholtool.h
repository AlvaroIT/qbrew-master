/********************************************************************************
** Form generated from reading UI file 'alcoholtool.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALCOHOLTOOL_H
#define UI_ALCOHOLTOOL_H

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

class Ui_AlcoholTool
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *alcoholbox;
    QFormLayout *formLayout;
    QLabel *oglabel;
    QDoubleSpinBox *og;
    QLabel *fglabel;
    QDoubleSpinBox *fg;
    QSpacerItem *spacerItem;
    QLabel *abvlabel;
    QLabel *abwlabel;
    QLabel *abw;
    QLabel *abv;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonbox;

    void setupUi(QDialog *AlcoholTool)
    {
        if (AlcoholTool->objectName().isEmpty())
            AlcoholTool->setObjectName(QStringLiteral("AlcoholTool"));
        AlcoholTool->resize(223, 221);
        vboxLayout = new QVBoxLayout(AlcoholTool);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        alcoholbox = new QGroupBox(AlcoholTool);
        alcoholbox->setObjectName(QStringLiteral("alcoholbox"));
        formLayout = new QFormLayout(alcoholbox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        oglabel = new QLabel(alcoholbox);
        oglabel->setObjectName(QStringLiteral("oglabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, oglabel);

        og = new QDoubleSpinBox(alcoholbox);
        og->setObjectName(QStringLiteral("og"));
        og->setAccelerated(true);
        og->setDecimals(3);
        og->setMinimum(0.9);
        og->setMaximum(1.4);
        og->setSingleStep(0.001);
        og->setValue(1.05);

        formLayout->setWidget(0, QFormLayout::FieldRole, og);

        fglabel = new QLabel(alcoholbox);
        fglabel->setObjectName(QStringLiteral("fglabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, fglabel);

        fg = new QDoubleSpinBox(alcoholbox);
        fg->setObjectName(QStringLiteral("fg"));
        fg->setAccelerated(true);
        fg->setDecimals(3);
        fg->setMinimum(0.9);
        fg->setMaximum(1.4);
        fg->setSingleStep(0.001);
        fg->setValue(1.05);

        formLayout->setWidget(1, QFormLayout::FieldRole, fg);

        spacerItem = new QSpacerItem(20, 12, QSizePolicy::Minimum, QSizePolicy::Fixed);

        formLayout->setItem(2, QFormLayout::LabelRole, spacerItem);

        abvlabel = new QLabel(alcoholbox);
        abvlabel->setObjectName(QStringLiteral("abvlabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, abvlabel);

        abwlabel = new QLabel(alcoholbox);
        abwlabel->setObjectName(QStringLiteral("abwlabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, abwlabel);

        abw = new QLabel(alcoholbox);
        abw->setObjectName(QStringLiteral("abw"));

        formLayout->setWidget(4, QFormLayout::FieldRole, abw);

        abv = new QLabel(alcoholbox);
        abv->setObjectName(QStringLiteral("abv"));

        formLayout->setWidget(3, QFormLayout::FieldRole, abv);


        vboxLayout->addWidget(alcoholbox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);

        buttonbox = new QDialogButtonBox(AlcoholTool);
        buttonbox->setObjectName(QStringLiteral("buttonbox"));
        buttonbox->setOrientation(Qt::Horizontal);
        buttonbox->setStandardButtons(QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonbox);

#ifndef QT_NO_SHORTCUT
        oglabel->setBuddy(og);
        fglabel->setBuddy(fg);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(og, fg);

        retranslateUi(AlcoholTool);
        QObject::connect(buttonbox, SIGNAL(accepted()), AlcoholTool, SLOT(close()));

        QMetaObject::connectSlotsByName(AlcoholTool);
    } // setupUi

    void retranslateUi(QDialog *AlcoholTool)
    {
        AlcoholTool->setWindowTitle(QApplication::translate("AlcoholTool", "Alcohol Tool", 0));
        alcoholbox->setTitle(QApplication::translate("AlcoholTool", "Alcohol", 0));
        oglabel->setText(QApplication::translate("AlcoholTool", "&Original gravity", 0));
#ifndef QT_NO_WHATSTHIS
        og->setWhatsThis(QApplication::translate("AlcoholTool", "Enter the measured original gravity of your batch", 0));
#endif // QT_NO_WHATSTHIS
        fglabel->setText(QApplication::translate("AlcoholTool", "&Final gravity", 0));
#ifndef QT_NO_WHATSTHIS
        fg->setWhatsThis(QApplication::translate("AlcoholTool", "Enter the measured final gravity of your batch", 0));
#endif // QT_NO_WHATSTHIS
        abvlabel->setText(QApplication::translate("AlcoholTool", "Alcohol by Volume", 0));
        abwlabel->setText(QApplication::translate("AlcoholTool", "Alcohol by Weight", 0));
        abw->setText(QApplication::translate("AlcoholTool", "99.9%", 0));
        abv->setText(QApplication::translate("AlcoholTool", "99.9%", 0));
    } // retranslateUi

};

namespace Ui {
    class AlcoholTool: public Ui_AlcoholTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALCOHOLTOOL_H
