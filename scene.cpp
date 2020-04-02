#include "scene.h"

scene::scene(QObject *parent)
	: absolute_pos(parent)
{
	block* __blk1 = new block(this);  __blk1->setColor(Qt::green);
	block* __blk2 = new block(this);  __blk2->setColor(Qt::green);
	block* __blk3 = new block(this);  __blk3->setColor(Qt::green);
	block* __blk4 = new block(this);  __blk4->setColor(Qt::green);
	block* __blk5 = new block(this);  __blk5->setColor(Qt::green);
	block* __blk6 = new block(this);  __blk6->setColor(Qt::green);
	block* __blk7 = new block(this);  __blk7->setColor(Qt::green);
	block* __blk8 = new block(this);  __blk8->setColor(Qt::green);
	block* __blk9 = new block(this);  __blk9->setColor(Qt::green);
	block* __blk10 = new block(this);  __blk10->setColor(Qt::green);

	__blk1->setPos(1, 2);  
	__blk2->setPos(1, 3);
	__blk3->setPos(1, 4);
	__blk4->setPos(1, 5);
	__blk5->setPos(2, 1);
	__blk6->setPos(2, 6);
	__blk7->setPos(3, 1);
	__blk8->setPos(3, 6);
	__blk9->setPos(4, 2);
	__blk10->setPos(4, 5);

	 _blocks.append(__blk1);
	 _blocks.append(__blk2);
	 _blocks.append(__blk3);
	 _blocks.append(__blk4);
	 _blocks.append(__blk5);
	 _blocks.append(__blk6);
	 _blocks.append(__blk7);
	 _blocks.append(__blk8);
	 _blocks.append(__blk9);
	 _blocks.append(__blk10);

	 block* __blk11 = new block(this);  __blk11->setColor(Qt::red);
	 block* __blk12 = new block(this);  __blk12->setColor(Qt::red);
	 block* __blk13 = new block(this);  __blk13->setColor(Qt::red);
	 block* __blk14 = new block(this);  __blk14->setColor(Qt::red);
	 block* __blk15 = new block(this);  __blk15->setColor(Qt::red);
	 block* __blk16 = new block(this);  __blk16->setColor(Qt::red);
	 block* __blk17 = new block(this);  __blk17->setColor(Qt::red);
	 block* __blk18 = new block(this);  __blk18->setColor(Qt::red);
	 block* __blk19 = new block(this);  __blk19->setColor(Qt::red);
	 block* __blk20 = new block(this);  __blk20->setColor(Qt::red);

	 __blk11->setPos(7, 1);
	 __blk12->setPos(6, 2);
	 __blk13->setPos(6, 3);
	 __blk14->setPos(6, 4);
	 __blk15->setPos(6, 5);
	 __blk16->setPos(7, 6);
	 __blk17->setPos(8, 5);
	 __blk18->setPos(8, 4);
	 __blk19->setPos(8, 3);
	 __blk20->setPos(8, 2);

	 _blocks.append(__blk11);
	 _blocks.append(__blk12);
	 _blocks.append(__blk13);
	 _blocks.append(__blk14);
	 _blocks.append(__blk15);
	 _blocks.append(__blk16);
	 _blocks.append(__blk17);
	 _blocks.append(__blk18);
	 _blocks.append(__blk19);
	 _blocks.append(__blk20);

	 block* __blk21 = new block(this);  __blk21->setColor(Qt::blue);
	 block* __blk22 = new block(this);  __blk22->setColor(Qt::blue);
	 block* __blk23 = new block(this);  __blk23->setColor(Qt::blue);
	 block* __blk24 = new block(this);  __blk24->setColor(Qt::blue);
	 block* __blk25 = new block(this);  __blk25->setColor(Qt::blue);
	 block* __blk26 = new block(this);  __blk26->setColor(Qt::blue);
	 block* __blk27 = new block(this);  __blk27->setColor(Qt::blue);
	 block* __blk28 = new block(this);  __blk28->setColor(Qt::blue);
	 block* __blk29 = new block(this);  __blk29->setColor(Qt::blue);
	 block* __blk30 = new block(this);  __blk30->setColor(Qt::blue);
	 block* __blk31 = new block(this);  __blk31->setColor(Qt::blue);

	 __blk21->setPos(10, 1);
	 __blk22->setPos(10, 2);
	 __blk23->setPos(10, 3);
	 __blk24->setPos(10, 4);
	 __blk25->setPos(10, 5);
	 __blk26->setPos(11, 6);
	 __blk27->setPos(12, 5);
	 __blk28->setPos(12, 4);
	 __blk29->setPos(12, 3);
	 __blk30->setPos(12, 2);
	 __blk31->setPos(12, 1);

	 _blocks.append(__blk21);
	 _blocks.append(__blk22);
	 _blocks.append(__blk23);
	 _blocks.append(__blk24);
	 _blocks.append(__blk25);
	 _blocks.append(__blk26);
	 _blocks.append(__blk27);
	 _blocks.append(__blk28);
	 _blocks.append(__blk29);
	 _blocks.append(__blk30);
	 _blocks.append(__blk31);


	 block* __blk41 = new block(this);  __blk41->setColor(Qt::darkBlue);
	 block* __blk42 = new block(this);  __blk42->setColor(Qt::darkBlue);
	 block* __blk43 = new block(this);  __blk43->setColor(Qt::darkBlue);
	 block* __blk44 = new block(this);  __blk44->setColor(Qt::darkBlue);
	 block* __blk45 = new block(this);  __blk45->setColor(Qt::darkBlue);
	 block* __blk46 = new block(this);  __blk46->setColor(Qt::darkBlue);
	 block* __blk47 = new block(this);  __blk47->setColor(Qt::darkBlue);
	 block* __blk48 = new block(this);  __blk48->setColor(Qt::darkBlue);
	 block* __blk49 = new block(this);  __blk49->setColor(Qt::darkBlue);
	 block* __blk50 = new block(this);  __blk50->setColor(Qt::darkBlue);
	
	 __blk41->setPos(14, 1);
	 __blk42->setPos(15, 1);
	 __blk43->setPos(16, 1);
	 __blk44->setPos(15, 2);
	 __blk45->setPos(15, 3);
	 __blk46->setPos(15, 4);
	 __blk47->setPos(15, 5);
	 __blk48->setPos(15, 6);
	 __blk49->setPos(14, 6);
	 __blk50->setPos(16, 6);

	 _blocks.append(__blk41);
	 _blocks.append(__blk42);
	 _blocks.append(__blk43);
	 _blocks.append(__blk44);
	 _blocks.append(__blk45);
	 _blocks.append(__blk46);
	 _blocks.append(__blk47);
	 _blocks.append(__blk48);
	 _blocks.append(__blk49);
	 _blocks.append(__blk50);

	 block* __blk51 = new block(this);  __blk51->setColor(Qt::darkGreen);
	 block* __blk52 = new block(this);  __blk52->setColor(Qt::darkGreen);
	 block* __blk53 = new block(this);  __blk53->setColor(Qt::darkGreen);
	 block* __blk54 = new block(this);  __blk54->setColor(Qt::darkGreen);
	 block* __blk55 = new block(this);  __blk55->setColor(Qt::darkGreen);
	 block* __blk56 = new block(this);  __blk56->setColor(Qt::darkGreen);
	 block* __blk57 = new block(this);  __blk57->setColor(Qt::darkGreen);
	 block* __blk58 = new block(this);  __blk58->setColor(Qt::darkGreen);
	 block* __blk59 = new block(this);  __blk59->setColor(Qt::darkGreen);
	 block* __blk60 = new block(this);  __blk60->setColor(Qt::darkGreen);
	 block* __blk61 = new block(this);  __blk61->setColor(Qt::darkGreen);
	 block* __blk62 = new block(this);  __blk62->setColor(Qt::darkGreen);
	 block* __blk63 = new block(this);  __blk63->setColor(Qt::darkGreen);
	 block* __blk64 = new block(this);  __blk64->setColor(Qt::darkGreen);

	 __blk51->setPos(18, 1);
	 __blk52->setPos(18, 2);
	 __blk53->setPos(18, 3);
	 __blk54->setPos(18, 4);
	 __blk55->setPos(18, 5);
	 __blk56->setPos(18, 6);
	 __blk57->setPos(19, 1);
	 __blk58->setPos(20, 1);
	 __blk59->setPos(21, 2);
	 __blk60->setPos(21, 3);
	 __blk61->setPos(21, 4);
	 __blk62->setPos(21, 5);
	 __blk63->setPos(20, 6);
	 __blk64->setPos(19, 6);

	 _blocks.append(__blk51);
	 _blocks.append(__blk52);
	 _blocks.append(__blk53);
	 _blocks.append(__blk54);
	 _blocks.append(__blk55);
	 _blocks.append(__blk56);
	 _blocks.append(__blk57);
	 _blocks.append(__blk58);
	 _blocks.append(__blk59);
	 _blocks.append(__blk60);
	 _blocks.append(__blk61);
	 _blocks.append(__blk62);
	 _blocks.append(__blk63);
	 _blocks.append(__blk64);

	 block* __blk71 = new block(this);  __blk71->setColor(Qt::darkBlue);
	 block* __blk72 = new block(this);  __blk72->setColor(Qt::darkBlue);
	 block* __blk73 = new block(this);  __blk73->setColor(Qt::darkBlue);
	 block* __blk74 = new block(this);  __blk74->setColor(Qt::darkBlue);
	 block* __blk75 = new block(this);  __blk75->setColor(Qt::darkBlue);
	 block* __blk76 = new block(this);  __blk76->setColor(Qt::darkBlue);
	 block* __blk77 = new block(this);  __blk77->setColor(Qt::darkBlue);
	 block* __blk78 = new block(this);  __blk78->setColor(Qt::darkBlue);
	 block* __blk79 = new block(this);  __blk79->setColor(Qt::darkBlue);
	 block* __blk80 = new block(this);  __blk80->setColor(Qt::darkBlue);
	 block* __blk81 = new block(this);  __blk81->setColor(Qt::darkBlue);
	 block* __blk82 = new block(this);  __blk82->setColor(Qt::darkBlue);
	 block* __blk83 = new block(this);  __blk83->setColor(Qt::darkBlue);
	 block* __blk84 = new block(this);  __blk84->setColor(Qt::darkBlue);
	 block* __blk85 = new block(this);  __blk85->setColor(Qt::darkBlue);
	 block* __blk86 = new block(this);  __blk86->setColor(Qt::darkBlue);
	 block* __blk87 = new block(this);  __blk87->setColor(Qt::darkBlue);
	 block* __blk88 = new block(this);  __blk88->setColor(Qt::darkBlue);
	 block* __blk89 = new block(this);  __blk89->setColor(Qt::darkBlue);
	 block* __blk90 = new block(this);  __blk90->setColor(Qt::darkBlue);
	 block* __blk91 = new block(this);  __blk91->setColor(Qt::darkBlue);
	 block* __blk92 = new block(this);  __blk92->setColor(Qt::darkBlue);
	 block* __blk93 = new block(this);  __blk93->setColor(Qt::darkBlue);


	 __blk71->setPos(8, 8);
	 __blk72->setPos(7, 9);
	 __blk73->setPos(8, 9);
	 __blk74->setPos(8, 10);
	 __blk75->setPos(8, 11);
	 __blk76->setPos(8, 12);
	 __blk77->setPos(8, 13);
	 __blk78->setPos(7, 13);
	 __blk79->setPos(9, 13);
	 
	 __blk80->setPos(13, 13);
	 __blk81->setPos(14, 13);
	 __blk82->setPos(15, 11);
	 __blk83->setPos(15, 10);
	 __blk84->setPos(15, 9);
	 __blk85->setPos(15, 8);
	 __blk86->setPos(14, 8);
	 __blk87->setPos(13, 8);
	 __blk88->setPos(13, 9);
	 __blk89->setPos(13, 10);
	 __blk90->setPos(13, 11);
	 __blk91->setPos(14, 11);
	 __blk92->setPos(15, 13);
	 __blk93->setPos(15, 12);

	 _blocks.append(__blk71);
	 _blocks.append(__blk72);
	 _blocks.append(__blk73);
	 _blocks.append(__blk74);
	 _blocks.append(__blk75);
	 _blocks.append(__blk76);
	 _blocks.append(__blk77);
	 _blocks.append(__blk78);
	 _blocks.append(__blk79);
	
	 _blocks.append(__blk80);
	 _blocks.append(__blk81);
	 _blocks.append(__blk82);
	 _blocks.append(__blk83);
	 _blocks.append(__blk84);
	 _blocks.append(__blk85);
	 _blocks.append(__blk86);
	 _blocks.append(__blk87);
	 _blocks.append(__blk88);
	 _blocks.append(__blk89);
	 _blocks.append(__blk90);
	 _blocks.append(__blk91);
	 _blocks.append(__blk92);
	 _blocks.append(__blk93);
}

