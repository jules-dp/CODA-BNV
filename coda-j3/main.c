#include <stdlib.h>
#include <stdio.h>



int main()
{
    int age;
    char nom;

    int annee = 2026 - age; 
    int annee1 = annee + 1;

    printf("Programme : Bonjour, quel est votre prénom ?\n");
    scanf("%s", nom);

    printf("Programme : Bonjour %s, quel est votre âge ?\n", nom);
    scanf("%d", &age);

    printf("Programme : %s, si vous êtes de la fin d'année, votre année de naissance est %d sinon c'est %d\n", nom, annee, annee1);

    return 0;
}