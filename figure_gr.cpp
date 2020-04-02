#include "figure_gr.h"

figure_gr::figure_gr(QObject *parent)
	: figure(parent)
{
	rotate_cnt = 4;
	figureState(0);
	rotateState = 0;
	running = false;
}

figure_gr::~figure_gr()
{

}



void figure_gr::figureState(int state)
{
	blocks.clear();

	block* __blk1 = new block(this);
	__blk1->setColor(Qt::darkYellow);

	block* __blk2 = new block(this);
	__blk2->setColor(Qt::darkYellow);

	block* __blk3 = new block(this);
	__blk3->setColor(Qt::darkYellow);

	block* __blk4 = new block(this);
	__blk4->setColor(Qt::darkYellow);

	switch (state)
	{
	case 0:
		
		__blk1->setPos(0, 1);  // #1
		blocks.append(__blk1);
	
		__blk2->setPos(1, 1); // #2
		blocks.append(__blk2);

		__blk3->setPos(2, 1); // #3
		blocks.append(__blk3);

		__blk4->setPos(2, 2); // #4
		blocks.append(__blk4);
		break;
	case 1:
		
		__blk1->setPos(1, 0);  // #1
		blocks.append(__blk1);
		
		__blk2->setPos(2, 0); // #2
		blocks.append(__blk2);
		
		__blk3->setPos(1, 1); // #3
		blocks.append(__blk3);

		__blk4->setPos(1, 2); // #4
		blocks.append(__blk4);
		break;

	case 2:

		__blk1->setPos(0, 0);  // #1
		blocks.append(__blk1);

		__blk2->setPos(0, 1); // #2
		blocks.append(__blk2);

		__blk3->setPos(1, 1); // #3
		blocks.append(__blk3);

		__blk4->setPos(2, 1); // #4
		blocks.append(__blk4);
		break;

	case 3:

		__blk1->setPos(0, 2);  // #1
		blocks.append(__blk1);

		__blk2->setPos(1, 2); // #2
		blocks.append(__blk2);

		__blk3->setPos(1, 1); // #3
		blocks.append(__blk3);

		__blk4->setPos(1, 0); // #4
		blocks.append(__blk4);
		break;

	default:
		break;
	}

}
