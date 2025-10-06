#include <iostream>
#include <vector>
#include <cmath>


//Déclaration des constantes
using namespace std;
#define SQUARE    // Carre 20 x 20
//#define RECTANGLE // Rectangle 40 (largeur) x 20 (hauteur)
//#define LOSANGE// Losange centré à (0, 0)


#ifdef SQUARE
    const int COORD_A_X = -10;
    const int COORD_A_Y = -10;

    const int COORD_B_X = -10;
    const int COORD_B_Y = 10;

    const int COORD_C_X = 10;
    const int COORD_C_Y = 10;

    const int COORD_D_X = 10;
    const int COORD_D_Y = -10;
#endif


#ifdef RECTANGLE
    const int COORD_A_X = -20;
    const int COORD_A_Y = -10;

    const int COORD_B_X = -20;
    const int COORD_B_Y =  10;

    const int COORD_C_X =  20;
    const int COORD_C_Y =  10;

    const int COORD_D_X =  20;
    const int COORD_D_Y = -10;
#endif


#ifdef LOSANGE
    const int COORD_A_X = -10;
    const int COORD_A_Y =  0;

    const int COORD_B_X =  0;
    const int COORD_B_Y =  10;

    const int COORD_C_X =  10;
    const int COORD_C_Y =  0;

    const int COORD_D_X =  0;
    const int COORD_D_Y = -10;
#endif


//Déclaration des structures
struct point // structure pour un point dans un plan
{
    int x; 
    int y;
    char nom;
};

struct polygone // structure pour un polygone défini par une liste de points (sommets)
{
    vector<point> CoordSommets;
};

//Déclaration des fonctions
float calculPerimetre(polygone poly);



int  main (void){
    //déclaration des variables
    //création des points
    point ptA;
    ptA.x = COORD_A_X;
    ptA.y = COORD_A_Y;
    ptA.nom ='A';

    point ptB;
    ptB.x = COORD_B_X;
    ptB.y = COORD_B_Y;
    ptB.nom ='B';

    point ptC;
    ptC.x = COORD_C_X;
    ptC.y = COORD_C_Y;
    ptC.nom ='C';

    point ptD;
    ptD.x = COORD_D_X;
    ptD.y = COORD_D_Y;
    ptD.nom ='D';

    //création du polygone
    polygone carre;

    //ajout des points au polygone
    carre.CoordSommets.push_back(ptA);
    carre.CoordSommets.push_back(ptB);
    carre.CoordSommets.push_back(ptC);
    carre.CoordSommets.push_back(ptD);

    cout << "Le périmètre du carré est de : " << calculPerimetre(carre) << endl;

    
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
 float calculPerimetre(polygone poly){
    float perimetre = 0;


    for (unsigned int i = 0; i < 3; i++)
    {
        perimetre += sqrt(pow((poly.CoordSommets[i+1].x-poly.CoordSommets[i].x),2) + pow((poly.CoordSommets[i+1].y-poly.CoordSommets[i].y),2) ); // calcul les 3 premier sommets
    }
        perimetre += sqrt(pow((poly.CoordSommets[0].x-poly.CoordSommets[3].x),2) + pow((poly.CoordSommets[0].y-poly.CoordSommets[3].y),2) ); // rajoute le dernier


    return perimetre;
}


