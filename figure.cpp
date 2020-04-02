#include "figure.h"

figure::figure(QObject *parent): absolute_pos(parent)
{
	
}

figure::~figure(){}

void figure::figureState(int state)
{

}

void figure::paint(QPainter* painter)
{
	if (!running) return;

	for (int i = 0; i < blocks.size();  i++) {
		blocks.at(i)->paint(painter);
	}
}


void figure::stepLeft(scene* sc)
{
	if (!running) return;

	abs_x--;

	if (locationERROR(sc)) abs_x++;
}

void figure::stepRight(scene* sc)
{
	if (!running) return;

	abs_x++;

	if (locationERROR(sc)) abs_x--;
}

void figure::stepDown(scene* sc)
{
	if (!running) return;

	abs_y++;

	if (locationERROR(sc)) {
		abs_y--;
		for (int i = 0; i < blocks.size(); i++) sc->freezeBlock(blocks.at(i));
		running = false;
		
		sc->checkLines();

		emit figureFinished();
	}
}


bool figure::locationERROR(scene *sc)
{
	bool __locationERROR = false;
	for (int i = 0; i < blocks.size(); i++) {
		if (!sc->checkBlock(blocks.at(i))) __locationERROR = true;
	}
	return __locationERROR;
}


void figure::start()
{
	running = true;
	abs_y = 0;
	abs_x = 5;
	rotateState = 0;
	figureState(rotateState);
}

void figure::stop()
{
	running = false;
}

void figure::rotateForward(scene* sc)
{
	rotateState++;
	if (rotateState == rotate_cnt)
		rotateState = 0;

	figureState(rotateState);

	if (locationERROR(sc)) rotateBackward();
}

void figure::rotateBackward()
{

	if (rotateState == 0)
		rotateState = rotate_cnt - 1;
	else
		rotateState--;

	figureState(rotateState);
}