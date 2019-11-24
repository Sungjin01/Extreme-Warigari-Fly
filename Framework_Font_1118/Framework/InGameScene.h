#pragma once
#include "Scene.h"
#include "Player.h"
#include "BackObject.h"
class InGameScene :
	public Scene
{
public:
	virtual void Initialize();
public:

	Player* player;
	BackObject* backObject1;
	BackObject* backObject2;
	BackObject* backObject3;
	BackObject* backObject4;
};

