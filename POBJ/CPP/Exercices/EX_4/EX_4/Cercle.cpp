#define _USE_MATH_DEFINES

#include "Cercle.h"
#include <cmath>

//Constructeur
Cercle::Cercle()
    {
    std::cout << "Constructeur de Cercle" << std::endl;
    }

//Destructeur
Cercle::~Cercle()
{
    std::cout << "Destructeur de Cercle" << std::endl;
}


double Cercle::CalculerSurface(double diametre, double null)
{
    double rayon = diametre * 0.5;  //diamètre /2
    Surface = M_PI * rayon * rayon;
    return Surface;
}

double Cercle::CalculerPerimetre(double diametre, double null)
{
    Perimetre = M_PI * diametre;
    return Perimetre;
}
