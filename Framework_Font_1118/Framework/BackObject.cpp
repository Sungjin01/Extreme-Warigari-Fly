#include "stdafx.h"
#include "BackObject.h"


BackObject::BackObject(const wchar_t* imagepath):GameObject(imagepath), isMoving(false), moveSpeed(0)
{

	transform->SetScale(transform->scale.x * 1.1, transform->scale.y * 1.1);
	
}

BackObject::BackObject(const wchar_t* imagepath, bool isMoving, float moveSpeed, int imageSizeX, float startX) : GameObject(imagepath), isMoving(isMoving), 
moveSpeed(moveSpeed), imageSizeX(imageSizeX), startX(startX)
{
	this->imageSizeX /= 2;
	transform->SetPosition(startX, 350.0f);
	transform->SetScale(transform->scale.x * 1.5, transform->scale.y * 1.5);
}

void BackObject::Update() {
	if (isMoving) {
		transform->position.x -= moveSpeed * TimeManager::GetDeltaTime();
		//printf("position.x : %f\n", transform->position.x);

		if (transform->position.x <= (-imageSizeX - 200)) {
			transform->position.x = imageSizeX * 3 - 200;
		}
	}
}


BackObject::~BackObject()
{
}
