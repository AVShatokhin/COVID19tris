#include "tetris.h"

tetris::tetris(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	_figure_cube = new figure_cube(this);
	_figure_line = new figure_line(this);
	_figure_three = new figure_three(this);
	_figure_gr = new figure_gr(this);
	_figure_gl = new figure_gl(this);
	_figure_zr = new figure_zr(this);
	_figure_zl = new figure_zl(this);

	_scene       = new scene(this);

	connect(ui.startButton, SIGNAL(clicked()), SLOT(_btnClick()));	
	
	connect(_figure_cube, SIGNAL(figureFinished()), SLOT(_nextStep()));
	connect(_figure_line, SIGNAL(figureFinished()), SLOT(_nextStep()));
	connect(_figure_three, SIGNAL(figureFinished()), SLOT(_nextStep()));
	connect(_figure_gr, SIGNAL(figureFinished()), SLOT(_nextStep())); 
	connect(_figure_gl, SIGNAL(figureFinished()), SLOT(_nextStep()));
	connect(_figure_zr, SIGNAL(figureFinished()), SLOT(_nextStep())); 
	connect(_figure_zl, SIGNAL(figureFinished()), SLOT(_nextStep()));

	connect(_scene, SIGNAL(gameOver()), SLOT(_gameOver()));

	this->setFocus();

	_nextFig = 0;
	_running = false;
}

tetris::~tetris()
{

}

void tetris::paintEvent(QPaintEvent *event)
{
	QPainter __painter(this);
	
	_figure_cube->paint(&__painter);
	_figure_line->paint(&__painter);
	_figure_three->paint(&__painter);
	_figure_gr->paint(&__painter);
	_figure_gl->paint(&__painter);
	_figure_zr->paint(&__painter);
	_figure_zl->paint(&__painter);

	_scene->paint(&__painter);
}



void tetris::keyPressEvent(QKeyEvent *event)
{	
	switch (event->key())
	{
	case Qt::Key_Left:	
		_figure_cube->stepLeft(_scene);
		_figure_line->stepLeft(_scene);
		_figure_three->stepLeft(_scene);
		_figure_gr->stepLeft(_scene);
		_figure_gl->stepLeft(_scene);
		_figure_zr->stepLeft(_scene);
		_figure_zl->stepLeft(_scene);
		repaint();
		break;

	case Qt::Key_Right:
		_figure_cube->stepRight(_scene);
		_figure_line->stepRight(_scene);
		_figure_three->stepRight(_scene);
		_figure_gr->stepRight(_scene);
		_figure_gl->stepRight(_scene);
		_figure_zr->stepRight(_scene);
		_figure_zl->stepRight(_scene);
		repaint();
		break;

	case Qt::Key_Down: 
		_stepDownKey();
		break;

	case Qt::Key_Up:		
		_figure_cube->rotateForward(_scene);
		_figure_line->rotateForward(_scene);
		_figure_three->rotateForward(_scene);
		_figure_gr->rotateForward(_scene);
		_figure_gl->rotateForward(_scene);
		_figure_zr->rotateForward(_scene);
		_figure_zl->rotateForward(_scene);
		repaint();
		break;

	default:
		break;
	}
}

void tetris::_btnClick()
{
	_running = true;
	_scene->clear();
	_nextStep();
	setFocus();
	repaint();
	QTimer::singleShot(1000, this, SLOT(_stepDownTimer()));
}

void tetris::_nextStep()
{
	_nextFig++;
	
	_figure_cube->stop();
	_figure_line->stop();
	_figure_three->stop();
	_figure_gr->stop();
	_figure_gl->stop();
	_figure_zr->stop();
	_figure_zl->stop();

	switch (_nextFig)
	{
	case 0: 
		_figure_zl->start();
		break;

	case 1:		
		_figure_cube->start();
		break;

	case 2:
		_figure_line->start();
		break;

	case 3:
		_figure_zr->start();
		break;

	case 4:
		_figure_gr->start();
		break;
	
	case 5:
		_figure_gl->start();
		break;
	
	case 6:
		_figure_three->start();
		break;
	
	default:
		_figure_zl->start();
		_nextFig = 0;
		break;
	}

	repaint();
}

void tetris::_stepDownKey()
{
	if (!_running) return;

	_figure_cube->stepDown(_scene);
	_figure_line->stepDown(_scene);
	_figure_three->stepDown(_scene);
	_figure_gr->stepDown(_scene);
	_figure_gl->stepDown(_scene);
	_figure_zr->stepDown(_scene);
	_figure_zl->stepDown(_scene);
	repaint();
}

void tetris::_stepDownTimer()
{
	_stepDownKey();
	
	QTimer::singleShot(1000, this, SLOT(_stepDownTimer()));
}

void tetris::_gameOver()
{
	_running = false;
}
