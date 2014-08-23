#include "test_state.h"

TestState::TestState(sf::RenderWindow *_window):
State(_window)
{
	//allocate the map space to different tiles
	for(int xIndex = 0; xIndex < MAP_WIDTH; xIndex++)
	{
		for(int yIndex = 0; yIndex < MAP_HEIGHT; yIndex++)
		{
			mTestGrid[xIndex][yIndex] = new sf::RectangleShape(sf::Vector2f(10, 10));
			mTestGrid[xIndex][yIndex]->setPosition(xIndex * 11, yIndex * 11);
			//e.g. mMap[xIndex][yIndex] = new PlainsTile(xIndex * TILE_WIDTH, yIndex * TILE_HEIGHT);
			//e.g. mMap[xIndex][yIndex] = new MarshTile(xIndex * TILE_WIDTH, yIndex * TILE_HEIGHT);
		}
	}
}

TestState::~TestState()
{

}

void TestState::Initialise()
{
}

void TestState::Update()
{
}

void TestState::Render()
{
	mWindow->clear();
        
	//draw things here

	//renders the map grid
	for(int xIndex = 0; xIndex < MAP_WIDTH; xIndex++)
	{
		for(int yIndex = 0; yIndex < MAP_HEIGHT; yIndex++)
		{
			mWindow->draw(*mTestGrid[xIndex][yIndex]);
		}
	}

    mWindow->display();
}

void TestState::CleanUp()
{
}


