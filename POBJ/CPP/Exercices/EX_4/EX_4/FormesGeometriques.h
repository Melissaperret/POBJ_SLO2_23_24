#ifndef FormesGeometriques_h
#define FormesGeometriques_h
#include <iostream>

class FormesGeometriques {

 public:

    virtual double CalculerSurface(double x1, double x2);

    virtual double CalculerPerimetre(double x1, double x2);

    double GetSurface();

    double GetPerimetre();


    FormesGeometriques()
    {
        Surface = 0.0;
        Perimetre = 0.0;
        std::cout << "Constructeur de FormesGeometriques" << std::endl;
    }
    //virtual ~FormesGeometriques();

 protected:
    double Surface;
    double Perimetre;

};

#endif // FormesGeometriques_h
