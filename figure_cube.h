#ifndef FIGURE_CUBE_H
#define FIGURE_CUBE_H

#include "figure.h"
#include "scene.h"

class figure_cube : public figure
{
	Q_OBJECT

public:
	figure_cube(QObject *parent);
	~figure_cube();

	virtual void figure_cube::figureState(int state);
private:
	
};

#endif // FIGURE_CUBE_H
