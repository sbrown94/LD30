#include "tile.h"

Tile::Tile():
sf::RectangleShape(sf::Vector2f(TILE_SIZE, TILE_SIZE))
{

}

Tile::~Tile()
{
	CleanUp();
}

void Tile::CleanUp()
{
	
}