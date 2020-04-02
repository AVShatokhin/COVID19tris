#ifndef FIGURE_H
#define FIGURE_H

#include <QObject>
#include <QPainter>

#include "block.h"
#include "absolute_pos.h"
#include "scene.h"

class figure : public absolute_pos
{
	Q_OBJECT

public:
	 figure(QObject *parent);
	~figure();
	
	virtual void figureState(int state);

	void paint(QPainter* painter);
	void rotateForward(scene* sc);
    void rotateBackward();
	void stepLeft(scene* sc);
	void stepRight(scene* sc);
	void stepDown(scene* sc);

	QList<block *> blocks;
	quint8 rotateState;
	bool running;
	bool locationERROR(scene *sc);
	quint8 rotate_cnt;

	void start();
	void stop();

signals:
	void figureFinished();

private:

};

#endif // FIGURE_H
