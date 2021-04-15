#ifndef Column_h
#define Column_h

#include "Dot.h"

class Column {
public:
	Column(int sizeColumn);
	int getSize();
private:
	Dot* initialPosition;
	Dot* endPosition;
	int size;   
#endif