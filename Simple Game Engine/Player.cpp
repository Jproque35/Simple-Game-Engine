#include "Player.h"

Player::Player() {

	this->data = new PlayerData();
	this->states[0] = new PlayerNeutralState(this->data);
	this->states[1] = new PlayerMoveLeftState(this->data);
	this->states[2] = new PlayerMoveRightState(this->data);
	this->currState = this->states[0];
}

Player::~Player() {

	delete(this->data);
	for (int i = 0; i < 3; i++) {

		delete(this->states[i]);

	}

}

void Player::setState(PlayerStateType state) {

	if (state == PlayerStateType::Neutral) {

		this->currState = states[0];

	}
	else if (state == PlayerStateType::MoveLeft) {

		this->currState = states[1];

	}
	else if (state == PlayerStateType::MoveRight) {

		this->currState = states[2];

	}

}

PlayerData* Player::getData() {

	return this->data;

}

void Player::update(float elapsedTime) {

	this->currState->update(elapsedTime);

}