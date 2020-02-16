#include "Engine.h"

void Engine::draw() {

	this->m_Window.clear(Color::White);

	//this->m_Window.draw(this->m_BackgroundSprite);
	this->m_Window.draw(this->m_Bob->getData()->getSprite());

	this->m_Window.display();

}