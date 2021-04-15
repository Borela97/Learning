#include "SnakeGame.h"

void Snake::setUp(){
	std::cout << "Irei criar o jogo :)" << std::endl;
	MapSnake = new MapEntity(20, 20);
	Snake = new SnakeEntity(3,1);

	MapSnake -> addEntity(Snake);
	std::cout << "Mapa Criado" << std::endl;
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