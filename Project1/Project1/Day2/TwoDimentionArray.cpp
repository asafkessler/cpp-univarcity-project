#include <iostream>
using namespace std;
#define WORLD_WIDTH 20
#define WORLD_HIGHT 20

typedef enum{
	road = ' ',
	wall = '#'
}WorldPices;

int main() {

	
	char map[WORLD_HIGHT][WORLD_WIDTH]; // left culoms right rows

	// create the roads
	for (int firstIndex = 0; firstIndex < WORLD_HIGHT; firstIndex++) {
		for (int secondIndex = 0; secondIndex < WORLD_WIDTH; secondIndex++){
			map[firstIndex][secondIndex] = WorldPices::road;// scope resulotion
		}
	}

	// create the wall
	for (int firstIndex = 0; firstIndex < WORLD_HIGHT; firstIndex++) {
		map[0][firstIndex] = WorldPices::wall;
		map[firstIndex][0] = WorldPices::wall;
		map[firstIndex][WORLD_HIGHT - 1] = WorldPices::wall;
		map[WORLD_HIGHT - 1][firstIndex] = WorldPices::wall;
	}

	// print the world
	for (int firstIndex = 0; firstIndex < WORLD_HIGHT; firstIndex++) {
		for (int secondIndex = 0; secondIndex < WORLD_WIDTH; secondIndex++){
			cout << map[firstIndex][secondIndex];
		}
		cout << endl;
	}


	getchar();
	getchar();

}
