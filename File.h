#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED
#include "Cellule.h"
typedef Cellule* File;
int initialiserFile();
File enfile(File f,int value);
File defiler(File f);

#endif // FILE_H_INCLUDED
