#include "Rectangle.h"
#include <iostream>



void Rectangle::EffectuerSaisie(int NoPoint)
{
    double X, Y;
    if (NoPoint == 1)
    {
        std::cout << "Entrez la position X et Y du coin haut gauche du rectangle: " << std::endl;
    }
    else
    {
        std::cout << "Entrez la position X et Y du coin bas droite du rectangle: " << std::endl;
    }
    std::cin >> X >> Y;
    PairePoints[NoPoint - 1].SetXY(X, Y);
}

void Rectangle::Dessiner()
{
    std::cout << "Dessin d'un Rectangle:" << std::endl;
    std::cout << "Position du coin haut gauche du rectangle: ";
    PairePoints[0].AfficherPoint();
    std::cout << "Position du coin bas droite du rectangle: ";
    PairePoints[1].AfficherPoint();
}

Rectangle::Rectangle()
{
    std::cout << "Constructeur de Rectangle" << std::endl;
}

Rectangle::~Rectangle()
{
    std::cout << "Destructeur de Rectangle" << std::endl;
}
