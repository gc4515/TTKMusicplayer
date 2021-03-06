#ifndef MUSICSONGLISTENHANCELOSSLESSWIDGET_H
#define MUSICSONGLISTENHANCELOSSLESSWIDGET_H

/* =================================================
 * This file is part of the TTK Music Player project
 * Copyright (C) 2015 - 2018 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include "musicabstractmovedialog.h"

namespace Ui {
class MusicSongListEnhanceLosslessWidget;
}

/*! @brief The class of the song list enhance lossless widget.
 * @author Greedysky <greedysky@163.com>
 */
class MUSIC_WIDGET_EXPORT MusicSongListEnhanceLosslessWidget : public MusicAbstractMoveDialog
{
    Q_OBJECT
public:
    /*!
     * Object contsructor.
     */
    explicit MusicSongListEnhanceLosslessWidget(QWidget *parent = 0);

    virtual ~MusicSongListEnhanceLosslessWidget();

    /*!
     * Get class object name.
     */
    static QString getClassName();

public Q_SLOTS:
    /*!
     * Override exec function.
     */
    virtual int exec();

protected:
    Ui::MusicSongListEnhanceLosslessWidget *m_ui;

};

#endif // MUSICSONGLISTENHANCELOSSLESSWIDGET_H
