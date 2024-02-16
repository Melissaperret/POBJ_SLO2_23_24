#include "Ellipse.h"
#include <iostream>



void Ellipse::EffectuerSaisie(int NoPoint)
{
    double X, Y;
    if (NoPoint == 1)
    {
        std::cout << "Entrez la position X et Y du coin haut gauche du rectangle enveloppant l'Ellipse: " << std::endl;
    }
    else
    {
        std::cout << "Entrez la position X et Y du coin bas droite du rectangle enveloppant l'Ellipse: " << std::endl;
    }
    std::cin >> X >> Y;
    PairePoints[NoPoint - 1].SetXY(X, Y);
}

void Ellipse::Dessiner()
{
    std::cout << "Dessin d'une Ellipse:" << std::endl;
    std::cout << "Position du coin haut gauche du rectangle enveloppant l'Ellipse: ";
    PairePoints[0].AfficherPoint();
    std::cout << "Position du coin bas droite du rectangle enveloppant l'Ellipse: ";
    PairePoints[1].AfficherPoint();
}

Ellipse::Ellipse()
{
    std::cout << "Constructeur d'Ellipse" << std::endl;
}

Ellipse::~Ellipse()
{
    std::cout << "Destructeur d'Ellipse" << std::endl;
}
