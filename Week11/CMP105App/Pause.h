#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/AudioManager.h"
#include "Framework/GameState.h"
#include <string>
#include <iostream>


class Pause : public BaseLevel {
public:
	Pause(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud);
	~Pause();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render();

private:
	// Default variables for level class.
	sf::RectangleShape BG;
	sf::Texture BGTex;
};