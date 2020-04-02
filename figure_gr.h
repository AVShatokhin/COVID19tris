#ifndef FIGURE_GR_H
#define FIGURE_GR_H

#include "figure.h"
#include "scene.h"

class figure_gr : public figure
{
	Q_OBJECT

public:
	figure_gr(QObject *parent);
	~figure_gr();

	virtual void figure_gr::figureState(int state);

private:
	
};

#endif // FIGURE_CUBE_H
