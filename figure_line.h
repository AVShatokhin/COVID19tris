#ifndef FIGURE_LINE_H
#define FIGURE_LINE_H

#include "figure.h"
#include "scene.h"

class figure_line : public figure
{
	Q_OBJECT

public:
	figure_line(QObject *parent);
	~figure_line();

	virtual void figure_line::figureState(int state);

private:
	
};

#endif // FIGURE_CUBE_H
