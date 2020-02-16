#include "PlayerNeutralState.h"

PlayerNeutralState::PlayerNeutralState(PlayerData* context) {

	this->context = context;

}

void PlayerNeutralState::update(float elapsedTime) {

	this->context->setSpritePosition(this->context->getPosition());

}