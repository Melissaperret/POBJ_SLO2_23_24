#include "TriangleRectangle.h"
#include <cmath>


// Constructeur
TriangleRectangle :: TriangleRectangle()
{
    std::cout << "Constructeur du TriangleRectangle" << std::endl;
}

double TriangleRectangle::CalculerSurface(double base, double hauteur)
{
    Surface = 0.5 * base * hauteur;
    return Surface;  // Formule pour la surface d'un triangle rectangle (base * hauteur / 2), mais la division dans le code est moins bien que les multiplications 
}

double TriangleRectangle::CalculerPerimetre(double base, double hauteur)
{
    // Pour un triangle rectangle, il faudra également calculer l'hypoténuse 
    double hypotenuse = sqrt(base * base + hauteur * hauteur);
    Perimetre = base + hauteur + hypotenuse;
    return Perimetre; // Formule pour le périmètre d'un triangle rectangle
}
