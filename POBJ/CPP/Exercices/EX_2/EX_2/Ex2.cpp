// Canevas Ex2 SL228_POBJ language C++ 
// Visual Studio 2020
// 28.11.2023

#include <iostream>
#include <iomanip>
using namespace std;


// Fonction Extract
unsigned short int Extract(unsigned long totalSecondes, unsigned short int heures, unsigned short int minutes) 
{
	const unsigned short int SECONDES_EN_HEURES = 3600;
	const unsigned short int SECONDES_EN_MINUTES = 60;

	heures = totalSecondes / SECONDES_EN_HEURES;
	totalSecondes %= SECONDES_EN_HEURES;

	minutes = totalSecondes / SECONDES_EN_MINUTES;
	unsigned short int seconds = totalSecondes % SECONDES_EN_MINUTES;

	return seconds;
}

// Fonction AfficheB
void AfficheB(long valeur, char format = 'D', short int tailleChamp = 5)
{
	if (format != 'H')  // Vérifie si le format n'est pas hexadécimal
	{
		// Affiche la valeur en décimal avec une largeur de champ spécifiée
		cout << "Nombre = " << setw(tailleChamp) << dec << valeur << " en decimal" << endl;
	}
	else
	{
		// Si le format est hexadécimal, affiche la valeur en hexadécimal avec une largeur de champ spécifiée
		cout << "Nombre = " << setw(tailleChamp) << hex << valeur << " en hexa" << endl;
	}
}
// Fonction CalculSurfaceRectangle
int CalculSurfaceRectangleInt(int hauteur, int largeur)
{
	return hauteur * largeur;
}
double CalculSurfaceRectangleDouble(double hauteur, double largeur)
{
	return hauteur * largeur;
}
int CalculSurfaceRectangleAvecQuatreArguments(int X1, int Y1, int X2, int Y2)
{
	return (abs(X2 - X1) * abs(Y2 - Y1));
}


int main (void)
{
	char UserAnswer;
	int ValA; 
	long ValB; 

	// Variables pour test A, B et C
	unsigned short int resteSecondes = 0; // Déclaration de resteSecondes en dehors du switch
	unsigned short int heures = 0; // Initialisation de heures à 0
	unsigned short int minutes = 0; // Initialisation de minutes à 0

	// a adapter
	cout << "Exercice 2 : Melissa Perret" << endl;


	do {
		cout << "Test A, B ou C, Q pour Quitter" << endl;
		cin >> UserAnswer;
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				cout << "TestA: entrez un nombre de secondes" << endl;
				cin >> ValA;

				resteSecondes = Extract(ValA, heures, minutes);
				cout << "ValA = " << ValA << " NbHeures = " << heures << " NbMinutes = " << minutes << " NbSecondes = " << resteSecondes << endl;
				
			break;

			case 'B':
			case 'b':
				cout << "TestB: entrez un nombre " <<  endl;
				cin >> ValB; 

				// Appel de la fonction avec un seul paramètre
				AfficheB(ValB);

				// Appel de la fonction avec le 2ème paramètre 'H'
				AfficheB(ValB, 'H');

				// Appel de la fonction avec 'H' et 8
				AfficheB(ValB, 'H', 8);

			break;

			case 'C':
			case 'c':
			cout << "TestC: calculs surface " <<  endl;

				// a)	Avec 2 paramètres int 25 et 45
				cout << "int hauteur = 25   int largeur = 45   surface = " << CalculSurfaceRectangleInt(25, 45) << endl;
				
				// b)	Avec 2 paramètres double 23.25 et 44.33'
				cout << "double hauteur = 23.25   double largeur = 44.33   surface = " << CalculSurfaceRectangleDouble(23.25, 44.33) << endl;

				// c)	Avec 4 paramètres int 20,20, 60,40
				std::cout << "X1 = 20, Y1 = 20, X2 = 60, Y2 = 40   surface = " << CalculSurfaceRectangleAvecQuatreArguments(20, 20, 60, 40) << std::endl;

			break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}