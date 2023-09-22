// chasseAuTresor.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

#include <iostream>
#include <string>
#include "map.h"

int main()
{
    bool treasureFound = false;
    int cooordonees;
    int nbEssai = 0;
    cacherTresor();

    do
    {
        int x;
        int y;

        std::cout << "coordnees des recherches ?\n";
        std::cout << "coordonee X entre 1 et " << longeur << "?\n";
        x = validImput();
        std::cout << "coordonee Y entre 1 et " << longeur << "?\n";
        y = validImput();

        cooordonees = (x - 1) * 4 + (y - 1);
        if (cases[cooordonees] == 1)
        {
            casesJouer[cooordonees] = 2;
            std::cout << "bravo tu as trouver le tresor\n";
            drawPlayfield();
            return 0;
        }
        else
        {
            casesJouer[cooordonees] = 1;
        }

        drawPlayfield();
        nbEssai++;

    } while (nbEssai < 5);

    std::cout << "tu as predu\n";
}


