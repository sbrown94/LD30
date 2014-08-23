#pragma once

#include "level.h"

class Level1: public Level
{
public:
	Level1();
	~Level1();

	int levelData(int _xVal, int _yVal);

	void CleanUp();
};