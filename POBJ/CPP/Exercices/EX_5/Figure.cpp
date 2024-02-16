#include "Figure.h"
#include <iostream>



void Figure::EffectuerSaisie(int NoPoint)
{
   
}

void Figure::Dessiner()
{
}

Figure::Figure()
{
    PairePoints[0].SetXY(0, 0);
    PairePoints[1].SetXY(0, 0);

    std::cout << "Constructeur de Figure" << std::endl;
}

Figure::~Figure()
{
    std::cout << "Destructeur de Figure" << std::endl;
}
