#ifndef CELLULE_H_INCLUDED
#define CELLULE_H_INCLUDED
typedef struct Cellule{
int valeur;
struct Cellule *suivant;
}Cellule;
///Les fonctions

int estVide(Cellule *c);
int sommet(Cellule *c);
#endif // CELLULE_H_INCLUDED
