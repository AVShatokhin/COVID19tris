#include "figure_zl.h"

figure_zl::figure_zl(QObject *parent)
	: figure(parent)
{
	rotate_cnt = 2;
	figureState(0);
	rotateState = 0;
	running = false;
}

figure_zl::~figure_zl()
{

}



void figure_zl::figureState(int state)
{
	blocks.clear();

	block* __blk1 = new block(this);
	__blk1->setColor(Qt::darkCyan);

	block* __blk2 = new block(this);
	__blk2->setColor(Qt::darkCyan);

	block* __blk3 = new block(this);
	__blk3->setColor(Qt::darkCyan);

	block* __blk4 = new block(this);
	__blk4->setColor(Qt::darkCyan);

	switch (state)
	{
	case 0:
		
		__blk1->setPos(0, 0);  // #1
		blocks.append(__blk1);
	
		__blk2->setPos(1, 0); // #2
		blocks.append(__blk2);

		__blk3->setPos(1, 1); // #3
		blocks.append(__blk3);

		__blk4->setPos(2, 1); // #4
		blocks.append(__blk4);
		break;
	case 1:
		
		__blk1->setPos(1, 0);  // #1
		blocks.append(__blk1);

		
		__blk2->setPos(1, 1); // #2
		blocks.append(__blk2);

		
		__blk3->setPos(0, 1); // #3
		blocks.append(__blk3);

		
		__blk4->setPos(0, 2); // #4
		blocks.append(__blk4);
	default:
		break;
	}

}
