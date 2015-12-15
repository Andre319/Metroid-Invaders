#pragma once
#include "GameObject.h"
#include "sfwdraw.h"
#include <cmath>


//Player inherits from gameobject
class Player : public GameObject
{
public:
	float delay, rof;
	int health;

	Player(float x, float y)
		: GameObject(x, y, 28),
		delay(0), rof(.5f),
		health(3)
	{
		sprite = spritePlayer;
		//color = BLUE;
		speed = 160; //add speed to gameObject
	}

	void onUpdate();
	void onCollision(GameObject &o);
	void onInactive();
};