#pragma once

//sfml includes
#include <SFML/Graphics.hpp>

#include "window_constants.h"

class Tile : public sf::RectangleShape
{
public:
	Tile();
	virtual ~Tile();
	void virtual CleanUp();

protected:

};
