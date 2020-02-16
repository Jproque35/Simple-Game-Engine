#ifndef PLAYER_H
#define PLAYER_H
#pragma once
#include "PlayerData.h"
#include "PlayerState.h"
#include "PlayerNeutralState.h"
#include "PlayerMoveLeftState.h"
#include "PlayerMoveRightState.h"

enum class PlayerStateType {Neutral, MoveLeft, MoveRight};

class Player
{

private:
	PlayerData* data;
	PlayerState* states[3];
	PlayerState* currState;

public:
	Player();
	~Player();
	void setState(PlayerStateType state);
	PlayerData* getData();
	void update(float elapsedTime);

};

#endif

