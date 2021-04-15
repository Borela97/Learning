#ifndef Line_h
#define Line_h

#include "Dot.h"

class Line {
public:
	Line(int sizeLine);
	int getSize();
private:
	Dot* initialPosition;
	Dot* endPosition;
	int size;
}


#endif