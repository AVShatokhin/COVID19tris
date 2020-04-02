#ifndef FIGURE_THREE_H
#define FIGURE_THREE_H

#include "figure.h"
#include "scene.h"

class figure_three : public figure
{
	Q_OBJECT

public:
	figure_three(QObject *parent);
	~figure_three();

	virtual void figure_three::figureState(int state);

private:
	
};

#endif // FIGURE_CUBE_H
