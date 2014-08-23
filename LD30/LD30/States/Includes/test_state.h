#pragma once

#include "state.h"
#include "level_1.h"
#include "sky_tile.h"
#include "grass_tile.h"

#include "window_constants.h"

class TestState: public State
{
public:
	TestState(sf::RenderWindow *_window);
	~TestState();
	void Initialise();
	void Update();
	void Render();
	void CleanUp();

private:
	Level* mCurrentLevel;
	Tile* mTestGrid[MAP_WIDTH][MAP_HEIGHT];
};