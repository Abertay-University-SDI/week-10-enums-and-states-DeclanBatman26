#include "Menu.h"

Menu::Menu(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud) {
	window = hwnd;
	input = in;
	gameState = gs;
	audio = aud;

	BGTex.loadFromFile("gfx/MenuBG.png");
	BG.setTexture(&BGTex);
	BG.setPosition(0, 0);
}

Menu::~Menu() {

}

// handle user input
void Menu::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Enter)) {
		gameState->setCurrentState(State::LEVEL);
		gameState->setRestart(true);
	}

}

// Update game objects
void Menu::update(float dt)
{
	sf::Vector2u windsize = window->getSize();
	BG.setSize(sf::Vector2f(windsize.x, windsize.y));

}

// Render level
void Menu::render()
{
	beginDraw();
	window->draw(BG);
	endDraw();
}

