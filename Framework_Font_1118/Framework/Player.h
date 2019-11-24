#pragma once
#include "GameObject.h"
#include "AABBCollider.h"
#include "TestObject.h"
#include "Scene.h"
#include "AnimationRenderer.h"
#include "TimeManager.h"
#include "SoundEvent.h"

//Player�� ���Ƿ� ������ ��ü�Դϴ�.
//���� ���� ������Ʈ�� GameObject��ü�� ��ӹ޾� �����Ͽ����մϴ�.
class Player :
	public GameObject
{
public:		
	float gravity;
	float velocity;
	float jumpTime = 2;

	AABBCollider col;		//�浹�� ������ ����
	//TestObject* enemy;		//���� �� �ٸ� ��ü

	//AnimationRenderer* animRenderer;		//�ִϸ��̼Ƿ�����. �ִϸ��̼��� ������ �� �ʿ�

	SoundEvent* se;		//�����̺�Ʈ

	int playerNumber; //1,2,3,4
	
	Player();					//Player������
	virtual void Update();		//Update: �� ������ ȣ��˴ϴ�.
	virtual void LateUpdate();	//LateUpdate: �� ������ Update, Render�� ����� ���� ȣ��˴ϴ�.
};