#include "Pause.h"

Pause::Pause(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud) {
	window = hwnd;
	input = in;
	gameState = gs;
	audio = aud;

	BGTex.loadFromFile("gfx/PauseBG.png");
	BG.setTexture(&BGTex);
	BG.setPosition(0, 0);
}

Pause::~Pause() {

}

// handle user input
void Pause::handleInput(float dt)
{
	if (input->isPressed(sf::Keyboard::Escape)) {
		gameState->setCurrentState(State::LEVEL);
	}
	else if (input->isPressed(sf::Keyboard::Enter)) {
		gameState->setCurrentState(State::MENU);
	}

}

// Update game objects
void Pause::update(float dt)
{
	sf::Vector2u windsize = window->getSize();
	BG.setSize(sf::Vector2f(windsize.x, windsize.y));

}

// Render level
void Pause::render()
{
	beginDraw();
	window->draw(BG);
	endDraw();
}
