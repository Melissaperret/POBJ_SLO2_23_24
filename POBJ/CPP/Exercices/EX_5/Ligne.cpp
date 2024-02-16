#include "Ligne.h"
#include <iostream>



void Ligne::EffectuerSaisie(int NoPoint)
{
    double X, Y;
    if (NoPoint == 1)
    {
        std::cout << "Entrez la position X et Y du début de la ligne: " << std::endl;
    }
    else
    {
        std::cout << "Entrez la position X et Y de la fin de la ligne: " << std::endl;
    }
    std::cin >> X >> Y;
    PairePoints[NoPoint - 1].SetXY(X, Y);
}

void Ligne::Dessiner()
{
    std::cout << "Dessin d'une Ligne:" << std::endl;
    std::cout << "Debut de la ligne: ";
    PairePoints[0].AfficherPoint();
    std::cout << "Fin de la ligne: ";
    PairePoints[1].AfficherPoint();
}

Ligne::Ligne()
{
    std::cout << "Constructeur de Ligne" << std::endl;
}

Ligne::~Ligne()
{
    std::cout << "Destructeur de Ligne" << std::endl;
}
