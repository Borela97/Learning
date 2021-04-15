#include "Option.h"

int Option::count = 0;

Option::Option() {
	count++;
}

Option::~Option() {
	count--;
}

void Option::setText(string text){
	this -> myText = text;
}

void Option::setFunction(void (*f)){

}