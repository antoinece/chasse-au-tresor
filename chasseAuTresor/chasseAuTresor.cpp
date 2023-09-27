// chasseAuTresor.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

#include <iostream>
#include <string>
#include "map.h"

int main()
{
    srand(time(0));

    bool treasureFound = false;
    int nbEssai = 0;

    cacherTresor();
    cacherTresor();
    cacherTresor();

    bool foundTreasure = false;
    do
    {
        int x;
        int y;

        std::cout << "coordnees des recherches ?\n";
        std::cout << "coordonee X entre 1 et " << longeur << "?\n";
        x = validInput() - 1;
        std::cout << "coordonee Y entre 1 et " << longeur << "?\n";
        y = validInput() - 1;

        int cooordonees = x + y * 4;
        cellsExplored[cooordonees] = true;
        foundTreasure = cells[cooordonees] == CellType::Treasure;

        drawPlayfield();
        nbEssai++;

    } while (nbEssai < 5 && !foundTreasure);

    if (foundTreasure) {
        std::cout << "bravo tu as trouver le Treasure\n";
    } else {
        std::cout << "tu as predu\n";
    }
}


