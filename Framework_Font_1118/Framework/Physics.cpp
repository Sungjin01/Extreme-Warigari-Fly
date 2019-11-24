#include "stdafx.h"
#include "Physics.h"
#include "TimeManager.h"


Physics::Physics(float gravity, bool isFreezeY) : gravity(gravity), isFreezeY(isFreezeY)
{
	velocityY = 0;
}


Physics::~Physics()
{
}

void Physics::FixedUpdate(){
	if (isFreezeY)
		return;

	TimeManager timemangaer;
	velocityY -= gravity * timemangaer.GetDeltaTime();
}

void Physics::ClearVelocity()
{
	velocityY = 0;
}

void Physics::AddVelocity(float velocity)
{
	velocityY += velocity;
}
