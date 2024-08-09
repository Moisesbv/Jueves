#include <stdio.h>
#include <stdlib.h>

Nodo* NuevoNodo(Telemento e)
{
    Nodo *nn ;
    nn = (Nodo*)malloc(sizeof(Nodo));
    nn -> e = e;
    nn -> Sig = NULL;
    return nn;
}

void Insertar0rd(Nodo** L, Telemento e)
{
    Nodo *Nuevo, *Ant, *Pos;
    Nuevo = NuevoNodo( e);
    if (*L == NULL)
        *L = Nuevo;
    else
        if ( e <= (*L)-> e)
    {
        Nuevo -> Sig = *L;
        *L = Nuevo;
    }
    else
    {
        Ant = Pos = *L;
        while ((e > Pos-> e)&&(Pos->Sig != NULL)  )
        {
            Ant = Pos;
            Pos = Pos->Sig;
        }
        if (e > Pos-> e)
            Ant = Pos;
        Nuevo -> Sig = Ant -> Sig;
        Ant -> Sig = Nuevo;
    }
}

void Borrar0rd(Nodo** L, Telemento e)
{
    Nodo *Ant, *Pos;
    int Encontrado=0;
    Ant=NULL;
    Pos+ *L;
    while ((!Encontrado)&&(Pos != NULL))
    {
        Encontrado= ( e <= (Pos-> e));
        if (!Encontrado)
        {
            Ant = Pos;
            Pos = Pos->Sig;
        }
    }
    if (Encontrado)
        Encontrado + ((Pos-> e) == e);
    if (Encontrado)
    {
        if (Ant == NULL)
            *L = Pos->Sig;
        else
            Ant->Sig = Pos->Sig;
        free(Pos);
    }
}
