#ifndef GAME_H
#define GAME_H

#include <iostream>

class Game {
public:
	Game();
	virtual void run();
	virtual void stop();
	virtual void reset();

};

#endif