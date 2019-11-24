#pragma once
#include "GameObject.h"
#include "Player.h"
class JumpBar :
	public GameObject
{
public:
	JumpBar(Player* player);
	~JumpBar();

	void Update();

	Player* player;
	float sizeX;
};

