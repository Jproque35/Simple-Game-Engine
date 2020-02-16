#include "PlayerData.h";

PlayerData::PlayerData() {

	this->m_Speed = 400.0f;
	this->m_Texture.loadFromFile("bob.png");
	this->m_Sprite.setTexture(this->m_Texture);

	this->m_Position.x = 500;
	this->m_Position.y = 800;

}

float PlayerData::getXSpeed() {

	return this->m_Speed;

}

void PlayerData::setSpritePosition(Vector2f pos) {

	this->m_Sprite.setPosition(pos);

}

Sprite PlayerData::getSprite() {

	return this->m_Sprite;

}

void PlayerData::setPosition(Vector2f pos) {

	this->m_Position = pos;

}

Vector2f PlayerData::getPosition() {

	return this->m_Position;

}