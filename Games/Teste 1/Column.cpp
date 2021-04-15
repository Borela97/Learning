#include "Column.h"

Column::Column(int sizeColumn){
	Dot* initialPosition = new Dot();
	Dot* endPosition = new Dot(sizeColumn - 1);
	this -> size = sizeColumn;
}

int Column::getSize(){
	return size;
}
