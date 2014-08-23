#pragma once

//sfml includes
#include <SFML/Graphics.hpp>

class Player
{
public:
	Player();
	~Player();

	void Update();

	void SetIsFalling(bool _falling);

	void SetSpeed(float _x, float _y);
	sf::Vector2f GetSpeed();

	sf::RectangleShape* GetSprite();

private:
	sf::Vector2f mSpeed;
	sf::RectangleShape* mBox;
	bool mIsFalling;
	bool mJumpKeyPressed;
};