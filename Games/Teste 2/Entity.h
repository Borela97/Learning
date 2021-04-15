#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>

class Entity {
public:
	Entity () {std::cout << "new Entity" << std::endl;};
	Entity (int sizeX, int sizeY) : sizeX(sizeX), sizeY(sizeY) {};
	Entity (int sizeX, int sizeY, int xLocation, int yLocation) : sizeX(sizeX), sizeY(sizeY), xLocation(xLocation), yLocation(yLocation) {};
	
	int getId();
	int getSizeX();
	int getSizeY();
	int getXLocation();
	int getYLocation();

	void setNewSizeX(size_t newSizeX);
	void setNewSizeY(size_t newSizeY);

	void setId(int i);


private:
	int id = 0;
	int sizeX = 1;
	int sizeY = 1;
	int xLocation = 0;
	int yLocation = 0;

};

#endif



