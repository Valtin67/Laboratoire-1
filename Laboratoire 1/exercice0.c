/*
Fichier: Laboratoire1
Auteur: Valentin PETER
Date 16-01-2022

Description: 10 exercices de pratiques
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


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

	printf("ab ovo usque ad mala \n");


	/*
	Exercice2
	Auteur: Valentin PETER
	Date: 16/01/2022

	Description : Programme qui convertie les watt en calorie par seconde
	*/

	double calorie_par_sec = 0.2388459; //valeur d'un watt en calorie par seconde
	int watt = 0; // definition de la variable watt
	double calcul_conversion = 0;

	printf("Veuillez saisir le nombre de watt a convertir en calorie par seconde: ");
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
	int rayon_exo4 = 0;

	printf("Saisir la valeur du rayon: ");
	scanf("%d", &rayon_exo4);

	air = pi * rayon_exo4 * rayon_exo4;

	printf("L'air est de: %f m^2\n", air);

	/*
	Exercice5
	Auteur: Valentin PETER
	Date: 16/01/2022

	Description : Programme sur la loi d'Ohm
	*/

	int masse = 0;
	double acc_de_pesenteur = 9.81;
	double masse_volumique_eau = 1.2;
	int rayon_exo5 = 0;
	double vitesse = 0;

	printf("Saisir la masse: ");
	scanf("%d", &masse);

	printf("Saisir le rayon: ");
	scanf("%d", &rayon_exo5);

	vitesse = sqrt((2.0 * masse * acc_de_pesenteur) / (0.5 * masse_volumique_eau * pi * rayon_exo5 * rayon_exo5));

	printf("La vitesse est: %f \n", vitesse);

	/*
	Exercice6
	Auteur: Valentin PETER
	Date: 16/01/2022

	Description : Programme division euclidienne
	*/

	int nombre_etudiant = 0;
	int taille_equipe = 0;
	int nbr_equipe = 0;
	int reste = 0;

	printf("Saisir le nombre d'etudiant: ");
	scanf("%d", &nombre_etudiant);

	printf("Saisir le nombre d'equipe souhaite: ");
	scanf("%d", &nbr_equipe);

	reste = nombre_etudiant;

	while (nombre_etudiant >= nbr_equipe) 
	{
		nombre_etudiant = nombre_etudiant - nbr_equipe;
		taille_equipe++;
	}

	reste = reste - taille_equipe * nbr_equipe;

	printf("On obtient des equipes de %d personnes, par contre il en reste %d sur le banc...\n", taille_equipe, reste);

	/*
	Exercice7
	Auteur: Valentin PETER
	Date: 17/01/2022

	Description : Programme qui convertit les pennus en livre et shillings
	*/

	int penny = 0;
	int shilling = 0;
	int livre = 0;
	int reste = 0;

	printf("Saisir le nombre de pennys: ");
	scanf("%d", &penny);

	livre = penny / 240;
	reste = penny % 240;

	shilling = reste / 12;
	penny = reste % 12;


	printf("On a %d livre \n",livre);
	printf("On a %d shilling \n", shilling);
	printf("On a %d penny \n",penny);

	/*
	Exercice8
	Auteur: Valentin PETER
	Date: 17/01/2022

	Description : Programme qui affiche le plus petit des 2 nombres
	*/
	
	int nbr_1 = 0;
	int nbr_2 = 0;

	printf("Saisir le nombre 1: ");
	scanf("%d", &nbr_1);

	printf("Saisir le nombre 2: ");
	scanf("%d", &nbr_2);

	if (nbr_1 < nbr_2)
	{
		printf("C'est %d qui est le plus petit\n", nbr_1);
	}
	else if (nbr_2 < nbr_1)
	{
		printf("C'est %d qui est le plus petit\n", nbr_2);
	}
	else
	{
		printf("Les deux nombre sont egaux\n");
	}
	
	/*
	Exercice9
	Auteur: Valentin PETER
	Date: 17/01/2022

	Description : Programme qui affiche le plus grand des 2 nombres
	*/

	int nbr_1 = 0;
	int nbr_2 = 0;

	printf("Saisir le nombre 1: ");
	scanf("%d", &nbr_1);

	printf("Saisir le nombre 2: ");
	scanf("%d", &nbr_2);

	if (nbr_1 > nbr_2)
	{
		printf("C'est %d qui est le plus grand\n", nbr_1);
	}
	else if (nbr_2 > nbr_1)
	{
		printf("C'est %d qui est le plus grand\n", nbr_2);
	}
	else
	{
		printf("Les deux nombre sont egaux\n");
	}

	/*
	Exercice10
	Auteur: Valentin PETER
	Date: 17/01/2022

	Description : Programme qui affiche le nombre de reynold
	*/

	int vitesse = 0;
	int dimenssion = 0;
	int viscosite = 0;
	int reynold = 0;

	printf("Saisir la vitesse: ");
	scanf("%d", &vitesse);

	printf("Saisir la dimenssion: ");
	scanf("%d", &dimenssion);

	printf("Saisir la viscosite: ");
	scanf("%d", &viscosite);

	reynold = (vitesse * dimenssion) / viscosite;

		if (reynold < 2000)
	{
		printf("On a un ecoulement laminaire\n");
	}
		else if (reynold > 4000)
	{
		printf("On a un ecoulement turbulent\n");
	}
		else
	{
		printf("On a un ecoulement transitoire\n");
	}

	/*
	Exercice11
	Auteur: Valentin PETER
	Date: 17/01/2022

	Description : Programme qui affiche le volume maximal de béton qui peut alors être produit.
	*/

	int ciment = 0;
	int sable = 0;
	int gravier = 0;

	printf("Saisir la masse de ciment: ");
	scanf("%d", &ciment);

	printf("Saisir la masse de sable: ");
	scanf("%d", &sable);

	printf("Saisir la masse de gravier: ");
	scanf("%d", &gravier);

	if (ciment < sable < gravier)
	{
		ciment = ciment / 350;

		printf("On peut faire un max de: %d m3 de beton\n",ciment);
	}

	else if (sable < ciment < gravier)
	{
		sable = sable / 680;

		printf("On peut faire un max de: %d m3 de beton\n", sable);
	}

	else if (gravier < ciment < sable)
	{
		gravier = gravier / 1175;

		printf("On peut faire un max de: %d m3 de beton\n", gravier);
	}

	else
	{
		printf("On peut faire 1m3 de beton\n");
	}
	system("pause");
	return EXIT_SUCCESS;

}



