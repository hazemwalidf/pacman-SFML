#include "clyde.h"

clyde::clyde()
{

}

clyde::clyde(int initialRow, int initialColumn)
{
	texture.loadFromFile("clyde.jpg");
	row = initialRow;
	column = initialColumn;
	shape.setSize(Vector2f(35, 35));
	shape.setPosition(50 + 35 * initialColumn, 50 + 35 * initialRow);
	Sprite sprite(texture, sf::IntRect(0, 0, 35, 35));
	shape.setTexture(&texture);
}

void clyde::drawOnWindow(RenderWindow& window)
{
	window.draw(shape);

}

void clyde::move(int arr[][19])
{
	srand(time(NULL));
	int d;
	d = (rand()%4)+1;

	if (d == 1)
	{
		if ((arr[row - 1][column] > -1))	//up
		{
			shape.move(0, -35);
		}
	}

	if (d == 2)
	{
		if ((arr[row + 1][column] > -1))
		{
			shape.move(0, 35);
		}
	}

	if (d == 3)
	{
		if ((arr[row][column - 1] > -1))
		{
			shape.move(-35, 0);
		}
	}

	if (d == 4)	//right
	{
		if ((arr[row][column + 1] > -1))
		{
			shape.move(35, 0);
		}
	}
}
