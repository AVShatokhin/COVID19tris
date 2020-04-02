#ifndef TETRIS_H
#define TETRIS_H

#include <QtWidgets/QMainWindow>
#include "ui_tetris.h"
#include <QPainter>
#include <QDebug>
#include <QKeyEvent>
#include <QTimer>

#include "block.h"
#include "scene.h"

#include "figure_cube.h"
#include "figure_line.h"
#include "figure_zl.h"
#include "figure_zr.h"
#include "figure_gl.h"
#include "figure_gr.h"
#include "figure_three.h"

class tetris : public QMainWindow
{
	Q_OBJECT

public:
	tetris(QWidget *parent = 0);
	~tetris();
protected:
	void paintEvent(QPaintEvent *event);
	void keyPressEvent(QKeyEvent *event);

private:
	Ui::tetrisClass ui;

	figure_cube* _figure_cube;
	figure_line* _figure_line;
	figure_gl* _figure_gl;
	figure_gr* _figure_gr;
	figure_zl* _figure_zl;
	figure_zr* _figure_zr;
	figure_three* _figure_three;

	scene* _scene;
	quint8 _nextFig;
	bool _running;
	QTimer* _timer;


private slots:
	void _btnClick();
	void _nextStep();
	void _stepDownKey();
	void _stepDownTimer();
	void _gameOver();

};

#endif // TETRIS_H
