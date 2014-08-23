/*
*	FileName: state.h
*	Author:	Ryan Simpson
*	Date: 12/06/14
*	Edits: 
*	Acknowledgements:
*	
*	Description: Abstract class for State
*				Holds the enumeration type for the different game states
*				Also contains the current and previous states of the game using this enumeration
*				And the window to render the state on
*/

#pragma once

//sfml includes
#include <SFML/Graphics.hpp>

enum GameState { eTest }; 

class State
{
public:
	State(sf::RenderWindow *_window);
	virtual ~State();
	void virtual Initialise();
	void virtual Update();
	void virtual Render();
	void virtual CleanUp();
	void virtual SetGameState(GameState _gameState);
	GameState virtual GetGameState();
	void virtual SetPreviousState(GameState _previous);

protected:
	sf::RenderWindow *mWindow;

	GameState mGameState;
	GameState mPreviousState;
	
};
