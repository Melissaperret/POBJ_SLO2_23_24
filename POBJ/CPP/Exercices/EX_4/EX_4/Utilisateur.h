#ifndef Utilisateur_h
#define Utilisateur_h

#include "FormesGeometriques.h"

//class FormesGeometriques;

class Utilisateur {

 public:

     void AfficherResultats();

    int ChoisirForme(int CodeForme);

    void SaisirLesParametres();

    void ExecuterLesCalculs();

    ~Utilisateur();


 private:
    int m_CodeFormeChoisie;
    double m_x1;        
    double m_x2;


 public:

    /**
     * @element-type FormesGeometriques
     */
     FormesGeometriques* myFormesGeometriques;
};

#endif // Utilisateur_h
