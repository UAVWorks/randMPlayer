/*
 *  This file is part of the Drone project
 *  Copyright (C) 17/04/2014 -- playlistdisplay.h -- bertrand
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * */

#ifndef PLAYLISTDISPLAY_H
#define PLAYLISTDISPLAY_H

#include <QDialog>

namespace Ui {
class playlistDisplay;
}

class playlistDisplay : public QDialog
{
    Q_OBJECT

public:
    explicit playlistDisplay(QWidget *parent = 0);
    ~playlistDisplay();

private:
    Ui::playlistDisplay *ui;
};

#endif // PLAYLISTDISPLAY_H
