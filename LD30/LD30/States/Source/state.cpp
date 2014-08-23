#include "state.h"

State::State(sf::RenderWindow *_window)
{
	mWindow = _window;
}

State::~State()
{
	CleanUp();
}

void State::Initialise()
{

}

void State::Update()
{

}

void State::Render()
{

}

void State::CleanUp()
{
	delete mWindow;
}

//set the enum for current state
//called by concrete implementation when the user has taken action to change the state
void State::SetGameState(GameState _gameState)
{
	mGameState = _gameState;
}

//return the enum for current gamestate
GameState State::GetGameState()
{
	return mGameState;
}
	
//set what the state before the current state was
void State::SetPreviousState(GameState _previous)
{
	mPreviousState = _previous;
}
	