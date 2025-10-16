
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdint>

//Déclaration des constantes
using namespace std;

#define NOM  0
#define PRENOM  1
#define TELEPHONE  2

//déclaration des structures
struct entree {
string nom;
string prenom;
string telephone;
};

struct repertoire 
{
    vector<entree> data;
};

//Déclaration des fonctions
void newEntree(repertoire& r1, string nom, string prenom, string telephone);
void showAllEntree(repertoire r1);
void showEntree(entree e);
void searchEntree(repertoire r1, string searchEntree, uint8_t searchType);




int  main (void){
    //création du repertoire
    repertoire repertoireTel1;
    //ajout une nouvelles entrées au répertoire (nom, prénom, téléphone)
    newEntree(repertoireTel1, "ETIENNE", "Tom", "0612345678");
    newEntree(repertoireTel1, "DUPONT", "Jean", "0698765432");


    //affiche toutes les entrées du répertoire
    showAllEntree(repertoireTel1);
    newEntree(repertoireTel1, "MARTIN", "Alice", "0623456789");

    // Recherche dans le repertoire par nom prenom et telephone
    searchEntree(repertoireTel1, "MARTIN", NOM );
    searchEntree(repertoireTel1, "Jean", PRENOM );
    searchEntree(repertoireTel1, "0612345678", TELEPHONE );

    
    return 0;
}

/**
 * @brief Ajoute une nouvelle entrée au répertoire.
 * *
 * @param r1 Répertoire à modifier.
 * @param nom Nom de la personne.
 * @param prenom Prénom de la personne.
 * @param telephone Numéro de téléphone.
 */
void newEntree(repertoire& r1, string nom, string prenom, string telephone){
    r1.data.push_back({nom, prenom, telephone});
}

/**
 * @brief Affiche toutes les entrées du répertoire.
 * *
 * @param r1 Répertoire à afficher.
 */
void showAllEntree(repertoire r1){
    for (unsigned int i = 0; i < r1.data.size(); i++)
    {
        showEntree(r1.data[i]);
    }
}

/**
 * @brief Affiche une entrée du répertoire.
 * 
 * @param e Entrées à afficher.
 */
void showEntree(entree e){
    cout << e.nom << " " << e.prenom << " " << e.telephone << endl;
}

/**
 * @brief Recherche une entrée dans le répertoire selon le type de champ.
 * 
 * @param r1 Répertoire à parcourir.
 * @param searchEntree Valeur à rechercher.
 * @param searchType Type de champ à comparer (NOM, PRENOM, TELEPHONE).
 */
void searchEntree(repertoire r1, string searchEntree, uint8_t searchType){
    for (unsigned int i = 0; i < r1.data.size(); i++)
    {
        if (r1.data[i].nom == searchEntree && searchType == NOM){
            cout << "Entrée trouvée : ";
            showEntree(r1.data[i]);
        }
        if (r1.data[i].prenom == searchEntree  && searchType == PRENOM){
            cout << "Entrée trouvée : ";
            showEntree(r1.data[i]);
        }
        if (r1.data[i].telephone == searchEntree && searchType == TELEPHONE){
            cout << "Entrée trouvée : ";
            showEntree(r1.data[i]);
        }
    }
}


