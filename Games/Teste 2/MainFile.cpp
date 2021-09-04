#include <stdlib.h>
#include <iostream>
#include <string>
#include "Menu.h"
#include "Option.h"
#include "SnakeGame.h"

Menu* menu;



int main()
{
	system("CLS");
	Snake newGame;
	newGame.run();
	newGame.setUp();
	return 0;
}


// Desktop\Project games\Teste 2

//	g++ "MainFile.cpp" "Map.cpp" "Entity.cpp" "MapEntity.cpp" "Menu.cpp" "Option.cpp" "Game.cpp" "SnakeGame.cpp" "SnakeEntity.cpp"




// #define KEY_UP 72
// #define KEY_DOWN 80
// #define KEY_LEFT 75
// #define KEY_RIGHT 77

// int main()
// {
// 	int c = 0;
// 	while(1)
// 	{
// 		c = 0;

// 		switch((c=getch())) {
// 			case KEY_UP:
//             cout << endl << "Up" << endl;//key up
//             break;
//             case KEY_DOWN:
//             cout << endl << "Down" << endl;   // key down
//             break;
//             case KEY_LEFT:
//             cout << endl << "Left" << endl;  // key left
//             break;
//             case KEY_RIGHT:
//             cout << endl << "Right" << endl;  // key right
//             break;
//             default:
//             cout << endl << "null" << endl;  // not arrow
//             break;
//         }

//     }

//     return 0;
// }
