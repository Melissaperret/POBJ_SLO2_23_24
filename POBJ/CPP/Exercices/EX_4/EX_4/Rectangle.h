#ifndef Rectangle_h
#define Rectangle_h

#include "FormesGeometriques.h"


class Rectangle : public FormesGeometriques {

  


 public:

    

     double CalculerSurface(double largeur, double hauteur);

    double CalculerPerimetre(double largeur, double hauteur);

    // Constructeur
    Rectangle();

    //Destructeur 
    ~Rectangle();
};

#endif // Rectangle_h
