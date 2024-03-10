#include "Sphere.h"
#include <iostream>
using namespace std;

Sphere::Sphere() : Formes3D() {
	cout << "Constructeur de Sphere" << std::endl;
}

Sphere::~Sphere() {
	// Destructeur 
}

void Sphere::SaisirInfos() {
	cout << "Entrez le rayon de la Sphere : ";
	cin >> m_Infos.Rayon; // S'assurer que Rayon est un champ de ParamFormes3D dans la classe
}

void Sphere::CalculerVolume() {
	// Le volume d'une sphère est donné par V = (4/3) * pi * Rayon^3
	m_Volume = (4.0 / 3.0) * 3.14159 * m_Infos.Rayon * m_Infos.Rayon * m_Infos.Rayon;
}

void Sphere::AfficherVolume() {
	cout << "Il s'agit d'une Sphere dont le rayon vaut " << m_Infos.Rayon
		<< " et le volume est de " << m_Volume << std::endl;
}
