#pragma once

#include "state.h"

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
	sf::RectangleShape* mTestGrid[MAP_WIDTH][MAP_HEIGHT];
};