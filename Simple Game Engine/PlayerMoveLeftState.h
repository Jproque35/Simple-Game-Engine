#ifndef PLAYERMOVELEFTSTATE_H
#define PLAYERMOVELEFTSTATE_H
#pragma once
#include "PlayerData.h"
#include "PlayerState.h"

class PlayerMoveLeftState :
	public PlayerState
{

private:
	PlayerData* context;

public:
	PlayerMoveLeftState(PlayerData* context);
	void update(float elapsedTime);

};

#endif

