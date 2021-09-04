#include "SnakeGame.h"

void Snake::setUp(){
	MapSnake = new MapEntity(10,10);
	Snake = new SnakeEntity(3,1);
	MapSnake -> addEntity(3,3,3,3);
	MapSnake -> showMap();
}

void Snake::updateMap() {

}

void Snake::checkUserInput(){

}


	// for(int i = 0; i < getXSize(); i++){

	// 	std::cout << "| ";
	// 	for(int j = 0; j< getYSize(); j++) {
	// 		if(j == 0){
	// 			std::cout << "-";
	// 		} else if(j == getYSize() -1){
	// 			std::cout << "-";
	// 		}
	// 	}
	// 	std::cout << " | ";
	// 	std::cout << std::endl;
	// }