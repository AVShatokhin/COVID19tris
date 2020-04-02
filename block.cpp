#include "block.h"

block::block(QObject *parent)
	: QObject(parent)
{
	_x      =  0;
	_y      =  0;
	
	_size   = 16;
	_margin =  2;
	color  = Qt::black;
}

block::~block()
{

}

void block::setPos(qint8 x, qint8 y)
{
	_x = x;
	_y = y;
}

void block::setMargin(qint8 margin)
{
	_margin = margin;
}

void block::setSize(qint8 size)
{
	_size = size;
}

void block::setColor(QColor col)
{
	color = col;
}

void block::paint(QPainter* painter)
{
	painter->save();

	int __x1 = getAbsPosX() * (_size + _margin * 2);
	int __y1 = getAbsPosY() * (_size + _margin * 2);
	
	QPen* __pen = new QPen();	

	__pen->setColor(color);
	__pen->setWidth(1);

	painter->setPen(*__pen);
	
	painter->drawRect(__x1 + _margin, 
		              __y1 + _margin, 
					  _size, 
					  _size);

	painter->drawRect(__x1 + _margin+1, 
					  __y1 + _margin + 1, 
					  _size - 2, 
					  _size - 2);
	
	painter->drawLine(__x1 + _margin + 1, 
					  __y1 + _margin + 1,
					  __x1 + _margin + 1 + _size - 2, 
					  __y1 + _margin + 1 + _size - 2);
	
	painter->drawLine(__x1 + _margin + 1, 
		              __y1 + _margin + 1 + _size - 2 + 1, 
					  __x1 + _margin + 1 + _size - 2, 
					  __y1 + _margin + 1 + 1);

	painter->restore();
}

int block::getAbsPosX()
{
	return _x + ((absolute_pos *)this->parent())->abs_x;
}

int block::getAbsPosY()
{
	return _y + ((absolute_pos *)this->parent())->abs_y;
}

