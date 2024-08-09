#include <stdio.h>
#include <stdlib.h>

/* Decodifica. El programa decodifica una cadena de caracteres compuesta por n�meros y letras. */
void interpreta(char *); /* Prototipo de funci�n. */

void main(void)
{
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, sizeof(cad), stdin);
    interpreta(cad);
}

/* Esta funci�n se utiliza para decodificar la cadena de caracteres. */
void interpreta(char *cadena)
{
    int i = 0, j, k;
    while (cadena[i] != '\0')
    {
        if (isalpha(cadena[i])) /* Se utiliza isalpha para observar si el caracter es una letra. */
        {
            k = cadena[i - 1] - '0';
            /* En la variable entera k se almacena el ascii del n�mero �convertido en caracter� que nos interesa, menos '0' que corresponde al valor num�rico del d�gito 0 en ASCII. */
            for (j = 0; j < k; j++)
                putchar(cadena[i]);
        }
        i++;
    }
}
