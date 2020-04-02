#ifndef ABSOLUTE_POS_H
#define ABSOLUTE_POS_H

#include <QObject>

class absolute_pos : public QObject
{
	Q_OBJECT

public:
	absolute_pos(QObject *parent);
	~absolute_pos();
	qint8 abs_x;
	qint8 abs_y;
private:
	
};

#endif // ABSOLUTE_POS_H
