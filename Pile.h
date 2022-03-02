#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED
#include "Cellule.h"
typedef Cellule* Pile;
///Les fonctions
Pile initialiserPile();
Pile empiler(Pile p,int value);
Pile depiler(Pile p);
#endif // PILE_H_INCLUDED
