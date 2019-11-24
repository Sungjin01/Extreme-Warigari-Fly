#pragma once
#include "Scene.h"
#include "Player.h"
#include "BackObject.h"
#include "InputObject.h"
#include "JumpBar.h"

//����� ������ ��ü�� �ʿ��մϴ�.
//Scene�� ��ӹ޾� ��ü�� �����մϴ�.
class GameScene :
	public Scene
{
public:
	virtual void Initialize();		//��� Scene���� �ݵ�� Initialize�Լ��� �־���մϴ�. (�߻� Ŭ���� ����)
public:
	std::list<BackObject*> movingBack;

	BackObject* backObject1;
	BackObject* backObject2;
	BackObject* backObject3;
	BackObject* backObject4;
	BackObject* backObject5;
	BackObject* backObject6;
	InputObject* inputObject;
	JumpBar* jumpBar;
	Player* player;

};
