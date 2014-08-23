#pragma once

#include "SFML\Graphics.hpp"

//Window details
const sf::String WINDOW_NAME = "ConnectedWorld";
const int WINDOW_WIDTH = 960;
const int WINDOW_HEIGHT = 544;

//Tile size is the height and width of each tile (pixel/square/thing)
const int TILE_SIZE = 10;

//Map size is (map width * tile width) X (map height * tile height)
const int MAP_WIDTH = 90;
const int MAP_HEIGHT = 50;