// Copyright (c) 2019 The allt developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SETTINGSNETWORKWIDGET_H
#define SETTINGSNETWORKWIDGET_H

#include <QWidget>
#include <QDataWidgetMapper>
#include "qt/allt/pwidget.h"

namespace Ui {
class SettingsNetworkWidget;
}

class SettingsNetworkWidget : public PWidget
{
    Q_OBJECT

public:
    explicit SettingsNetworkWidget(alltGUI* _window, QWidget *parent = nullptr);
    ~SettingsNetworkWidget();

    void setMapper(QDataWidgetMapper *mapper);

private:
    Ui::SettingsNetworkWidget *ui;
};

#endif // SETTINGSNETWORKWIDGET_H
