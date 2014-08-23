#include "state_manager.h"
#include <iostream>

StateManager::StateManager()
{
	
}

StateManager::~StateManager()
{
	CleanUp();
}

//create and initialise all of the concrete state classes here
//set the initial starting game state
void StateManager::Initialise(sf::RenderWindow *_window)
{
	//Create
	mTestState = new TestState(_window);
	
	//Initialize
	mTestState->Initialise();

	//set initial game state
	mGameState = eTest;
	mPreviousState = eTest;
	ChangeStates();
}

//call manage state to check for state changes
//make the current state update the application
void StateManager::Update()
{	
	ManageState();
	mCurrentState -> Update();
}

//render the current state
void StateManager::Render()
{
	mCurrentState -> Render();
}

//delete pointers , objects, states etc.
void StateManager::CleanUp()
{
	delete mTestState;
}

//check if the state has changed using the state the current state wants to be in
//(if the user has taken action this state will change)
//along with the state the manager put it in
//(this is the enumeration which shows what the current state class is)
void StateManager::ManageState()
{
	if (mCurrentState != NULL)
	{
		if (mGameState == mCurrentState -> GetGameState())
		{	
			return;
		}
		else 
		{
			mPreviousState = mGameState;	
			mGameState = mCurrentState -> GetGameState();
			ChangeStates();	
			mCurrentState->SetGameState(mGameState);
		}
	}
}

//if the state has changed run this to change 
//which state the currentstate pointer is pointing to
void StateManager::ChangeStates()
{
	switch(mGameState)
	{
		case(eTest):
			mCurrentState = mTestState;
			break;
	}
}
	
