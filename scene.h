#ifndef SCENE_H
#define SCENE_H

#define H_CNT  23
#define V_CNT  25
#define BSIZE 20

#include <QByteArray>
#include <QObject>
#include <QPainter>
#include "block.h"
#include <QDebug>
#include <QVector>

class scene : public absolute_pos
{
	Q_OBJECT

public:
	scene(QObject *parent);
	~scene();
	void paint(QPainter* painter);
	
	bool checkBlock(block * b);
	void freezeBlock(block * b);
	void clear();
	void checkLines();

signals:
	void gameOver();

private:
	QList<block *> _blocks;
	


};

#endif // SCENE_H
