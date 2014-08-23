#include "grass_tile.h"

GrassTile::GrassTile():
Tile()
{
	//temp colours until we use textures
	setFillColor(sf::Color::Color(0, 150, 0, 255));
}

GrassTile::~GrassTile()
{

}

void GrassTile::CleanUp()
{

}