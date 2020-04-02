#include "figure_cube.h"

figure_cube::figure_cube(QObject *parent)
	: figure(parent)
{
	rotate_cnt = 1;
	figureState(0);
	rotateState = 0;
	running = false;
}

figure_cube::~figure_cube()
{

}

void figure_cube::figureState(int state)
{
	blocks.clear();

	block* __blk1 = new block(this);
	__blk1->setPos(0, 0);  // #1
	__blk1->setColor(Qt::darkBlue);
	blocks.append(__blk1);

	block* __blk2 = new block(this);
	__blk2->setPos(0, 1); // #2
	__blk2->setColor(Qt::darkBlue);
	blocks.append(__blk2);

	block* __blk3 = new block(this);
	__blk3->setPos(1, 0); // #3
	__blk3->setColor(Qt::darkBlue);
	blocks.append(__blk3);

	block* __blk4 = new block(this);
	__blk4->setPos(1, 1); // #4
	__blk4->setColor(Qt::darkBlue);
	blocks.append(__blk4);
}

