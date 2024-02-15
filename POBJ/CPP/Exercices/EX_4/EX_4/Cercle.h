#ifndef Cercle_h
#define Cercle_h

#include "FormesGeometriques.h"


class Cercle : public FormesGeometriques {

   

 public:

    double CalculerSurface(double diametre, double null);

    double CalculerPerimetre(double diametre, double null);

    // Constructeur
    Cercle();

    // Destructeur
    ~Cercle(); 

};

#endif // Cercle_h
