#ifndef PLAYERDATA_H
#define PLAYERDATA_H
#pragma once
#include "PlayerState.h"
#include <SFML/Graphics.hpp>

using namespace sf;

class PlayerData {

private:
	Texture m_Texture;
	Sprite m_Sprite;
	float m_Speed;
	Vector2f m_Position;

public:
	PlayerData();
	float getXSpeed();
	void setSpritePosition(Vector2f pos);
	void setPosition(Vector2f pos);
	Sprite getSprite();
	Vector2f getPosition();

};

#endif
