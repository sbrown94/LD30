#include "test_state.h"

TestState::TestState(sf::RenderWindow *_window):
State(_window)
{
	//allocate the map space to different tiles
	for(int xIndex = 0; xIndex < MAP_WIDTH; xIndex++)
	{
		for(int yIndex = 0; yIndex < MAP_HEIGHT; yIndex++)
		{
			mTestGrid[xIndex][yIndex] = new sf::RectangleShape(sf::Vector2f(TILE_SIZE, TILE_SIZE));
			mTestGrid[xIndex][yIndex]->setPosition(xIndex * (mTestGrid[xIndex][yIndex]->getSize().x + 1), yIndex * (mTestGrid[xIndex][yIndex]->getSize().y + 1));
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


