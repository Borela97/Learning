#include "Menu.h"

void Menu::showMenu(){
	

	
	cout << "**************** Welcome to Pong Game! ****************" << endl;
	cout << endl;
	cout << "1. Start Game" << endl;
	cout << "2. Controls" << endl;
	cout << "3. Exit" << endl;
	cout << endl;
	cout << "*******************************************************" << endl;
	cout << endl; 
	cout << "The number is: " << getOption();
}


void Menu::addOption(Option* newOption){
	//options.push_back(newOption);
}



int  Menu::getOption(){
	int option;
	cout << "Select yout option: ";
	cin >> option;
	return option;  
}

