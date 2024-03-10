// Canevas Ex6 SL228_POBJ CPP 
// Visual Studio 2015
// 11.01.2017 C. Huber

#include <iostream>
#include "HexUtil.h"
#include "Cube.h"
#include "Sphere.h"
#include "Cone.h"
#include "Utilisateur.h"  

using namespace std;

// Création d'objets Utilisateur
Utilisateur Albert;
Utilisateur Bernard;
Utilisateur Christian;

// Création des objets des formes
Cube monCube;
Sphere maSphere;
Cone monCone;


int main(void)
{
	char choixUtilisateur;

	// Variables pour test B


	cout << "Exercice 6 : Perret Melissa" << endl;
	do {
		cout << "Test A ou B , Q pour Quitter" << endl;
		// Ajouter la vérification de la saisie
		cin >> choixUtilisateur;
		if (cin.fail()) {
			cout << "Erreur de saisie. Veuillez entrer une lettre." << endl;
			cin.clear();  // Effacer le drapeau d'erreur
			cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignorer la saisie incorrecte
			continue;  // Revenir au début de la boucle
		}

		switch (choixUtilisateur)
		{
		case 'A':
		case 'a':
			{
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

			while (!verificationValDouble)
			{
				cout << "Entrez un double : ";
				cin >> valeurDouble;

				if (cin.fail()) 
				{
					cout << "Erreur de saisie. Veuillez entrer un nombre decimal." << endl;
					cin.clear();  // Effacer le drapeau d'erreur
					cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignorer la saisie incorrecte
					// La ligne ci-dessus permet d'ignorer tous les caractères restants dans le tampon d'entrée (cin)
					// jusqu'à la prochaine occurrence d'un caractère de nouvelle ligne ('\n').
					// Cela assure une gestion propre du flux d'entrée après une saisie, évitant des erreurs de lecture ultérieures.
				}
				else {
					verificationValDouble = true;
				}
			}

			cout << endl << "Affichage des 8 octets d'un double : " << endl;
			MyHexUtil.ShowHex(valeurDouble);

			}
			break;
		

		case 'B':
		case 'b':
		{
			cout << "TestB: Figures3D " << endl;

			// Appels de la méthode ChoisirForme pour chaque utilisateur
			Albert.ChoisirForme(monCube);
			Bernard.ChoisirForme(maSphere);
			Christian.ChoisirForme(monCone);

			// Appels de la méthode TraiterForme pour chaque utilisateur
			Albert.TraiterForme();
			Bernard.TraiterForme();
			Christian.TraiterForme();
		}
			break;

	} 


	} while (!(choixUtilisateur == 'Q' || choixUtilisateur == 'q'));

	return (0);
}