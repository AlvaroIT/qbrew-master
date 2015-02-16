/********************************************************************************
** Form generated from reading UI file 'noteview.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEVIEW_H
#define UI_NOTEVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoteView
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *recipelabel;
    QTextEdit *recipeedit;
    QLabel *batchlabel;
    QTextEdit *batchedit;

    void setupUi(QWidget *NoteView)
    {
        if (NoteView->objectName().isEmpty())
            NoteView->setObjectName(QStringLiteral("NoteView"));
        NoteView->resize(400, 300);
        vboxLayout = new QVBoxLayout(NoteView);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        recipelabel = new QLabel(NoteView);
        recipelabel->setObjectName(QStringLiteral("recipelabel"));

        vboxLayout->addWidget(recipelabel);

        recipeedit = new QTextEdit(NoteView);
        recipeedit->setObjectName(QStringLiteral("recipeedit"));

        vboxLayout->addWidget(recipeedit);

        batchlabel = new QLabel(NoteView);
        batchlabel->setObjectName(QStringLiteral("batchlabel"));

        vboxLayout->addWidget(batchlabel);

        batchedit = new QTextEdit(NoteView);
        batchedit->setObjectName(QStringLiteral("batchedit"));

        vboxLayout->addWidget(batchedit);

#ifndef QT_NO_SHORTCUT
        recipelabel->setBuddy(recipeedit);
        batchlabel->setBuddy(batchedit);
#endif // QT_NO_SHORTCUT

        retranslateUi(NoteView);

        QMetaObject::connectSlotsByName(NoteView);
    } // setupUi

    void retranslateUi(QWidget *NoteView)
    {
        NoteView->setWindowTitle(QApplication::translate("NoteView", "NoteView", 0));
        recipelabel->setText(QApplication::translate("NoteView", "&Recipe Notes", 0));
#ifndef QT_NO_TOOLTIP
        recipeedit->setToolTip(QApplication::translate("NoteView", "Recipe Notes", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        recipeedit->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        recipeedit->setWhatsThis(QApplication::translate("NoteView", "<p>Use this form to enter in any notes relating to the recipe, such as specific brewing procedures or awards.</p>", 0));
#endif // QT_NO_WHATSTHIS
        batchlabel->setText(QApplication::translate("NoteView", "&Batch Notes", 0));
#ifndef QT_NO_TOOLTIP
        batchedit->setToolTip(QApplication::translate("NoteView", "Batch Notes", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        batchedit->setWhatsThis(QApplication::translate("NoteView", "<p>Use this form to enter in any notes relating to brewing batches of this recipe, such as brew and bottling dates.</p>", 0));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class NoteView: public Ui_NoteView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEVIEW_H
