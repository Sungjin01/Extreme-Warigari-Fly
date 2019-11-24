#include "stdafx.h"
#include "Button.h"
#include "InputManager.h"


Button::Button(const wchar_t* imagepath, float startX, float startY) :GameObject(imagepath), startX(startX), startY(startY)
{
	transform->SetPosition(startX, startY);
}


Button::~Button()
{

}

void Button::Update() {

	//마우스 입력
	//if(InputManager::GetKeyDown()
}

void Button::StartGame() {

}

void Button::Close() {

}
