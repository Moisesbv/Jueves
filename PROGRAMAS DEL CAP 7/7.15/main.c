#include <stdio.h>
#include <stdlib.h>

/* Decodifica. El programa decodifica una cadena de caracteres compuesta por números y letras. */
void interpreta(char *); /* Prototipo de función. */

void main(void)
{
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, sizeof(cad), stdin);
    interpreta(cad);
}

/* Esta función se utiliza para decodificar la cadena de caracteres. */
void interpreta(char *cadena)
{
    int i = 0, j, k;
    while (cadena[i] != '\0')
    {
        if (isalpha(cadena[i])) /* Se utiliza isalpha para observar si el caracter es una letra. */
        {
            k = cadena[i - 1] - '0';
            /* En la variable entera k se almacena el ascii del número —convertido en caracter— que nos interesa, menos '0' que corresponde al valor numérico del dígito 0 en ASCII. */
            for (j = 0; j < k; j++)
                putchar(cadena[i]);
        }
        i++;
    }
}
