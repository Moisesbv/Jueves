#include <stdio.h>
#include <stdlib.h>

struct Lista
{
char ch;
Lista *Sig;
};
int EsSubcadenaDeCadena (Lista *Subcadena, Lista *Cadena)
{
Lista *Puntero1, *Puntero2;
int Encontrado, Coincide;
if (Cadena == NULL)
return (Subcadena == NULL);
else
if (Subcadena == NULL)
return 1;
else
{
Encontrado = 0;
while ((Cadena != NULL) && (! Encontrado))
{
if (Cadena->ch != Subcadena->ch)
Cadena = Cadena->Sig;
else /* Intento de b�squeda de coincidencia*/
{
Puntero1 = Cadena->Sig;
Puntero2 = Subcadena->Sig;
Coincide = 1;
while ((Puntero1 != NULL) && (Puntero2 != NULL) && Coincide)
if (Puntero1->ch == Puntero2->ch)
{
Puntero1 = Puntero1->Sig;
Puntero2 = Puntero2->Sig ;
}
else
Coincide = 0;
if (! Coincide)
Cadena = Cadena->Sig ;
else
Encontrado = Puntero2 == NULL;
}
}
return Encontrado;
}
}
