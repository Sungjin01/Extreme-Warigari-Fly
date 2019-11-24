#include "stdafx.h"
#include "InputObject.h"
#include "InputManager.h"
#include "InGameScene.h"
#include "Scene.h"


InputObject::InputObject(Player* player, BackObject* title, BackObject* service):player(player), title(title), service(service)
{
	service->transform->SetPosition(5000.0f, 5000.0f);
	title->transform->SetPosition(600.0f, 350.0f);
	
	isGaming = false;
	isServicing = false;
}


InputObject::~InputObject()
{
}

void InputObject::Update() {
	if (InputManager::GetKeyDown(VK_SPACE) && !isGaming) {
		player->isActive = true;
		player->transform->SetPosition(300.0f, 300.0f);

		title->transform->SetPosition(5000.0f, 5000.0f);

		isGaming = true;
	}

	if (InputManager::GetKeyDown(VK_RETURN)) {
		if (!isServicing) {
			title->transform->SetPosition(5000.0f, 5000.0f);
			service->transform->SetPosition(600.0f, 350.0f);

			isServicing = true;
		}
		else {
			service->transform->SetPosition(5000.0f, 5000.0f);
			title->transform->SetPosition(600.0f, 350.0f);

			isServicing = false;
		}
		
	}
}
