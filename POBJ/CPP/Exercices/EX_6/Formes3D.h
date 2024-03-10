#ifndef Formes3D_h
#define Formes3D_h

#include "ParamFormes3D.h"


class Formes3D {

 public:

    virtual void SaisirInfos();

    virtual void CalculerVolume();

    virtual void AfficherVolume();

    Formes3D();

    virtual ~Formes3D();


 protected:
    double m_Volume;
    ParamFormes3D m_Infos;

};

#endif // Formes3D_h
