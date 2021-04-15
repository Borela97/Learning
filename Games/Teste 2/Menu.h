#ifndef Menuuuu_h
#define Menuuuu_h

#include <iostream>
#include <vector>
#include "Option.h"

using namespace std;

#define MENU_OPTIONS 3

class Menu {
public:
	void showMenu();
	void addOption(Option* newOption);
private:
	vector<Option>* options;
	int getOption();
};




#endif