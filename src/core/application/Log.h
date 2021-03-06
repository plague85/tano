/****************************************************************************
* Tano - An Open IP TV Player
* Copyright (C) 2013 Tadej Novak <tadej@tano.si>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program. If not, see <http://www.gnu.org/licenses/>.
*****************************************************************************/

#ifndef TANO_LOG_H_
#define TANO_LOG_H_

#include <QtCore/QtGlobal>

#include "CoreSharedExport.h"

namespace Tano
{
    namespace Log
    {
#if defined(Qt5)
        TANO_CORE_EXPORT void output(QtMsgType type,
                                     const QMessageLogContext &context,
                                     const QString &msg);
#elif defined(Qt4)
        TANO_CORE_EXPORT void output(QtMsgType type,
                                     const char *msg);
#endif

        TANO_CORE_EXPORT void setup();
    }
}

#endif // TANO_LOG_H_
