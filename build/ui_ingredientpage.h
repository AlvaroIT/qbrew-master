/********************************************************************************
** Form generated from reading UI file 'ingredientpage.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGREDIENTPAGE_H
#define UI_INGREDIENTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "ingredientview.h"

QT_BEGIN_NAMESPACE

class Ui_IngredientPage
{
public:
    QVBoxLayout *vboxLayout;
    IngredientView *view;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QToolButton *addbutton;
    QToolButton *removebutton;

    void setupUi(QWidget *IngredientPage)
    {
        if (IngredientPage->objectName().isEmpty())
            IngredientPage->setObjectName(QStringLiteral("IngredientPage"));
        IngredientPage->resize(530, 300);
        vboxLayout = new QVBoxLayout(IngredientPage);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(6, 6, 6, 6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        view = new IngredientView(IngredientPage);
        view->setObjectName(QStringLiteral("view"));
        view->setSelectionMode(QAbstractItemView::SingleSelection);
        view->setSelectionBehavior(QAbstractItemView::SelectRows);

        vboxLayout->addWidget(view);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        addbutton = new QToolButton(IngredientPage);
        addbutton->setObjectName(QStringLiteral("addbutton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/16x16/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addbutton->setIcon(icon);
        addbutton->setIconSize(QSize(16, 16));

        hboxLayout->addWidget(addbutton);

        removebutton = new QToolButton(IngredientPage);
        removebutton->setObjectName(QStringLiteral("removebutton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/16x16/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        removebutton->setIcon(icon1);
        removebutton->setIconSize(QSize(16, 16));

        hboxLayout->addWidget(removebutton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(IngredientPage);

        QMetaObject::connectSlotsByName(IngredientPage);
    } // setupUi

    void retranslateUi(QWidget *IngredientPage)
    {
        IngredientPage->setWindowTitle(QApplication::translate("IngredientPage", "Form", 0));
#ifndef QT_NO_TOOLTIP
        addbutton->setToolTip(QApplication::translate("IngredientPage", "Add ingredient", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        addbutton->setWhatsThis(QApplication::translate("IngredientPage", "Use this button to add a new ingredient to the recipe", 0));
#endif // QT_NO_WHATSTHIS
        addbutton->setText(QApplication::translate("IngredientPage", "...", 0));
#ifndef QT_NO_TOOLTIP
        removebutton->setToolTip(QApplication::translate("IngredientPage", "Remove ingredient", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        removebutton->setWhatsThis(QApplication::translate("IngredientPage", "Use this button to remove the currently selected ingredient", 0));
#endif // QT_NO_WHATSTHIS
        removebutton->setText(QApplication::translate("IngredientPage", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class IngredientPage: public Ui_IngredientPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGREDIENTPAGE_H
