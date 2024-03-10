#include "Utilisateur.h"
#include "Formes3D.h"  
#include <iostream>

using namespace std;

void Utilisateur::ChoisirForme(Formes3D& Forme)
{
	// Associer l'objet reçu en paramètre
	MaForme = &Forme;
}

void Utilisateur::TraiterForme()
{
	// Vérifier que MaForme n'est pas un pointeur nul avant de l'utiliser
	if (MaForme != nullptr) {
		// Appeler la méthode SaisirInfos() de la classe Formes3D
		MaForme->SaisirInfos();

		// Appeler la méthode CalculerVolume() de la classe Formes3D
		MaForme->CalculerVolume();

		// Appeler la méthode AfficherVolume() de la classe Formes3D
		MaForme->AfficherVolume();
	}
	else {
		// Gérer le cas où MaForme est un pointeur nul
		cout << "Erreur : Aucune forme sélectionnée." << endl;
	}
}
