#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"
using namespace sf;

class Engine {

private: 
	RenderWindow m_Window;
	Sprite m_BackgroundSprite;
	Texture m_BackgroundTexture;

	Player* m_Bob;

	void input();
	void update(float dtAsSeconds);
	void draw();

public:
	Engine();
	void start();

};