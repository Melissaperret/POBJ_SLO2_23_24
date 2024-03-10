#include "Cone.h"
#include <iostream>
using namespace std;

Cone::Cone() : Formes3D() {
	cout << "Constructeur de Cone" << std::endl;
}

Cone::~Cone() {
	// Destructeur 
}

void Cone::SaisirInfos() {
	cout << "Entrez le rayon du Cone : ";
	cin >> m_Infos.Rayon; // S'assurer que Rayon est un champ de ParamFormes3D dans la classe

	cout << "Entrez la hauteur du Cone : ";
	cin >> m_Infos.Hauteur; // S'assurer que Hauteur est un champ de ParamFormes3D dans la classe
}

void Cone::CalculerVolume() {
	// Le volume d'un cône est donné par V = (1/3) * pi * Rayon^2 * Hauteur
	m_Volume = (1.0 / 3.0) * 3.14159 * m_Infos.Rayon * m_Infos.Rayon * m_Infos.Hauteur;
}

void Cone::AfficherVolume() {
	cout << "Il s'agit d'un Cone dont le rayon vaut " << m_Infos.Rayon
		<< " et la hauteur vaut " << m_Infos.Hauteur
		<< ", et le volume est de " << m_Volume << std::endl;
}


