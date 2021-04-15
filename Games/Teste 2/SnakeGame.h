#ifndef SNAKE_GAME_H
#define SNAKE_GAME_H

#include "Game.h"
#include "MapEntity.h"
#include "SnakeEntity.h"

class Snake : public Game {
public:
	void setUp();
private:
	MapEntity* MapSnake;
	SnakeEntity* Snake;
	void updateMap();
	void checkUserInput();
};

#endif