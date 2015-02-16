/********************************************************************************
** Form generated from reading UI file 'recipeconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIPECONFIG_H
#define UI_RECIPECONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_RecipeConfig
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *recipebox;
    QFormLayout *formLayout;
    QLabel *batchlabel;
    QDoubleSpinBox *batch;
    QLabel *stylelabel;
    QComboBox *stylebox;
    QLabel *hoptypelabel;
    QComboBox *hoptype;
    QSpacerItem *spacerItem;

    void setupUi(QWidget *RecipeConfig)
    {
        if (RecipeConfig->objectName().isEmpty())
            RecipeConfig->setObjectName(QStringLiteral("RecipeConfig"));
        RecipeConfig->resize(228, 144);
        vboxLayout = new QVBoxLayout(RecipeConfig);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        recipebox = new QGroupBox(RecipeConfig);
        recipebox->setObjectName(QStringLiteral("recipebox"));
        formLayout = new QFormLayout(recipebox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        batchlabel = new QLabel(recipebox);
        batchlabel->setObjectName(QStringLiteral("batchlabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, batchlabel);

        batch = new QDoubleSpinBox(recipebox);
        batch->setObjectName(QStringLiteral("batch"));
        batch->setAccelerated(true);
        batch->setMaximum(100);
        batch->setSingleStep(0.25);

        formLayout->setWidget(0, QFormLayout::FieldRole, batch);

        stylelabel = new QLabel(recipebox);
        stylelabel->setObjectName(QStringLiteral("stylelabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, stylelabel);

        stylebox = new QComboBox(recipebox);
        stylebox->setObjectName(QStringLiteral("stylebox"));
        stylebox->setDuplicatesEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, stylebox);

        hoptypelabel = new QLabel(recipebox);
        hoptypelabel->setObjectName(QStringLiteral("hoptypelabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, hoptypelabel);

        hoptype = new QComboBox(recipebox);
        hoptype->setObjectName(QStringLiteral("hoptype"));
        hoptype->setDuplicatesEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, hoptype);


        vboxLayout->addWidget(recipebox);

        spacerItem = new QSpacerItem(220, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

#ifndef QT_NO_SHORTCUT
        batchlabel->setBuddy(batch);
        stylelabel->setBuddy(stylebox);
        hoptypelabel->setBuddy(hoptype);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(batch, stylebox);
        QWidget::setTabOrder(stylebox, hoptype);

        retranslateUi(RecipeConfig);

        QMetaObject::connectSlotsByName(RecipeConfig);
    } // setupUi

    void retranslateUi(QWidget *RecipeConfig)
    {
        RecipeConfig->setWindowTitle(QApplication::translate("RecipeConfig", "Recipe Configuration", 0));
        recipebox->setTitle(QApplication::translate("RecipeConfig", "Recipe Defaults", 0));
        batchlabel->setText(QApplication::translate("RecipeConfig", "&Batch size", 0));
#ifndef QT_NO_WHATSTHIS
        batch->setWhatsThis(QApplication::translate("RecipeConfig", "<p>Enter the default batch size you wish to use. You may always change an individual recipe's size, but this determines the default size for new recipes.</p>", 0));
#endif // QT_NO_WHATSTHIS
        stylelabel->setText(QApplication::translate("RecipeConfig", "&Recipe style", 0));
#ifndef QT_NO_WHATSTHIS
        stylebox->setWhatsThis(QApplication::translate("RecipeConfig", "<p>Select the default recipe style you wish to use. You may always change an individual recipe's style, but this determines the default style for new recipes.</p>", 0));
#endif // QT_NO_WHATSTHIS
        hoptypelabel->setText(QApplication::translate("RecipeConfig", "&Hop type", 0));
#ifndef QT_NO_WHATSTHIS
        hoptype->setWhatsThis(QApplication::translate("RecipeConfig", "<p>Select the default hops type you wish to use. You may always change an individual hop's form, but this determines the default form when adding new hops to a recipe.</p>", 0));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class RecipeConfig: public Ui_RecipeConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIPECONFIG_H
