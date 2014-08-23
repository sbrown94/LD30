#include <SFML/Graphics.hpp>

//application includes
#include "state.h"
#include "test_state.h"

class StateManager
{
public:
	StateManager();
	~StateManager();
	void Initialise(sf::RenderWindow *_window);
	void Update();
	void Render();
	void CleanUp();
	
private:
	//enums for cur and prev states
	GameState mGameState;
	GameState mPreviousState;
	
	//pointer to current state
	State *mCurrentState;

	//different state concrete implementations
	TestState *mTestState;

	void ManageState();
	void ChangeStates();
	
};
 