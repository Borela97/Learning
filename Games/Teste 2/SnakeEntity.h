#ifndef SNAKE_ENTITY_H
#define SNAKE_ENTITY_H

#include "Entity.h"

class SnakeEntity : public Entity {
public:
	SnakeEntity() {};
	SnakeEntity(size_t sizeX, size_t sizeY) : Entity (sizeX, sizeY) {};
	virtual ~SnakeEntity() {};

private:

	const char head = '.';
	const char body = '+';

	// const char head[] = {'▲', '◄', '►', '▼'};
	
	// const char body[] = {'│', '─', '─', '│'};

	// const char corners[] = {'┐', '┌', '└', '┘'};

	// const char tail[] = {'⌡', '┈', '┈', '⌠'};
};   


#endif



// ╔═══════╗
// ║       ║
// ║	   ║
// ║	   ║
// ╚═══════╝
