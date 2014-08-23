#include "player.h"

Player::Player()
{
	mBox = new sf::RectangleShape(sf::Vector2f(30, 30));
	mSpeed.x = 0;
	mSpeed.y = 0;
	mIsFalling = true;
	bool mJumpKeyPressed = false;
}

Player::~Player()
{

}

sf::RectangleShape* Player::GetSprite() 
{
	return mBox; 
}


void Player::SetIsFalling(bool _falling)
{
	mIsFalling = _falling;
}

void Player::SetSpeed(float _x, float _y)
{
	mSpeed.x = _x;
	mSpeed.y = _y;
}

sf::Vector2f Player::GetSpeed()
{
	return mSpeed;
}

void Player::UpdateSpeed()
{
	mSpeed.x = 0;
	if(mIsFalling)
	{
		mSpeed.y += 0.01;
		if(mSpeed.y > 0.3) mSpeed.y = 0.5;
	}

	//horizontal movement
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		mSpeed.x = -0.5;
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		mSpeed.x = 0.5;
	}
	
	//jumping
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W) && (!mIsFalling) && (!mJumpKeyPressed))
	{
		mIsFalling = true;
		mJumpKeyPressed = true;
		mSpeed.y = -1.5;
	}
	else if(!sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{
		mJumpKeyPressed = false;
	}
}

void Player::UpdatePosition()
{
	mBox->setPosition(mBox->getPosition().x+mSpeed.x, mBox->getPosition().y+mSpeed.y);

	if(mBox->getPosition().y > 514)
	{
		mSpeed.y = 0;
		mBox->setPosition(mBox->getPosition().x,514);
		mIsFalling = false;
	}
}