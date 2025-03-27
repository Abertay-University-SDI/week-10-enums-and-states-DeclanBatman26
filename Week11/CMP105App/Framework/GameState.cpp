#include "GameState.h"

// Set the current state
void GameState::setCurrentState(State s)
{
	currentState = s;
}

// Returns the current state.
State GameState::getCurrentState()
{
	return currentState;
}

//sets restart
void GameState::setRestart(bool r) {
	restart = r;
}

//gets restart
bool GameState::getRestart() {
	return restart;
}