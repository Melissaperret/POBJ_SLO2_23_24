// Canevas Ex4  SL228_POBJ  CPP
// M.Perret 23.01.2024

#include <iostream>


#include "Utilisateur.h"

int main(void)
{
    Utilisateur UserA, UserB, UserC;
    std::cout << "Cours CPP exercice 4, Melissa " << std::endl;


    // Actions pour l'utilisateur UserA (TriangleRectangle)
    UserA.ChoisirForme(0);
    UserA.SaisirLesParametres();
    UserA.ExecuterLesCalculs();
    UserA.AfficherResultats();

    // Actions pour l'utilisateur UserB (Rectangle)
    UserB.ChoisirForme(1);
    UserB.SaisirLesParametres();
    UserB.ExecuterLesCalculs();
    UserB.AfficherResultats();

    // Actions pour l'utilisateur UserC (Cercle)
    UserC.ChoisirForme(2);
    UserC.SaisirLesParametres();
    UserC.ExecuterLesCalculs();
    UserC.AfficherResultats();

    return 0;
}