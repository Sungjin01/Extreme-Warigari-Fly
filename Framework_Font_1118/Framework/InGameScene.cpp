#include "stdafx.h"
#include "InGameScene.h"


void InGameScene::Initialize() {


	backObject1 = (BackObject*)PushBackGameObject(new BackObject(L"bgTest.png"));
	backObject2 = (BackObject*)PushBackGameObject(new BackObject(L"backgroundTest022.png", true, 500, 2600, 1300));
	backObject3 = (BackObject*)PushBackGameObject(new BackObject(L"backgroundTest022.png", true, 500, 2600, 3900));
	player = (Player*)PushBackGameObject(new Player());
}
