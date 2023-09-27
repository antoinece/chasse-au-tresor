#pragma once

#define largeur  4
#define longeur  4

void drawPlayfield();
int validInput();
void cacherTresor();

enum class CellType
{
	Empty = 0,
	Treasure,
};

extern CellType cells[largeur * longeur];
extern bool cellsExplored[longeur * largeur];
