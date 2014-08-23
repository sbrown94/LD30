#include "level.h"

Level::Level()
{
	
}

Level::~Level()
{
	CleanUp();
}

int Level::levelData(int _xVal, int _yVal)
{
	return mLevelArray[_yVal][_xVal];
}

void Level::CleanUp()
{
	
}