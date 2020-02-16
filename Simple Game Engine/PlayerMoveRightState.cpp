#include "PlayerMoveRightState.h"
#include <iostream>

PlayerMoveRightState::PlayerMoveRightState(PlayerData* context) {

	this->context = context;

}

void PlayerMoveRightState::update(float elapsedTime) {

	Vector2f newPos = this->context->getPosition();
	newPos.x += this->context->getXSpeed() * elapsedTime;
	this->context->setPosition(newPos);
	this->context->setSpritePosition(newPos);

}
