#include "PlayerMoveLeftState.h"
#include <iostream>

PlayerMoveLeftState::PlayerMoveLeftState(PlayerData* context) {

	this->context = context;

}

void PlayerMoveLeftState::update(float elapsedTime) {

	Vector2f newPos = this->context->getPosition();
	newPos.x -= this->context->getXSpeed() * elapsedTime;
	this->context->setPosition(newPos);
	this->context->setSpritePosition(newPos);

}