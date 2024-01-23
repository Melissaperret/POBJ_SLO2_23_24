//-----------------------------------------------------------------------------------//
// Nom du projet 		: POBJ DEMO C++
// Nom du fichier 		: demoSLO.cpp
// Date de cr�ation 	: 21.11.2023
// Date de modification : xx.xx.20xx
//
// Auteur 				: Philou (Ph. Bovey)
//
// Description          : 
//
// Remarques :          : 
//----------------------------------------------------------------------------------//
//-- librairie standart --// 
//#include <iostream>								// <stdio.h>
#include <string>

//-- librarire personnelle --// 
#include "Classdemo.h"


//-- programme principale --//
void main()
{
	//-- d�claration de variable --//
	//-- type primitif --// 
	//-- entier --//
	bool valG = true;			//-> 1 octet
	char valD;			//-> 1 octet
	short valA;			//-> 2 octet
	int valX;			//-> 4 octet 
	long valE;			//-> 4 octet 

	//-- reels --//
	float valC;		 //-> 4 octet 
	double valB;	 //-> 8 octet 

	//-- class --// 
	std::string chaine, chaine2;

	//-- msg user --// 
	std::cout << "HELLO SLO !! \n" << std::endl;

	//-- prendre une valeur du clavier --//
	std::cin >> valD;		//-> exemple un caract�re 
	std::cin >> chaine;		//-> exemple chaine de caract�re 
	std::cin >> valB;		//-> exemple valeur

	chaine2 = chaine;			// copie d'un objet ->

	valX = chaine2.length();	//chercher la longueur d'une chaine de caract�re 

	valA = chaine.find("on");	// chercher une occurence 



}