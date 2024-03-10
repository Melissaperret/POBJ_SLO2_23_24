#ifndef Utilisateur_h
#define Utilisateur_h

#include "Formes3D.h"


class Utilisateur {

 public:

    void ChoisirForme(Formes3D &Forme);

    void TraiterForme();

 public:

    Formes3D *MaForme;
};

#endif // Utilisateur_h
