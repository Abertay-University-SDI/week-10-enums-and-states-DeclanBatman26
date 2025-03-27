#pragma once
#include "Framework/GameObject.h"

class Bee : public GameObject
{
public:
	Bee();
	~Bee();
	void update(float dt);
private:
	sf::Texture BeeTex;
	bool right = true;
};

