#include "Dot.h"


Dot::Dot(int position){
	this -> position = position;
}

int Dot::getPosition(){
	return position;
}



void Dot::changePosition(int newPosition){
	this -> position = newPosition;
}