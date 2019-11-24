#include "stdafx.h"
#include "GameScene.h"
#include "Player.h"
#include "FontObject.h"

void GameScene::Initialize()
{
	//TestObject* t = (TestObject*)PushBackGameObject(new TestObject());		//테스트용 오브젝트입니다.
	//t->transform->SetPosition(200.0f,100.0f);

			//오브젝트를 생성하고 싶다면, PushBackGameObject함수를 호출하여 생성합니다.
	
	
	
	backObject1 = (BackObject*)PushBackGameObject(new BackObject(L"bgTest.png", true, 1000, 3670, 1825));
	backObject2 = (BackObject*)PushBackGameObject(new BackObject(L"bgTest.png", true, 1000, 3670, 5655));
	backObject3 = (BackObject*)PushBackGameObject(new BackObject(L"backgroundTest022.png", true, 1000, 3670, 1825));
	backObject4 = (BackObject*)PushBackGameObject(new BackObject(L"backgroundTest022.png", true, 1000, 3670, 5655));
	backObject5 = (BackObject*)PushBackGameObject(new BackObject(L"backgroundTitle2.png"));
	backObject6 = (BackObject*)PushBackGameObject(new BackObject(L"backgroundTitle3.png"));

	movingBack.push_back(backObject1);
	movingBack.push_back(backObject2);
	movingBack.push_back(backObject3);
	movingBack.push_back(backObject4);
	
	player = (Player*)PushBackGameObject(new Player());
	player->isActive = false;

	inputObject = (InputObject*)PushBackGameObject(new InputObject(player, backObject5, backObject6));
	jumpBar = (JumpBar*)PushBackGameObject(new JumpBar(player));

	printf("back1 : %f\n", backObject1->transform->scale.x);
	printf("back2 : %f\n", backObject3->transform->scale.x);


	
	/*player->enemy = t;*/

	//PushBackGameObject(new FontObject());		//글씨 출력은 FontObject.h, FontObjct.cpp 참고
}
