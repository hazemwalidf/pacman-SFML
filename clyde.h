#pragma once
#include "ghosts.h"
#include <cstdlib>
#include <ctime>
class clyde: public ghosts
{
private:

public:
	clyde();
	clyde(int initialRow, int initialColumn);
	void drawOnWindow(RenderWindow& window);
	void move( int arr[][19]);
};

