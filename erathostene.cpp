#include <iostream>
#include <cmath>

//Déclaration des fonctions
int verificationPremier(unsigned int entierActuel);
void afficherPremier(unsigned int entierActuel, bool estPremier);



//Déclaration des constantes
using namespace std;
const int nbEntierTotal = 100; // Nombre d'entier à vérifier (n)



int  main (void){
    unsigned int tabEntier[nbEntierTotal]; // création du tableau pour stocker les ventiers
    unsigned int *ptrTabEntier = tabEntier; // Pointeur vers le tableau; 

    for (int i = 0 ; i < nbEntierTotal; i++){
        tabEntier[i] = i+1; // Initialisation du tableau avec les entiers de 1 à nbEntierTotal
        verificationPremier(tabEntier[i]);
    }
}

/**
 * @brief Vérifie si un entier est premier et affiche le résultat.
 * 
 * @param entierActuel Entier à tester.
 * @return 1 si l'entier est premier, 0 sinon.
 */
int verificationPremier(unsigned int entierActuel){
    if (entierActuel < 2) {
        afficherPremier(entierActuel, false);
        return 0;
    }
    for (int i = 2; i <= sqrt(entierActuel); i++){ 
        if ((entierActuel % i == 0)){
            afficherPremier(entierActuel, false);
            return 0;
        }
    }
    afficherPremier(entierActuel, true);
    return 1;
}

/**
 * @brief Affiche si un entier est premier ou non avec une couleur.
 *
 * Affiche le nombre entierActuel en vert s'il est premier, en rouge sinon.
 *
 * @param entierActuel Entier à afficher.
 * @param estPremier Booléen indiquant si l'entier est premier.
 */
void afficherPremier(unsigned int entierActuel, bool estPremier){
    if (estPremier) {
        cout << "\033[1;32m" << entierActuel << "\033[0m  est un nombre premier" << endl; // affiche en vert
    }else {
        cout << "\033[1;31m" << entierActuel << "\033[0m  n'est pas un nombre premier" << endl; // affiche en rouge
    }  
}



