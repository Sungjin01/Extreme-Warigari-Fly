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

	//���콺 �Է�
	//if(InputManager::GetKeyDown()
}

void Button::StartGame() {

}

void Button::Close() {

}
