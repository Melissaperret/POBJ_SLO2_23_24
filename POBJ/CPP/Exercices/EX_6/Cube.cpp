#include "Cube.h"
#include <iostream>
using namespace std;

Cube::Cube() : Formes3D() {
	cout << "Constructeur de Cube" << std::endl;
}

Cube::~Cube() {
	// On peut ajouter des opérations de destruction spécifiques au Cube si nécessaire
}

void Cube::SaisirInfos() {
	cout << "Entrez la longueur de l'arrete du Cube : ";
	cin >> m_Infos.Longueur; // S'assurer que Longueur est un champ de ParamFormes3D dans la classe
}

void Cube::CalculerVolume() {
	// Le volume d'un cube est donné par V = coté ou longueur^3
	m_Volume = m_Infos.Longueur * m_Infos.Longueur * m_Infos.Longueur;
}

void Cube::AfficherVolume() {
	cout << "Il s'agit d'un Cube dont l'arrete vaut " << m_Infos.Longueur
		<< " et le volume est de " << m_Volume << std::endl;
}
