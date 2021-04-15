#include "Map.h"

Map::~Map(){
	std::cout << "ClearMap" << std::endl;
}

void Map::setXSize(int xSize){
	this -> xSize = xSize;
}

void Map::setYSize(int ySize){
	this -> ySize = ySize;
}

void Map::showMap(){
	for(int i = 0; i < getXSize(); i++){
		for(int j = 0; j< getYSize(); j++) {
			getValueMap(j,i) == 99 ? std::cout <<  " " : std::cout << getValueMap(j,i);
		}
		std::cout << std::endl;
	}
}


int Map::getXSize() {
	return xSize;
}


int Map::getYSize(){
	return ySize;
}


void Map::clearMatrix(){
	for(int i = 0; i < getXSize(); i++){
		for(int j = 0; j< getYSize(); j++) {
			putValueInMap(j , i , 99);
		}
	}	
}

int Map::getValueMap(int xPosition, int yPosition){
	return matrixMap[index(xPosition, yPosition)];
}

void Map::putValueInMap(int xPosition, int yPosition, int value){
	matrixMap[index(xPosition, yPosition)] = value;
}


int Map::getFullSize(){
	return xSize * ySize;
}
