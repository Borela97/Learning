#include "MapEntity.h"


void MapEntity::addEntity(Entity* entity){
	entity -> setId(setToMinimumId());
	putEntityInMap(entity);
	entitiesInMap.push_back(entity);
}


Entity MapEntity::addEntity(int sizeX, int sizeY){
	Entity newEntity = Entity(sizeX, sizeY);
	newEntity.setId(setToMinimumId());
	putEntityInMap(&newEntity);
	entitiesInMap.push_back(&newEntity);
	return newEntity;
}


Entity MapEntity::addEntity(int sizeX, int sizeY, int xLocation, int yLocation){
	Entity newEntity = Entity(sizeX, sizeY, xLocation, yLocation);
	newEntity.setId(setToMinimumId());
	putEntityInMap(&newEntity);
	entitiesInMap.push_back(&newEntity);
	return newEntity;
}


void MapEntity::putEntityInMap(Entity* entity){

	size_t yLocation = entity -> getYLocation();
	size_t xLocation = entity -> getXLocation();
	size_t xSize = entity -> getSizeX();
	size_t ySize = entity -> getSizeY();
	size_t value = entity ->  getId();

	if(xSize == 1  &&  ySize == 1){
		putValueInMap(xLocation, yLocation, value);
	} else if (xSize > 1 && ySize > 1) {
		insertParallelogram(xSize, ySize, value);
	} else {
		if(xSize > ySize){
			insertLine(xSize,xLocation,yLocation, value);
		} else {
			insertColumn(ySize,xLocation,yLocation, value);
		}
	}
}


void MapEntity::insertParallelogram(size_t xSize, size_t ySize, int value){
	for(int line = 0; line < xSize; line++) {
		for(int column = 0 ; column  < ySize; column++){
			putValueInMap(line, column, value);
			column++;
		}
		line++;
	}
}



void MapEntity::insertLine(size_t xSize, size_t xLocation, size_t yLocation, int value){
	for(int line = 0 ; line < xSize; line++) {
		putValueInMap(xLocation, yLocation, value);
		xLocation++;
	}
}

void MapEntity::insertColumn(size_t ySize, size_t xLocation, size_t yLocation, int value){
	for(int column = 0 ; column  < ySize; column++){
		putValueInMap(xLocation, yLocation, value);
		yLocation++;
	}
}


void MapEntity::removeEntity(Entity* entity){
	int position = getPosition(entity);
	if(position == -1){
		std::cout << "Vector doesn't have the ID" << std::endl;
		return;
	}
	entitiesInMap.erase(entitiesInMap.begin() + position);
}


int MapEntity::getPosition(Entity* entity){
	int positionInVector;
	for(int index = 0; index < entitiesInMap.size(); index++){
		if(entity -> getId() == entitiesInMap[index] -> getId()){
			return index;
		}
	}
	return -1;
}


int MapEntity::setToMinimumId(){
	int newId = 0;

	if(entitiesInMap.empty()){
		return newId;
	} 
	else if(entitiesInMap.size() == 1){
		if(newId >= entitiesInMap[0] -> getId()){
			return ++newId;
		}
		return newId;
	} else if(entitiesInMap.size() >= 2){

		for(int index = 0; index < entitiesInMap.size(); index++){
			if(index != entitiesInMap[index] -> getId()){
				return index;
			}
			newId = index;	
		}
		return newId;
	}
	return 0;
}
