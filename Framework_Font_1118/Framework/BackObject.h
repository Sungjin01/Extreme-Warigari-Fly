#pragma once
#include "GameObject.h"
#include "TimeManager.h"
class BackObject :
	public GameObject
{
public:
	BackObject(const wchar_t* imagepath);
	BackObject(const wchar_t* imagepath, bool isMoving, float moveSpeed, int imgeSizeX, float startX);
	~BackObject();


	bool isMoving;
	float moveSpeed;
	int imageSizeX;
	float startX;

	void Update();
};

