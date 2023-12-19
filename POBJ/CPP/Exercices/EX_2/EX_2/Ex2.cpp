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
void AfficheB(int ValA, unsigned short int heures, unsigned short int minutes, unsigned short int resteSecondes) 
{
	cout << "ValA = " << ValA << " NbHeures = " << heures << " NbMinutes = " << minutes << " NbSecondes = " << resteSecondes << endl;
}

// Fonction CalculSurfaceRectangle


int main (void)
{
	char UserAnswer;
	int ValA, ValB;
	// Variables pour test A, B et C
	unsigned short int resteSecondes = 0; // Déclaration de resteSecondes en dehors du switch
	unsigned short int heures, minutes;
	unsigned short int heures = 0; // Initialisation de heures à 0
	unsigned short int minutes = 0; // Initialisation de minutes à 0

	// a adapter
	cout << "Exercice 2 : Mélissa Perret" << endl;


	do {
		cout << "Test A, B ou C, Q pour Quitter" << endl;
		cin >> UserAnswer;
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				cout << "TestA: entrez un nombre de secondes" << endl;
				cin >> ValA;

				resteSecondes = Extract(ValA, heures, minutes);
				AfficheB(ValA, heures, minutes, resteSecondes);
				
			break;

			//case 'B':
			//case 'b':
			//	cout << "TestB: entrez un nombre " <<  endl;
			//	cin >> ValB; 
			//	
			//break;

			//case 'C':
			//case 'c':
			//	cout << "TestC: calculs surface " <<  endl;

				// a)	Avec 2 paramètres int 25 et 45
				
				// b)	Avec 2 paramètres double 23.25 et 44.33'
				
				// c)	Avec 4 paramètres int 20,20, 60,40
				

			break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}