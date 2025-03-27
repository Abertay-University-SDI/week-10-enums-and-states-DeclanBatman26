#include "Bee.h"

Bee::Bee() {
	BeeTex.loadFromFile("gfx/Bee.png");
	setTexture(&BeeTex);
	setSize(sf::Vector2f(200, 200));
	setPosition(0, 350);
	setVelocity(200, 0);
}

Bee::~Bee() {

}

void Bee::update(float dt) {
	sf::Vector2u windsize = window->getSize();
	if (getPosition().x > windsize.x - 200) {
		right = false;
	}

	if (getPosition().x < 0) {
		right = true;
	}

	if (right == true) {
		move(velocity * dt);
	}
	else {
		move(-velocity * dt);
	}
}