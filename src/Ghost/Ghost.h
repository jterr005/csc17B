#ifndef GHOST_H
#define GHOST_H
#include "GameMap.h"


class Ghost: private GameMap
{
private:
	int dir;
	int position = 240;

public:
	Ghost();
	void udlr();
	void move(int num);
};

#endif
