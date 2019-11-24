#pragma once
#include "GameObject.h"
class Button :
	public GameObject
{
public:
	Button(const wchar_t* imagepath, float startX, float startY);
	~Button();

	void StartGame();
	void Close();
	void Update();

	float startX;
	float startY;
};