scene::~scene()
{

}

void scene::paint(QPainter* painter)
{
	painter->save();

	QPen* __pen = new QPen();

	__pen->setColor(Qt::lightGray);
	__pen->setWidth(1);

	painter->setPen(*__pen);
	painter->drawRect(0, 0, H_CNT * BSIZE, V_CNT * BSIZE);

	for (int i = 0; i < H_CNT; i++)
		painter->drawLine(i * BSIZE, 0, i * BSIZE, V_CNT * BSIZE);

	for (int j = 0; j < V_CNT; j++)
		painter->drawLine(0, j * BSIZE, H_CNT * BSIZE, j * BSIZE);

	painter->restore();

	for (int i = 0; i < _blocks.size(); i++) {
		_blocks.at(i)->paint(painter);
	}
}

bool scene::checkBlock(block * b)
{
	for (int i = 0; i < _blocks.size(); i++) {
		if ((_blocks.at(i)->getAbsPosX() == b->getAbsPosX()) && (_blocks.at(i)->getAbsPosY() == b->getAbsPosY())) return false;
	}

	if ((b->getAbsPosX() < 0) || (b->getAbsPosX() >= H_CNT) || (b->getAbsPosY() < 0) || (b->getAbsPosY() >= V_CNT)) return false;

	return true;
}

