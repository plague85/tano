/****************************************************************************
* EpgFull.h: Independent schedule widget
*****************************************************************************
* Copyright (C) 2008-2010 Tadej Novak
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
* This file may be used under the terms of the
* GNU General Public License version 3.0 as published by the
* Free Software Foundation and appearing in the file LICENSE.GPL
* included in the packaging of this file.
*****************************************************************************/

#ifndef TANO_EPGFULL_H_
#define TANO_EPGFULL_H_

#include <QtGui/QTreeWidgetItem>
#include <QtGui/QWidget>

namespace Ui
{
	class EpgFull;
}

class EpgFull : public QWidget
{
Q_OBJECT
public:
	EpgFull(QWidget *parent = 0);
	~EpgFull();

	void openPlaylist(const QString &p);

	static const QString IDENTIFIER;

protected:
	void changeEvent(QEvent *e);

signals:
	void requestEpg(QString, QString);
	void urlClicked(QString);

private slots:
	void channel(QTreeWidgetItem *item);
	void loadEpg(const QStringList &list,
				 const int &day,
				 const QString &identifier);

private:
	Ui::EpgFull *ui;
};

#endif // TANO_EPGFULL_H_