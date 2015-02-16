/********************************************************************************
** Form generated from reading UI file 'view.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_H
#define UI_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_View
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *titlelabel;
    QLineEdit *titleedit;
    QLabel *stylelabel;
    QComboBox *stylecombo;
    QLabel *brewerlable;
    QLineEdit *breweredit;
    QLabel *sizelabel;
    QHBoxLayout *hboxLayout;
    QDoubleSpinBox *sizespin;
    QSpacerItem *spacerItem;
    QGroupBox *stylebox;
    QHBoxLayout *hboxLayout1;
    QGridLayout *gridLayout1;
    QLabel *ogmin;
    QLabel *ogmax;
    QLabel *ogminlabel;
    QLabel *ogreclabel;
    QLabel *ogmaxlabel;
    QLabel *ogrec;
    QSpacerItem *spacerItem1;
    QGridLayout *gridLayout2;
    QLabel *ibumin;
    QLabel *ibuminlabel;
    QLabel *ibumax;
    QLabel *ibureclabel;
    QLabel *iburec;
    QLabel *ibumaxlabel;
    QSpacerItem *spacerItem2;
    QGridLayout *gridLayout3;
    QLabel *srmmaxlabel;
    QLabel *srmmax;
    QLabel *srmminlabel;
    QLabel *srmmin;
    QLabel *srmrec;
    QLabel *srmreclabel;
    QSpacerItem *spacerItem3;
    QGridLayout *gridLayout4;
    QLabel *abw;
    QLabel *abvlabel;
    QLabel *abwlabel;
    QLabel *abv;
    QLabel *fglabel;
    QLabel *fg;
    QTabWidget *ingredients;

    void setupUi(QWidget *View)
    {
        if (View->objectName().isEmpty())
            View->setObjectName(QStringLiteral("View"));
        View->resize(681, 314);
        vboxLayout = new QVBoxLayout(View);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        titlelabel = new QLabel(View);
        titlelabel->setObjectName(QStringLiteral("titlelabel"));

        gridLayout->addWidget(titlelabel, 0, 0, 1, 1);

        titleedit = new QLineEdit(View);
        titleedit->setObjectName(QStringLiteral("titleedit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titleedit->sizePolicy().hasHeightForWidth());
        titleedit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(titleedit, 0, 1, 1, 1);

        stylelabel = new QLabel(View);
        stylelabel->setObjectName(QStringLiteral("stylelabel"));
        stylelabel->setFrameShape(QFrame::NoFrame);
        stylelabel->setFrameShadow(QFrame::Plain);

        gridLayout->addWidget(stylelabel, 0, 2, 1, 1);

        stylecombo = new QComboBox(View);
        stylecombo->setObjectName(QStringLiteral("stylecombo"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stylecombo->sizePolicy().hasHeightForWidth());
        stylecombo->setSizePolicy(sizePolicy1);
        stylecombo->setDuplicatesEnabled(false);

        gridLayout->addWidget(stylecombo, 0, 3, 1, 1);

        brewerlable = new QLabel(View);
        brewerlable->setObjectName(QStringLiteral("brewerlable"));

        gridLayout->addWidget(brewerlable, 1, 0, 1, 1);

        breweredit = new QLineEdit(View);
        breweredit->setObjectName(QStringLiteral("breweredit"));
        sizePolicy.setHeightForWidth(breweredit->sizePolicy().hasHeightForWidth());
        breweredit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(breweredit, 1, 1, 1, 1);

        sizelabel = new QLabel(View);
        sizelabel->setObjectName(QStringLiteral("sizelabel"));

        gridLayout->addWidget(sizelabel, 1, 2, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        sizespin = new QDoubleSpinBox(View);
        sizespin->setObjectName(QStringLiteral("sizespin"));
        sizespin->setAccelerated(true);
        sizespin->setMaximum(5000);
        sizespin->setSingleStep(0.25);

        hboxLayout->addWidget(sizespin);

        spacerItem = new QSpacerItem(140, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        gridLayout->addLayout(hboxLayout, 1, 3, 1, 1);


        vboxLayout->addLayout(gridLayout);

        stylebox = new QGroupBox(View);
        stylebox->setObjectName(QStringLiteral("stylebox"));
        hboxLayout1 = new QHBoxLayout(stylebox);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(3);
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        ogmin = new QLabel(stylebox);
        ogmin->setObjectName(QStringLiteral("ogmin"));

        gridLayout1->addWidget(ogmin, 0, 1, 1, 1);

        ogmax = new QLabel(stylebox);
        ogmax->setObjectName(QStringLiteral("ogmax"));

        gridLayout1->addWidget(ogmax, 1, 1, 1, 1);

        ogminlabel = new QLabel(stylebox);
        ogminlabel->setObjectName(QStringLiteral("ogminlabel"));

        gridLayout1->addWidget(ogminlabel, 0, 0, 1, 1);

        ogreclabel = new QLabel(stylebox);
        ogreclabel->setObjectName(QStringLiteral("ogreclabel"));

        gridLayout1->addWidget(ogreclabel, 2, 0, 1, 1);

        ogmaxlabel = new QLabel(stylebox);
        ogmaxlabel->setObjectName(QStringLiteral("ogmaxlabel"));

        gridLayout1->addWidget(ogmaxlabel, 1, 0, 1, 1);

        ogrec = new QLabel(stylebox);
        ogrec->setObjectName(QStringLiteral("ogrec"));

        gridLayout1->addWidget(ogrec, 2, 1, 1, 1);


        hboxLayout1->addLayout(gridLayout1);

        spacerItem1 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(3);
        gridLayout2->setContentsMargins(0, 0, 0, 0);
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        ibumin = new QLabel(stylebox);
        ibumin->setObjectName(QStringLiteral("ibumin"));

        gridLayout2->addWidget(ibumin, 0, 1, 1, 1);

        ibuminlabel = new QLabel(stylebox);
        ibuminlabel->setObjectName(QStringLiteral("ibuminlabel"));

        gridLayout2->addWidget(ibuminlabel, 0, 0, 1, 1);

        ibumax = new QLabel(stylebox);
        ibumax->setObjectName(QStringLiteral("ibumax"));

        gridLayout2->addWidget(ibumax, 1, 1, 1, 1);

        ibureclabel = new QLabel(stylebox);
        ibureclabel->setObjectName(QStringLiteral("ibureclabel"));

        gridLayout2->addWidget(ibureclabel, 2, 0, 1, 1);

        iburec = new QLabel(stylebox);
        iburec->setObjectName(QStringLiteral("iburec"));

        gridLayout2->addWidget(iburec, 2, 1, 1, 1);

        ibumaxlabel = new QLabel(stylebox);
        ibumaxlabel->setObjectName(QStringLiteral("ibumaxlabel"));

        gridLayout2->addWidget(ibumaxlabel, 1, 0, 1, 1);


        hboxLayout1->addLayout(gridLayout2);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        gridLayout3 = new QGridLayout();
        gridLayout3->setSpacing(3);
        gridLayout3->setContentsMargins(0, 0, 0, 0);
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        srmmaxlabel = new QLabel(stylebox);
        srmmaxlabel->setObjectName(QStringLiteral("srmmaxlabel"));

        gridLayout3->addWidget(srmmaxlabel, 1, 0, 1, 1);

        srmmax = new QLabel(stylebox);
        srmmax->setObjectName(QStringLiteral("srmmax"));

        gridLayout3->addWidget(srmmax, 1, 1, 1, 1);

        srmminlabel = new QLabel(stylebox);
        srmminlabel->setObjectName(QStringLiteral("srmminlabel"));

        gridLayout3->addWidget(srmminlabel, 0, 0, 1, 1);

        srmmin = new QLabel(stylebox);
        srmmin->setObjectName(QStringLiteral("srmmin"));

        gridLayout3->addWidget(srmmin, 0, 1, 1, 1);

        srmrec = new QLabel(stylebox);
        srmrec->setObjectName(QStringLiteral("srmrec"));

        gridLayout3->addWidget(srmrec, 2, 1, 1, 1);

        srmreclabel = new QLabel(stylebox);
        srmreclabel->setObjectName(QStringLiteral("srmreclabel"));

        gridLayout3->addWidget(srmreclabel, 2, 0, 1, 1);


        hboxLayout1->addLayout(gridLayout3);

        spacerItem3 = new QSpacerItem(20, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);

        gridLayout4 = new QGridLayout();
        gridLayout4->setSpacing(3);
        gridLayout4->setContentsMargins(0, 0, 0, 0);
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        abw = new QLabel(stylebox);
        abw->setObjectName(QStringLiteral("abw"));

        gridLayout4->addWidget(abw, 2, 1, 1, 1);

        abvlabel = new QLabel(stylebox);
        abvlabel->setObjectName(QStringLiteral("abvlabel"));

        gridLayout4->addWidget(abvlabel, 1, 0, 1, 1);

        abwlabel = new QLabel(stylebox);
        abwlabel->setObjectName(QStringLiteral("abwlabel"));

        gridLayout4->addWidget(abwlabel, 2, 0, 1, 1);

        abv = new QLabel(stylebox);
        abv->setObjectName(QStringLiteral("abv"));

        gridLayout4->addWidget(abv, 1, 1, 1, 1);

        fglabel = new QLabel(stylebox);
        fglabel->setObjectName(QStringLiteral("fglabel"));

        gridLayout4->addWidget(fglabel, 0, 0, 1, 1);

        fg = new QLabel(stylebox);
        fg->setObjectName(QStringLiteral("fg"));

        gridLayout4->addWidget(fg, 0, 1, 1, 1);


        hboxLayout1->addLayout(gridLayout4);


        vboxLayout->addWidget(stylebox);

        ingredients = new QTabWidget(View);
        ingredients->setObjectName(QStringLiteral("ingredients"));
        ingredients->setMinimumSize(QSize(0, 128));

        vboxLayout->addWidget(ingredients);

#ifndef QT_NO_SHORTCUT
        titlelabel->setBuddy(titleedit);
        stylelabel->setBuddy(stylecombo);
        brewerlable->setBuddy(breweredit);
        sizelabel->setBuddy(sizespin);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(titleedit, breweredit);
        QWidget::setTabOrder(breweredit, stylecombo);
        QWidget::setTabOrder(stylecombo, sizespin);
        QWidget::setTabOrder(sizespin, ingredients);

        retranslateUi(View);

        QMetaObject::connectSlotsByName(View);
    } // setupUi

    void retranslateUi(QWidget *View)
    {
        View->setWindowTitle(QApplication::translate("View", "View", 0));
        titlelabel->setText(QApplication::translate("View", "&Title", 0));
#ifndef QT_NO_TOOLTIP
        titleedit->setToolTip(QApplication::translate("View", "Recipe Title", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        titleedit->setWhatsThis(QApplication::translate("View", "<p>Use this field to enter the title of the recipe</p>", 0));
#endif // QT_NO_WHATSTHIS
        stylelabel->setText(QApplication::translate("View", "&Style", 0));
#ifndef QT_NO_TOOLTIP
        stylecombo->setToolTip(QApplication::translate("View", "Recipe Style", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        stylecombo->setWhatsThis(QApplication::translate("View", "<p>Use this control to select the style of recipe.</p>\n"
"<p>This only affects the minimum and maximum values in the <em>characteristics</em> section</p>", 0));
#endif // QT_NO_WHATSTHIS
        brewerlable->setText(QApplication::translate("View", "&Brewer", 0));
#ifndef QT_NO_TOOLTIP
        breweredit->setToolTip(QApplication::translate("View", "Brewer Name", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        breweredit->setWhatsThis(QApplication::translate("View", "<p>Use this field to enter the name of the brewer</p>", 0));
#endif // QT_NO_WHATSTHIS
        sizelabel->setText(QApplication::translate("View", "Si&ze", 0));
#ifndef QT_NO_TOOLTIP
        sizespin->setToolTip(QApplication::translate("View", "Batch size", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        sizespin->setWhatsThis(QApplication::translate("View", "<p>Use this control to enter the size of the recipe batch</p>", 0));
#endif // QT_NO_WHATSTHIS
        stylebox->setTitle(QApplication::translate("View", "stylebox", 0));
        ogmin->setText(QApplication::translate("View", "1.000", 0));
        ogmax->setText(QApplication::translate("View", "1.000", 0));
        ogminlabel->setText(QApplication::translate("View", "Minimum Gravity:", 0));
        ogreclabel->setText(QApplication::translate("View", "Recipe Gravity:", 0));
        ogmaxlabel->setText(QApplication::translate("View", "Maximum Gravity:", 0));
        ogrec->setText(QApplication::translate("View", "1.000", 0));
        ibumin->setText(QApplication::translate("View", "000", 0));
        ibuminlabel->setText(QApplication::translate("View", "Minimum Bitterness:", 0));
        ibumax->setText(QApplication::translate("View", "000", 0));
        ibureclabel->setText(QApplication::translate("View", "Recipe Bitterness:", 0));
        iburec->setText(QApplication::translate("View", "000", 0));
        ibumaxlabel->setText(QApplication::translate("View", "Maximum Bitterness:", 0));
        srmmaxlabel->setText(QApplication::translate("View", "Maximum Color:", 0));
        srmmax->setText(QApplication::translate("View", "00.0\302\260", 0));
        srmminlabel->setText(QApplication::translate("View", "Minimum Color:", 0));
        srmmin->setText(QApplication::translate("View", "00.0\302\260", 0));
        srmrec->setText(QApplication::translate("View", "00.0\302\260", 0));
        srmreclabel->setText(QApplication::translate("View", "Recipe Color:", 0));
        abw->setText(QApplication::translate("View", "00.0%", 0));
        abvlabel->setText(QApplication::translate("View", "Alcohol by Volume:", 0));
        abwlabel->setText(QApplication::translate("View", "Alcohol by Weight:", 0));
        abv->setText(QApplication::translate("View", "00.0%", 0));
        fglabel->setText(QApplication::translate("View", "Estimate FG:", 0));
        fg->setText(QApplication::translate("View", "1.000", 0));
    } // retranslateUi

};

namespace Ui {
    class View: public Ui_View {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_H
