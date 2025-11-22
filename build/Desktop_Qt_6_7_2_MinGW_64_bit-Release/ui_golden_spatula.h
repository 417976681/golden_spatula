/********************************************************************************
** Form generated from reading UI file 'golden_spatula.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOLDEN_SPATULA_H
#define UI_GOLDEN_SPATULA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_golden_spatula
{
public:

    void setupUi(QWidget *golden_spatula)
    {
        if (golden_spatula->objectName().isEmpty())
            golden_spatula->setObjectName("golden_spatula");
        golden_spatula->resize(800, 600);

        retranslateUi(golden_spatula);

        QMetaObject::connectSlotsByName(golden_spatula);
    } // setupUi

    void retranslateUi(QWidget *golden_spatula)
    {
        golden_spatula->setWindowTitle(QCoreApplication::translate("golden_spatula", "golden_spatula", nullptr));
    } // retranslateUi

};

namespace Ui {
    class golden_spatula: public Ui_golden_spatula {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOLDEN_SPATULA_H
