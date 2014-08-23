//A Tatty AI collaboration.

//sfml includes
#include <SFML/Graphics.hpp>

//application includes
#include "state_manager.h"

#include "window_constants.h"

//function declaration
void ProcessFrame(sf::RenderWindow* _window, StateManager* _stateManager);

int main()
{
	//create and initialise the window
    sf::RenderWindow *window;
	window = new sf::RenderWindow(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_NAME);
	
	//create and initialise the state manager
	StateManager *stateManager;
	stateManager = new StateManager();
	stateManager->Initialise(window);

	//main loop
    while (window->isOpen())
    {
		ProcessFrame(window, stateManager); 
    }

    return 0;
}

void ProcessFrame(sf::RenderWindow* _window, StateManager* _stateManager)
{
		sf::Event event;
        while (_window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                _window->close();
        }

		//Do things

		_stateManager->Update();

		//Render things
        
		_stateManager->Render();
		
}