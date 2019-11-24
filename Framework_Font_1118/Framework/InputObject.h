#pragma once
#include "GameObject.h"
#include "Player.h"
#include "BackObject.h"
class InputObject :
	public GameObject
{
public:
	InputObject(Player* player, BackObject* title, BackObject* service);
	~InputObject();

	void Update();

	Player* player;
	BackObject* title;
	BackObject* service;

	bool isServicing = false;
	bool isGaming = false;
};

