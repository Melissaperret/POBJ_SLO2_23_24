#include "Formes3D.h"
#include <iostream>
using namespace std;

Formes3D::Formes3D() : m_Infos{} {
	// Mettre � 0 les champs de m_infos
	std::cout << "Constructeur de Formes3D" << std::endl;
}


Formes3D::~Formes3D() {
	cout << "Destructeur de Formes3D" << std::endl;
	// Destructeur 
}

void Formes3D::SaisirInfos() {
	// Impl�mentez la saisie des informations ici (si n�cessaire)
	cout << "SaisirInfos() de Formes3D" << std::endl;
}

void Formes3D::CalculerVolume() {
	// Impl�mentez le calcul du volume ici (si n�cessaire)
	cout << "CalculerVolume() de Formes3D" << std::endl;
}

void Formes3D::AfficherVolume() {
	// Impl�mentez l'affichage du volume ici (si n�cessaire)
	cout << "AfficherVolume() de Formes3D" << std::endl;
}
