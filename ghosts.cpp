#include "ghosts.h"

char ghosts::getDirection()
{
	return direction;
}

bool ghosts::eat(pacman pac)
{
	if ((row == pac.getRow()) && (column == pac.getColumn()))
		return true;
}

ghosts::ghosts()
{

}

void ghosts::setDirection(char d)
{
	direction = d;
}