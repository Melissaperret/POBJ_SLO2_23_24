#include "Utilisateur.h"
#include "TriangleRectangle.h"
#include "Cercle.h"
#include "Rectangle.h"
#include <iostream>




void Utilisateur::AfficherResultats()
{
    if (m_CodeFormeChoisie < 3)
    {
        if (m_CodeFormeChoisie == 0)
        {
            // Affichage pour le TriangleRectangle
            std::cout << "Pour un TriangleRectangle base = " << m_x1 << " hauteur = " << m_x2
                << " surface = " << myFormesGeometriques->GetSurface() << " perimetre = " << myFormesGeometriques->GetPerimetre() << std::endl;
        }
        else if (m_CodeFormeChoisie == 1)
        {
            // Affichage pour le Rectangle
            std::cout << "Pour un Rectangle largeur = " << m_x1 << " hauteur = " << m_x2
                << " surface = " << myFormesGeometriques->GetSurface() << " perimetre = " << myFormesGeometriques->GetPerimetre() << std::endl;
        }
        else if (m_CodeFormeChoisie == 2)
        {
            // Affichage pour le Cercle
            std::cout << "Pour un Cercle diametre = " << m_x1
                << " surface = " << myFormesGeometriques->GetSurface() << " perimetre = " << myFormesGeometriques->GetPerimetre() << std::endl;
        }
        else
        {
            // Gestion d'une valeur de m_CodeFormeChoisie non prise en charge
            std::cerr << "Code de forme non pris en charge." << std::endl;
        }
    }
    else
    {
        std::cerr << "Erreur : Aucune forme choisie pour afficher les resultats." << std::endl;
    }

    
}

int Utilisateur::ChoisirForme(int CodeForme)
{
    //{
    //    Cercle test = Cercle(); // Mémoire gérée automatiquement
    //}

    //{
    //    Cercle* test = new Cercle(); // Mémoire gérée manuellement
    //    delete test; // Je libère la zone mémoire pointée par le pointeur
    //}


    m_CodeFormeChoisie = CodeForme;

    if (m_CodeFormeChoisie == 0)
    {
        myFormesGeometriques = new TriangleRectangle();
    }
    else if (m_CodeFormeChoisie == 1)
    {
        myFormesGeometriques = new Rectangle();
    }
    else if (m_CodeFormeChoisie == 2)
    {
        myFormesGeometriques = new Cercle();
    }
    return m_CodeFormeChoisie;
}

void Utilisateur::SaisirLesParametres()
{
    if (m_CodeFormeChoisie == 0)
    {
        // Saisie des paramètres pour le TriangleRectangle
        std::cout << "Entrer la valeur de la base du TriangleRectangle : ";
        std::cin >> m_x1;

        std::cout << "Entrer la valeur de la hauteur du TriangleRectangle : ";
        std::cin >> m_x2;
    }
    else if (m_CodeFormeChoisie == 1)
    {
        // Saisie des paramètres pour le TriangleRectangle
        std::cout << "Entrer la valeur de la largeur du Rectangle : ";
        std::cin >> m_x1;

        std::cout << "Entrer la valeur de la hauteur du Rectangle : ";
        std::cin >> m_x2;
    }   
    else if (m_CodeFormeChoisie == 2)
    {
        // Saisie des paramètres pour le TriangleRectangle
        std::cout << "Entrer la valeur du diametre du Cercle : ";
        std::cin >> m_x1;
        m_x2 = 0;
    }
    else
    {
        // Gestion d'une valeur de m_CodeFormeChoisie non prise en charge
        std::cerr << "Code de forme non pris en charge." << std::endl;
    }
}

void Utilisateur::ExecuterLesCalculs()
{
    {
        // Vérifier si m_CodeFormeChoisie est valide
        if (m_CodeFormeChoisie < 3)
        {
            // Appeler les méthodes de calcul de la classe FormesGeometrique
             myFormesGeometriques->CalculerSurface(m_x1, m_x2);
             myFormesGeometriques->CalculerPerimetre(m_x1, m_x2);
        }
        else
        {
            std::cerr << "Erreur : Aucune forme choisie pour effectuer les calculs." << std::endl;
        }
    }


}

//Destructeur
Utilisateur::~Utilisateur()
{
    //std::cout << "Destructeur de Utilisateur " << myFormesGeometriques << std::endl;
    delete myFormesGeometriques; // Libérer la mémoire pointée par le pointeur
}
