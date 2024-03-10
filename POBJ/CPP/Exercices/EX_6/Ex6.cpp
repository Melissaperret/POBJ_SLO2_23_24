// Canevas Ex6 SL228_POBJ CPP 
// Visual Studio 2015
// 11.01.2017 C. Huber

#include <iostream>
#include "HexUtil.h"
using namespace std;



int main (void)
{
	char UserAnswer;
	
	// Variables pour test B
	

	cout << "Exercice 6 : xx" << endl;
	do {
		cout << "Test A ou B , Q pour Quitter" << endl;
		// Ajouter la vérification de la saisie
		cin >> UserAnswer;
		if (cin.fail()) {
			cout << "Erreur de saisie. Veuillez entrer une lettre." << endl;
			cin.clear();  // Effacer le drapeau d'erreur
			cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignorer la saisie incorrecte
			continue;  // Revenir au début de la boucle
		}
		
		switch (UserAnswer) {
			case 'A':
			case 'a':
				cout << "TestA: HexUtil" << endl;

				// Création d'un objet HexUtil
				HexUtil MyHexUtil;

                // Utiliser SaisirInt et afficher les octets d'un int
                int valeurInt;
                bool verificationValInt = false;

                while (!verificationValInt) {
                    cout << "Entrez un int : ";
                    cin >> valeurInt;

                    if (cin.fail()) {
                        cout << "Erreur de saisie. Veuillez entrer un nombre entier." << endl;
                        cin.clear();  // Effacer le drapeau d'erreur
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignorer la saisie incorrecte
                    }
                    else {
                        verificationValInt = true;
                    }
                }

                cout << endl << "Affichage des 4 octets d'un int : " << endl;
                MyHexUtil.ShowHex(valeurInt);

                // Utiliser SaisirShort et afficher les octets d'un short
                short valeurShort;
                bool verificationValShort = false;

                while (!verificationValShort) {
                    cout << "Entrez un short : ";
                    cin >> valeurShort;

                    if (cin.fail()) {
                        cout << "Erreur de saisie. Veuillez entrer un nombre entier." << endl;
                        cin.clear();  // Effacer le drapeau d'erreur
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignorer la saisie incorrecte
                    }
                    else {
                        verificationValShort = true;
                    }
                }

                cout << endl << "Affichage des 2 octets d'un short : " << endl;
                MyHexUtil.ShowHex(valeurShort);

                // Utiliser SaisirFloat et afficher les octets d'un float
                float valeurFloat;
                bool verificationValFloat = false;

                while (!verificationValFloat) {
                    cout << "Entrez un float : ";
                    cin >> valeurFloat;

                    if (cin.fail()) {
                        cout << "Erreur de saisie. Veuillez entrer un nombre decimal." << endl;
                        cin.clear();  // Effacer le drapeau d'erreur
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignorer la saisie incorrecte
                    }
                    else {
                        verificationValFloat = true;
                    }
                }

                cout << endl << "Affichage des 4 octets d'un float : " << endl;
                MyHexUtil.ShowHex(valeurFloat);

                // Utiliser SaisirDouble et afficher les octets d'un double
                double valeurDouble;
                bool verificationValDouble = false;

                while (!verificationValDouble) {
                    cout << "Entrez un double : ";
                    cin >> valeurDouble;

                    if (cin.fail()) {
                        cout << "Erreur de saisie. Veuillez entrer un nombre decimal." << endl;
                        cin.clear();  // Effacer le drapeau d'erreur
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignorer la saisie incorrecte
                    }
                    else {
                        verificationValDouble = true;
                    }
                }

                cout << endl << "Affichage des 8 octets d'un double : " << endl;
                MyHexUtil.ShowHex(valeurDouble);

                break;

			/*case 'B':
			case 'b':
				cout << "TestB: Figures3D " <<  endl;
				
			break;*/

			

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}