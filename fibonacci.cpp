#include <iostream>

//Déclaration des fonctions
void  calculFibonnachi(unsigned int u0,unsigned  int u1, unsigned int* tabFibonnachi);
void  afficheFibonnachi(unsigned int* tabFibonnachi);

//Déclaration des constantes
using namespace std;
#define NOMBREFIBONACHI  20 // Nomnbre de terme de la suite de Fibonacci à calculer
#define U0 1 // Premier terme de la suite de Fibonacci
#define U1 1 // Deuxième terme de la suite de Fibonacci


int  main (void){
    //Déclaration des variables
    unsigned int tabfibonnachi[NOMBREFIBONACHI]; // création du tableau pour stocker les valeurs de la suite de Fibonacci
    unsigned int *ptrTabfibonnachi = tabfibonnachi; // Pointeur vers le tableau
    calculFibonnachi(U0, U1, ptrTabfibonnachi); //calcul des 20 premier terme de la suite de Fibonacci
    afficheFibonnachi(ptrTabfibonnachi); //Affichage des 20 premier terme de la suite de Fibonacci
    return 0;
}

/**
 * @brief Calcule les termes de la suite de Fibonacci et les stocke dans un tableau.
 * 
 * @param u0 Premier terme de la suite.
 * @param u1 Deuxième terme de la suite.
 * @param tabFibonnachi Tableau où seront stockés les termes calculés.
 */
void  calculFibonnachi(unsigned int u0,unsigned  int u1, unsigned int* tabFibonnachi){
    tabFibonnachi[0] = u0;
    tabFibonnachi[1] = u1;

    for (int i = 2; i < NOMBREFIBONACHI; i++){
        tabFibonnachi[i] = tabFibonnachi[i-1] + tabFibonnachi[i-2]; // Calcul des termes de la suite de Fibonacci et stockage dans le tableau
    }
}

/**
 * @brief Affiche les termes de la suite de Fibonacci stockés dans un tableau.
 * 
 * @param tabFibonnachi Tableau contenant les termes à afficher.
 */
void  afficheFibonnachi(unsigned int* tabFibonnachi){
    cout << "Suite de Fibonacci : " << endl;
    for (int i = 0; i < NOMBREFIBONACHI; i++){
        cout << tabFibonnachi[i] <<"; "; // Affichage des termes de la suite de Fibonacci stocker dans le taleau
    }
    cout << endl; // retour à la ligne après l'affichage de la suite
}

