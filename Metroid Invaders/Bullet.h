#pragma once
#include "GameObject.h"
#include <cmath>


class Bullet : public GameObject
{
public:
	float lifespan;

	Bullet(float x, float y, float a_speed)
		: GameObject(x, y, 10), lifespan(3.f)
	{
		speed = a_speed;
		if (speed > 0)
			color = CYAN;
		else color = ORANGE;
		velocity.y = speed;
	}

	void onUpdate()
	{
		lifespan -= sfw::getDeltaTime();
		position.x += sin(lifespan * 7) * 3;
		radius -= sfw::getDeltaTime() * 4;

		if (lifespan < 0) active = false;
	}

};