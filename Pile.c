#include <stdio.h>
#include <stdlib.h>
#include "Pile.h"
#include "Cellule.h"
///Les fonctions
Pile initialiserPile()
{
    return NULL;
}
Pile empiler(Pile p,int value)
{
    Cellule *nouvelleCellule=NULL;
    nouvelleCellule=malloc(sizeof(Cellule));
    nouvelleCellule->valeur=value;
    if(estVide(p))
    {
        nouvelleCellule->suivant=NULL;
        p=nouvelleCellule;
        return p;
    }
    else
    {
        nouvelleCellule->suivant=p;
        p=nouvelleCellule;
        return p;
    }
}
Pile depiler(Pile p)
{
    if(!estVide(p))
    {
        Cellule *actuel=NULL;
        actuel=p;
        p=p->suivant;
        free(actuel);
        return p;
    }
    else
    {
        return p;
    }
}
