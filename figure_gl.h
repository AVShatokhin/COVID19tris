#ifndef FIGURE_GL_H
#define FIGURE_GL_H

#include "figure.h"
#include "scene.h"

class figure_gl : public figure
{
	Q_OBJECT

public:
	figure_gl(QObject *parent);
	~figure_gl();

	virtual void figure_gl::figureState(int state);

private:
	
};

#endif // FIGURE_CUBE_H
