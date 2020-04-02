#ifndef FIGURE_ZR_H
#define FIGURE_ZR_H

#include "figure.h"
#include "scene.h"

class figure_zr : public figure
{
	Q_OBJECT

public:
	figure_zr(QObject *parent);
	~figure_zr();

	virtual void figure_zr::figureState(int state);

private:
	
};

#endif // FIGURE_CUBE_H
