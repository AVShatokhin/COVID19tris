#include "figure_zr.h"

figure_zr::figure_zr(QObject *parent)
	: figure(parent)
{
	rotate_cnt = 2;
	figureState(0);
	rotateState = 0;
	running = false;
}

figure_zr::~figure_zr()
{

}



void figure_zr::figureState(int state)
{
	blocks.clear();

	block* __blk1 = new block(this);
	__blk1->setColor(Qt::green);

	block* __blk2 = new block(this);
	__blk2->setColor(Qt::green);

	block* __blk3 = new block(this);
	__blk3->setColor(Qt::green);

	block* __blk4 = new block(this);
	__blk4->setColor(Qt::green);

	switch (state)
	{
	case 0:
		
		__blk1->setPos(1, 0);  // #1
		blocks.append(__blk1);
	
		__blk2->setPos(2, 0); // #2
		blocks.append(__blk2);

		__blk3->setPos(1, 1); // #3
		blocks.append(__blk3);

		__blk4->setPos(0, 1); // #4
		blocks.append(__blk4);
		break;
	case 1:
		
		__blk1->setPos(0, 0);  // #1
		blocks.append(__blk1);

		
		__blk2->setPos(0, 1); // #2
		blocks.append(__blk2);

		
		__blk3->setPos(1, 1); // #3
		blocks.append(__blk3);

		
		__blk4->setPos(1, 2); // #4
		blocks.append(__blk4);
	default:
		break;
	}

}
