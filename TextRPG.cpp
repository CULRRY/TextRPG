#include <iostream>
#include "Game.h"
using namespace std;


int main()
{
	srand(static_cast<unsigned int>(time(0)));
	Game game;
	game.Init();

	while (true)
	{
		game.Update();
	}
	

}
