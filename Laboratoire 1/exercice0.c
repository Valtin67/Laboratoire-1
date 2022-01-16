/*
Fichier: Laboratoire1
Auteur: Valentin PETER
Date 16-01-2022

Description: 10 exercices de pratiques
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/*
	Exercice 0
	Auteur: Anis Boubaker
	Date 04-09-2018

	Description: programme qui calcule l'age.
	*/

	int annee_actuelle; //Annee de la date d'aujourd'hui
	int annee_naissance; //Annee de naissance de l'usager
	int age = 0;

	printf("Veuillez saisir l'annee actuele: ");
	scanf("%d", &annee_actuelle);

	printf("Veuiller saisir votre annee de naissance: ");
	scanf("%d", &annee_naissance);

	age = annee_actuelle - annee_naissance;
	printf("au cas ou vous l'auriez oublie, vous avez: %d ans.\n", age);

	/*
	Exercice1
	Auteur: Valentin PETER
	Date: 16/01/2022

	Description : Programme qui affiche la phrase en latin < ab ovo usque ad mala >.
	*/

	printf("ab ovo usque ad mala ");

	/*
	Exercice2
	Auteur: Valentin PETER
	Date: 16/01/2022

	Description : Programme qui convertie les watt en calorie par seconde
	*/

	double calorie_par_sec = 0.2388459; //valeur d'un watt en calorie par seconde
	int watt = 0; // definition de la variable watt
	double calcul_conversion = 0;

	printf("Veuillez saisir le nombre de watt à convertir en calorie par seconde: ");
	scanf("%d", &watt);

	calcul_conversion = watt * calorie_par_sec;

	printf("Vous avez donc: %f calorie par seconde.\n", calcul_conversion);

	/*
	Exercice3
	Auteur: Valentin PETER
	Date: 16/01/2022

	Description : Programme sur la loi d'Ohm
	*/

	int tension = 0;
	int resistance = 0;
	int intensite = 0;

	printf("Saisir la valeur de la tension : ");
	scanf("%d", &tension);

	printf("Saisir la valeur de la resistance : ");
	scanf("%d", &resistance);

	intensite = tension / resistance;

	printf("La valeur de l'intensite est : %d A\n", intensite);

	/*
	Exercice4
	Auteur: Valentin PETER
	Date: 16/01/2022

	Description : Programme sur la loi d'Ohm
	*/

	double air = 0;
	double pi = 3.14159265359;
	int rayon = 0;

	printf("Saisir la valeur du rayon: ");
	scanf("%d", &rayon);

	air = pi * rayon * rayon;

	printf("L'air est de: %f m^2\n", air);

	/*
	Exercice5
	Auteur: Valentin PETER
	Date: 16/01/2022

	Description : Programme sur la loi d'Ohm
	*/


	//Bonjour

	system("pause");
	return EXIT_SUCCESS;

}



