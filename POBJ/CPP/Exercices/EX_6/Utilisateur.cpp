#include "Utilisateur.h"
#include "Formes3D.h"  
#include <iostream>

using namespace std;

void Utilisateur::ChoisirForme(Formes3D& Forme)
{
	// Associer l'objet re�u en param�tre
	MaForme = &Forme;
}

void Utilisateur::TraiterForme()
{
	// V�rifier que MaForme n'est pas un pointeur nul avant de l'utiliser
	if (MaForme != nullptr) {
		// Appeler la m�thode SaisirInfos() de la classe Formes3D
		MaForme->SaisirInfos();

		// Appeler la m�thode CalculerVolume() de la classe Formes3D
		MaForme->CalculerVolume();

		// Appeler la m�thode AfficherVolume() de la classe Formes3D
		MaForme->AfficherVolume();
	}
	else {
		// G�rer le cas o� MaForme est un pointeur nul
		cout << "Erreur : Aucune forme s�lectionn�e." << endl;
	}
}
