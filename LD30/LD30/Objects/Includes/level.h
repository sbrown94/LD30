#pragma once

#include "window_constants.h"

class Level
{
public:
	Level();
	~Level();

	int levelData(int _xVal, int _yVal);

	void CleanUp();

protected:
	int mLevelArray[MAP_HEIGHT][MAP_WIDTH];
};