#include <stdio.h>
#include <stdlib.h>
#include "Cellule.h"
int estVide(Cellule *c)
{
    return c==NULL;
}
int sommet(Cellule *c)
{
    if(!estVide(c))
    {
        return c->valeur;
    }
    else
    {
        return 0;
    }
}
