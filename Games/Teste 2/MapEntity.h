#ifndef MAP_ENTITY_H
#define MAP_ENTITY_H

#include <iostream>
#include <vector>
#include "Map.h"
#include "Entity.h"


class MapEntity: public Map {
public:
	MapEntity() {};
	MapEntity(int xSize, int ySize) : Map(xSize, ySize) {};
	virtual ~MapEntity() {} ;
public:
	void addEntity(Entity* entityToAdd);
	Entity addEntity(int sizeX, int sizeY);
	Entity addEntity(int sizeX, int sizeY, int xLocation, int yLocation);
	virtual void removeEntity(Entity* entity);
	virtual void putEntityInMap(Entity* entity);

	std::vector<Entity*> entitiesInMap;	
private:
	void insertParallelogram(size_t xSize, size_t ySize, int value);
	void insertLine(size_t xSize, size_t xLocation, size_t yLocation, int value);
	void insertColumn(size_t xSize, size_t xLocation, size_t yLocation, int value);
	int getPosition(Entity* entity);
	int setToMinimumId();
	void clearVector();
};

#endif