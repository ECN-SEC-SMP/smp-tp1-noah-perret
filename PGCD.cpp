#include <iostream>

//Déclaration des fonctions
unsigned int calculPGCD( int nombreA,   int nombreB);

//Déclaration des constantes
using namespace std;
#define A 16 // Premier chiffre du PGCD
#define B 8 // Deuxième tchiffre du PGCD


int  main (void){
    //Déclaration des variables

    cout << "Le PGCD de " << A << " et " << B << " est : " << calculPGCD(abs(A), abs(B)) << endl; //calcul du PGCD de A et B
    return 0;
}

/**
 * @brief Calcule le Plus Grand Commun Diviseur (PGCD) de deux entiers.
 *
 * Utilise l'algorithme d'Euclide pour déterminer le PGCD de nombreA et nombreB.
 *
 * @param nombreA Premier entier.
 * @param nombreB Deuxième entier.
 * @return Le PGCD des deux entiers.
 */
unsigned int calculPGCD( int nombreA,   int nombreB){
    while (nombreB != 0)
    {
        int temp = nombreB;
        nombreB = nombreA % nombreB;
        nombreA = temp;

    }
    return nombreA;
}


