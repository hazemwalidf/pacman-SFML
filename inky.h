#pragma once
#include "ghosts.h"
class inky: public ghosts
{
private:

public:
	inky();
	inky(int initialRow, int initialColumn);
	void drawOnWindow(RenderWindow& window);
	void move(char direction, int arr[][19], pacman);
};

