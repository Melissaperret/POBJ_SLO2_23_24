// Canevas Ex2 SL228_POBJ language C++ 
// Visual Studio 2020
// 28.11.2023

#include <iostream>
#include <iomanip>
using namespace std;


// Fonction Extract


// Fonction AfficheB


// Fonction CalculSurfaceRectangle


int main (void)
{
	char UserAnswer;
	int ValA, ValB;
	// Variables pour test A, B et C
	

	// a adapter
	cout << "Exercice 2 : Huber Christian" << endl;


	do {
		cout << "Test A, B ou C, Q pour Quitter" << endl;
		cin >> UserAnswer;
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				cout << "TestA: entrez un nombre de secondes" << endl;
				cin >> ValA;
				
			break;

			case 'B':
			case 'b':
				cout << "TestB: entrez un nombre " <<  endl;
				cin >> ValB; 
				
			break;

			case 'C':
			case 'c':
				cout << "TestC: calculs surface " <<  endl;

				// a)	Avec 2 param�tres int 25 et 45
				
				// b)	Avec 2 param�tres double 23.25 et 44.33'
				
				// c)	Avec 4 param�tres int 20,20, 60,40
				

			break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}