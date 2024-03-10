#ifndef Sphere_h
#define Sphere_h

#include "Formes3D.h"


class Sphere : public Formes3D {

 public:

    void SaisirInfos();

    void CalculerVolume();

    Sphere();

    ~Sphere();

    void AfficherVolume();
};

#endif // Sphere_h
