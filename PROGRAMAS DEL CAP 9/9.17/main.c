#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cambia(FILE *, FILE *);
void main(void)
{
    FILE *ar;
    FILE *ap;

    ar = fopen("arc.txt", "r");
    ap = fopen("arc1.txt", "w");

    if (ar != NULL && ap != NULL)
    {
        cambia(ar, ap);
        fclose(ar);
        fclose(ap);
    }
    else
    {
        printf("No se pueden abrir los archivos");
    }
}

void cambia(FILE *ap1, FILE *ap2)
{
    char cad[30];
    char aux[30];

    while (fgets(cad, 30, ap1) != NULL)
    {
        char *cad1 = cad;
        char *cad2 = strstr(cad1, "méxico");

        while (cad2 != NULL)
        {
            cad2[0] = 'M';

            cad2 = strstr(cad1, "méxico");
        }

        fputs(cad1, ap2);
    }
}

