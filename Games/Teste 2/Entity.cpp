#include "Entity.h"


int Entity::getSizeX(){
	return sizeX;
}

int Entity::getSizeY(){
	return sizeY;
}

int Entity::getXLocation(){
	return xLocation;
}

int Entity::getYLocation(){
	return yLocation;
}

int Entity::getId(){
	return id;
}


void Entity::setId(int id){
	this -> id = id;
}


void Entity::setNewSizeX(size_t newSizeX){
	this -> sizeX = newSizeX;
}

void Entity::setNewSizeY(size_t newSizeY){
	this -> sizeY = newSizeY;
}
