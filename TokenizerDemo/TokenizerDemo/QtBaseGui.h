#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtBaseGui.h"

class QtBaseGui : public QMainWindow
{
    Q_OBJECT

public:
    QtBaseGui(QWidget *parent = nullptr);
    ~QtBaseGui();

private:
    Ui::QtBaseGuiClass ui;
};
