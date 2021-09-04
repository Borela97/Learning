#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED

#include <iostream>
#include <cstdlib>
#include <cwchar> 

//[y][x]


#define PATTERN_MAP_SIZE_X 40
#define PATTERN_MAP_SIZE_Y 40

class Map {
public: 
	Map()  : xSize(PATTERN_MAP_SIZE_X), ySize(PATTERN_MAP_SIZE_Y), matrixMap(new int[xSize*ySize]) {clearMatrix();};
	Map(const int xSize, const int ySize) : xSize(xSize), ySize(ySize), matrixMap(new int[xSize*ySize]) {clearMatrix();};
	int getFullSize();
	virtual ~Map();
	virtual void showMap();
	virtual int getXSize();
	virtual int getYSize();
	virtual void setXSize(int size);
	virtual void setYSize(int size);
	virtual int getValueMap(int xPosition, int yPosition);
	virtual void putValueInMap(int xPosition, int yPosition, int value);
	int index( int x, int y ) const {return x + ySize * y; }
private:
	void clearMatrix();
	int* matrixMap;
	size_t xSize {0};
	int ySize {0};
};


#endif