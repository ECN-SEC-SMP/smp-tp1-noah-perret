#include <iostream>

//Déclaration des fonctions
int moyenneCapteur(int valActuel);
int minCapteur(int min,int valActuel);
int maxCapteur(int max,int valActuel);

//Déclaration des constantes
using namespace std;



int  main (void){
    int moyenneActuelle, donneeCapteur = 0;
    int maxActuelle = -2147483647; // Initialisation de la valeur minimale à une valeur élevée
    int minActuelle = 2147483647; // Initialisation de la valeur minimale à une valeur élevée

    // Acquisition des données 
    cin >> donneeCapteur;
    while (donneeCapteur != -1)
    {
        minActuelle = minCapteur( minActuelle, donneeCapteur ); // Mise à jour de la valeur minimale
        maxActuelle = maxCapteur( maxActuelle, donneeCapteur ); // Mise à jour de la valeur maximale
        moyenneActuelle = moyenneCapteur( donneeCapteur);   // Mise à jour de la valeur moyenne
        cin >> donneeCapteur;
    }

    // Affichage des résultats
    cout << "Valeur minimale : " << minActuelle << endl;
    cout << "Valeur maximale : " << maxActuelle << endl;
    cout << "Valeur moyenne : " << moyenneActuelle << endl;

    return 0;
}

/**
 * @brief Met à jour la valeur minimale du capteur.
 * 
 * @param min Valeur minimale actuelle
 * @param valActuel Nouvelle valeur du capteur.
 * @return Nouvelle valeur minimale.
 */
int minCapteur(int min, int valActuel){
    if (valActuel < min) {
        min = valActuel; // SI la valeur actuelle est inférieure au minimum, on met à jour le minimum
    }
    return min;
}


/**
 * @brief Met à jour la valeur maximale du capteur.
 * 
 * @param max Valeur maximale actuelle
 * @param valActuel Nouvelle valeur du capteur.
 * @return Nouvelle valeur maximale.
 */
int maxCapteur(int max, int valActuel){
    if (valActuel > max) {
        max = valActuel; // SI la valeur actuelle est supérieure au maximum, on met à jour le maximum
    }
    return max;
}

/**
 * @brief Met à jour la valeur moyenne du capteur.
 * 
 * @param max Valeur moyenne actuelle
 * @param valActuel Nouvelle valeur du capteur.
 * @return Nouvelle valeur moyenne.
 */
int moyenneCapteur(int valActuel){
    // Déclaration des variables
    static int nbval = 0;
    static int moyennetotal = 0;

    nbval++; // Incrémentation du nombre de valeurs
    moyennetotal += valActuel; // Ajout de la valeur actuelle au total
    return moyennetotal/nbval;
}
