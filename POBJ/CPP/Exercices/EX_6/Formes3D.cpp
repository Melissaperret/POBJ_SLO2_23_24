#include "Formes3D.h"
#include <iostream>
using namespace std;

Formes3D::Formes3D() : m_Infos{} {
	// Mettre à 0 les champs de m_infos
	std::cout << "Constructeur de Formes3D" << std::endl;
}


Formes3D::~Formes3D() {
	cout << "Destructeur de Formes3D" << std::endl;
	// Destructeur 
}

void Formes3D::SaisirInfos() {
	// Implémentez la saisie des informations ici (si nécessaire)
	cout << "SaisirInfos() de Formes3D" << std::endl;
}

void Formes3D::CalculerVolume() {
	// Implémentez le calcul du volume ici (si nécessaire)
	cout << "CalculerVolume() de Formes3D" << std::endl;
}

void Formes3D::AfficherVolume() {
	// Implémentez l'affichage du volume ici (si nécessaire)
	cout << "AfficherVolume() de Formes3D" << std::endl;
}
