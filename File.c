#include <stdio.h>
#include <stdlib.h>
#include "File.h"
///Les fonctions
int initialiserFile()
{
    return NULL;
}
File enfile(File f,int value)
{
    Cellule *nouvelleCellule=NULL;
    nouvelleCellule=malloc(sizeof(Cellule));
    nouvelleCellule->valeur=value;
    nouvelleCellule->suivant=NULL;
    if(estVide(f))
    {
        f=nouvelleCellule;
        return f;
    }
    else
    {
        Cellule *actuel=NULL;
        actuel=f;
        while(actuel->suivant!=NULL)
        {
            actuel=actuel->suivant;
        }
        actuel->suivant=nouvelleCellule;
        return f;
    }
}
File defiler(File f)
{
    Cellule *actuel=NULL;
    actuel=f;
    while(actuel->suivant!=NULL)
    {
        actuel=actuel->suivant;
    }
    Cellule *celluleASupprimer=NULL;
    celluleASupprimer=actuel->suivant;
    actuel->suivant=NULL;
    free(celluleASupprimer);
    return f;
}
