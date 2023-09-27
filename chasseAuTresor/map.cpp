#include <iostream>
#include "map.h"
#include <string>

CellType cells[largeur * longeur];
bool cellsExplored[longeur * largeur];

void cacherTresor()
{
	int r = rand() % (largeur * longeur);
	cells[r] = CellType::Treasure;
}

void drawPlayfield()
{
	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			CellType cell = cells[row * 4 + column];
			bool explored = cellsExplored[row * 4 + column];

			if (explored) {
				if (cell == CellType::Empty)
				{
					std::cout << "0";
				}
				else
				{
					std::cout << "X";
				}
			}
			else {
				std::cout << "-";
			}

		}
		std::cout << "\n";
	}
}

int validInput()
{
	while (1) { // boucle infinie. On sort avec le return.
		std::string inputString;
		std::getline(std::cin, inputString);
		bool tooLong = inputString.length() != 1;
		char c = inputString[0]; // take the fist character. If the string is empty, this will take the zero character that terminates the string.
		if (tooLong || c < '1' || c > '4') {
			std::cout << "le nombre doit etre compris entre 1 et 4\n";
		} else {
			return c - '0';
		}
	}
}

