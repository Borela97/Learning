#include "Line.h"

Line::Line(int sizeLine){
	Dot* initialPosition = new Dot();
	Dot* endPosition = new Dot(sizeLine - 1);
	this -> size = sizeLine;
}

int Line::getSize(){
	return size;
}


/*

Line::Line(int endPosition){
	Dot* initialPosition = new Dot();
	Dot* endPosition = new Dot(endPosition);
	this -> size = endPosition - 1;
}

Line::Line(int firstPosition, int endPosition){
	if(isConflit(firstPosition, endPosition)){
		return;
	}

	if(invertedValues(firstPosition, endPosition)){
		Dot* initialPosition = new Dot(endPosition);
		Dot* endPosition = new Dot(firstPosition);
		return;
	} 

	Dot* initialPosition = new Dot(firstPosition);
	Dot* endPosition = new Dot(endPosition);
}

int Line::getSize(){
	return (endPosition -> getPosition() - initialPosition -> getPosition() + 1);
}

bool Line::isConflict(int positionOne, int positionTwo){
	return ((positionOne - positionTwo) == 0);
}

bool Line::invertedValues(int positionOne, int positionTwo){
	return (positionOne < positionTwo);
} 


void Line::changePosition(int newFirstPosition,int newEndPosition){
	if(isConflit(newFirstPosition, newEndPosition)){
		return;
	} 
	if(invertedValues(newFirstPosition, newEndPosition)){
		Dot* initialPosition = new Dot(newEndPosition);
		Dot* endPosition = new Dot(newFirstPosition);
		return;
	} 

	initialPosition -> changePosition(newFirstPosition);
	endPosition -> changePosition(newEndPosition);
}

void Line::changeFirstPosition(int newFirstPosition){
	if(isConflit(newFirstPosition, endPosition -> getPosition())){
		return;
	} 
	if(invertedValues(newFirstPosition, endPosition -> getPosition())){
		Dot* initialPosition = new Dot(newEndPosition);
		Dot* endPosition = new Dot(newFirstPosition);
		return;
	} 
	initialPosition -> changePosition(newFirstPosition);
}


void Line::changeEndPosition(int newEndPosition){
	if(isConflit(initialPosition -> getPosition(), newEndPosition)){
		return;
	} 

	endPosition -> changePosition(newEndPosition);
}



*/