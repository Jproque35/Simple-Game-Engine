#include "Engine.h"

void Engine::input() {

	if (Keyboard::isKeyPressed(Keyboard::Escape)) {

		this->m_Window.close();

	}

	if (Keyboard::isKeyPressed(Keyboard::A)) {

		this->m_Bob->setState(PlayerStateType::MoveLeft);

	} else if (Keyboard::isKeyPressed(Keyboard::D)) {

		this->m_Bob->setState(PlayerStateType::MoveRight);

	}
	else {

		this->m_Bob->setState(PlayerStateType::Neutral);

	}

}