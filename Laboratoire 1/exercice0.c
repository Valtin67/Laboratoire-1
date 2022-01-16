/*
Fichier: exercice0.c
Auteur: Anis Boubaker
Date 04-09-2018

Description: programme qui calcule l'age.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int annee_actuelle; //Annee de la date d'aujourd'hui
	int annee_naissance; //Annee de naissance de l'usager
	int age = 0;

	printf("Veuillez saisir l'annee actuele: ");
	scanf("%d", &annee_actuelle);

	printf("Veuiller saisir votre annee de naissance: ");
	scanf("%d", &annee_naissance);

	age = annee_actuelle - annee_naissance;
	printf("au cas ou vous l'auriez oublie, vous avez: %d ans.\n", age);

	system("pause");
	return EXIT_SUCCESS;
}



