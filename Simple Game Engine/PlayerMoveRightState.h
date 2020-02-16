#ifndef PLAYERMOVERIGHTSTATE_H
#define PLAYERMOVERIGHTSTATE_H
#pragma once
#include "PlayerData.h"
#include "PlayerState.h"

class PlayerMoveRightState :
	public PlayerState
{

private:
	PlayerData* context;

public:
	PlayerMoveRightState(PlayerData* context);
	void update(float elapsedTime);
};

#endif

