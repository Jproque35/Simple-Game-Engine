#ifndef PLAYERNEUTRALSTATE_H
#define PLAYERNEUTRALSTATE_H
#pragma once
#include "PlayerData.h"
#include "PlayerState.h"

class PlayerNeutralState :
	public PlayerState
{

private:
	PlayerData* context;

public:
	PlayerNeutralState(PlayerData* context);
	void update(float elapsedTime);

};

#endif