void scene::freezeBlock(block * b)
{
	block* __blk = new block(this);
	__blk->color = b->color;
	__blk->setPos(b->getAbsPosX(), b->getAbsPosY());
	_blocks.append(__blk);
}

void scene::clear()
{
	_blocks.clear();
}

void scene::checkLines()
{
	QVector<QVector<block *>> __stateTable;

	__stateTable.resize(V_CNT);
	
	for (int i = 0; i < V_CNT; i++)
		__stateTable[i].resize(H_CNT);

	for (int i = 0; i < _blocks.size(); i++) 
		if (!__stateTable[_blocks[i]->getAbsPosY()][_blocks[i]->getAbsPosX()])
			__stateTable[_blocks[i]->getAbsPosY()][_blocks[i]->getAbsPosX()] = _blocks[i];
		else {
			emit gameOver();
			return;
		}

	qint8 __y_delta = 0;

	_blocks.clear();

	for (int i = V_CNT - 1; i >=0; i--) {

		bool lineIsFull = true;

		for (int j = 0; j < H_CNT; j++) 
			if (!__stateTable[i][j]) lineIsFull = false;

		if (lineIsFull) {

			__y_delta++;	
			
		}
		else {

			for (int j = 0; j < H_CNT; j++) {

				if (__stateTable[i][j]) {

					block * __block;
					__block = __stateTable[i][j];
					__block->setPos(j, i + __y_delta);
					_blocks.append(__block);

				}

			}
				
		}

	}

}
