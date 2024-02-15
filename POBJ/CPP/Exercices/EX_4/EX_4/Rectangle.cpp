#include "Rectangle.h"
#include <cmath>


// Constructeur
    Rectangle::Rectangle()
    {
    std::cout << "Constructeur du Rectangle" << std::endl;
    }

//Destructeur
    Rectangle::~Rectangle()
{
    std::cout << "Destructeur de Rectangle" << std::endl;
}

double Rectangle::CalculerSurface(double largeur, double hauteur)
{
    Surface = largeur * hauteur;
    return Surface;
}

double Rectangle::CalculerPerimetre(double largeur, double hauteur)
{
    Perimetre = 2 * (largeur + hauteur);
    return Perimetre;
}
