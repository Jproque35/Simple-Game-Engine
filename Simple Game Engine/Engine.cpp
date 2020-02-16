#include "Engine.h"

Engine::Engine() {

	Vector2f resolution;
	resolution.x = VideoMode::getDesktopMode().width;
	resolution.y = VideoMode::getDesktopMode().height;

	this->m_Window.create(VideoMode(resolution.x, resolution.y), "Simple Game Engine", Style::Fullscreen);

	this->m_Bob = new Player();
	this->m_Bob->setState(PlayerStateType::Neutral);

	//this->m_BackgroundTexture.loadFromFile("background.jpg");
	//this->m_BackgroundSprite.setTexture(this->m_BackgroundTexture);

}

void Engine::start() {

	Clock clock;

	while (this->m_Window.isOpen()) {

		Time dt = clock.restart();

		float dtAsSeconds = dt.asSeconds();

		input();
		update(dtAsSeconds);
		draw();

	}

}