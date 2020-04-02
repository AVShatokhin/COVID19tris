#ifndef BLOCK_H
#define BLOCK_H

#include <QObject>
#include <QPainter>
#include <QColor>
#include "absolute_pos.h"

class block : public QObject
{
	Q_OBJECT

public:
	block(QObject *parent);
	~block();
	
	void setPos(qint8 x, qint8 y);
	void setMargin(qint8 margin);
	void setSize(qint8 size);
	void setColor(QColor col);
	void paint(QPainter* painter);
	int getAbsPosX();
	int getAbsPosY();

	QColor color;

private:

	qint8 _x;
	qint8 _y;

	qint8 _margin;
	qint8 _size;


};

#endif // BLOCK_H
