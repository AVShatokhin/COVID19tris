#ifndef FIGURE_ZL_H
#define FIGURE_ZL_H

#include "figure.h"
#include "scene.h"

class figure_zl : public figure
{
	Q_OBJECT

public:
	figure_zl(QObject *parent);
	~figure_zl();

	virtual void figure_zl::figureState(int state);

private:
	
};

#endif // FIGURE_CUBE_H
