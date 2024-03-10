#ifndef Cone_h
#define Cone_h

#include "Formes3D.h"


class Cone : public Formes3D {

 public:

    void SaisirInfos();

    void CalculerVolume();

    Cone();

    ~Cone();

    void AfficherVolume();
};

#endif // Cone_h
