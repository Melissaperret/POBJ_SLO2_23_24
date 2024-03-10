#ifndef Cube_h
#define Cube_h

#include "Formes3D.h"


class Cube : public Formes3D {

 public:

    void SaisirInfos();

    void CalculerVolume();

    Cube();

    ~Cube();

    void AfficherVolume();
};

#endif // Cube_h
