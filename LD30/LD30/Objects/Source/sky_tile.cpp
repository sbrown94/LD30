#include "sky_tile.h"

SkyTile::SkyTile():
Tile()
{
	//temp colours until we use textures
	setFillColor(sf::Color::Color(150, 255, 255, 255));
}

SkyTile::~SkyTile()
{

}

void SkyTile::CleanUp()
{

}