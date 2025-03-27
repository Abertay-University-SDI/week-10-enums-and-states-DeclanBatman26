#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud)
{
	window = hwnd;
	input = in;
	gameState = gs;
	audio = aud;

	Bee.setWindow(hwnd);

	// initialise game objects
	audio->addMusic("sfx/cantina.ogg", "cantina");
	LevelTex.loadFromFile("gfx/LevelBG.png");
	LevelBG.setTexture(&LevelTex);
	LevelBG.setPosition(0, 0);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	if (input->isPressed(sf::Keyboard::Escape)) {
		gameState->setCurrentState(State::PAUSE);
	}
}

// Update game objects
void Level::update(float dt)
{
	sf::Vector2u windsize = window->getSize();
	LevelBG.setSize(sf::Vector2f(windsize.x, windsize.y));
	Bee.update(dt);
	
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(LevelBG);
	window->draw(Bee);
	endDraw();
}

void Level::onBegin() {
	Bee.setPosition(0, 0);
}