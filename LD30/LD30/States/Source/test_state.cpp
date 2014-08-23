#include "test_state.h"

TestState::TestState(sf::RenderWindow *_window):
State(_window)
{
	mCurrentLevel = new Level1();

	//allocate the map space to different tiles
	for(int xIndex = 0; xIndex < MAP_WIDTH; xIndex++)
	{
		for(int yIndex = 0; yIndex < MAP_HEIGHT; yIndex++)
		{
			if(mCurrentLevel->levelData(xIndex, yIndex) == 0)
				mTestGrid[xIndex][yIndex] = new SkyTile();
			else if(mCurrentLevel->levelData(xIndex, yIndex) == 1)
				mTestGrid[xIndex][yIndex] = new GrassTile();

			mTestGrid[xIndex][yIndex]->setPosition(xIndex * (TILE_SIZE + 1), yIndex * (TILE_SIZE + 1));
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


