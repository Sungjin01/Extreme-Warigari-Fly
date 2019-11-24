#pragma once
#include "Component.h"
class Physics :
	public Component
{
public:
	Physics(float gravity, bool isFreezeY);
	~Physics();

	bool isFreezeY;
	float velocityY;
	float gravity;

	void FixedUpdate();
	void ClearVelocity();
	void AddVelocity(float velocity);
};

