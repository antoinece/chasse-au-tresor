#include <iostream>
#include "map.h"
#include <string>

int cases[largeur * longeur];
int casesJouer[longeur * largeur];

void cacherTresor()
{
	int cases[largeur * longeur];
	int r;
	srand(time(0));
	r = rand() % (largeur * longeur);
	cases[r] = 1;
}

void drawPlayfield()
{
	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			int cases_states = casesJouer[row * 4 + column];

			if (cases_states == 0)
			{
				std::cout << "-";
			}
			else if (cases_states == 1)
			{
				std::cout << "0";
			}
			else
			{
				std::cout << "X";
			}
		}
		std::cout << "\n";
	}
}

int validImput()
{
	const std::string digits = "1234";
	std::string imputString;
	do
	{
		std::getline(std::cin, imputString);
		for (char c : imputString)
		{
			if (digits.find(tolower(c)) == std::string::npos)
			{
				break;
			}
			else
			{
				if (imputString == "1")
				{
					return 1;
				}
				else if (imputString == "2")
				{
					return 2;
				}
				else if (imputString == "3")
				{
					return 3;
				}
				else if (imputString == "4")
				{
					return 4;
				}
				else
				{
					break;
				}
			}
		}
		std::cout << "le nombre doit etre compris entre 1 et 4\n";
	} while (1<2);
}

