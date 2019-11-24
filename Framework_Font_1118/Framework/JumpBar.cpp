#include "stdafx.h"
#include "JumpBar.h"


JumpBar::JumpBar(Player* player):GameObject(L"energyBar.png"), player(player)
{
	sizeX = transform->scale.x;
	transform->SetPosition(-50.0f, -50.0f);
}


JumpBar::~JumpBar()
{
}

void JumpBar::Update() {
	transform->position.y = player->transform->position.y - 50;
	transform->position.x = player->transform->position.x;

	transform->scale.x = sizeX * (player->jumpTime) / 2;

}
