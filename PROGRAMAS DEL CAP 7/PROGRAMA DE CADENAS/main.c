#include <stdio.h>
#include <stdlib.h>


void convertirCadena(char *cadena);

int main(void)
{
    char cadena[100];

    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    convertirCadena(cadena);

    printf("Cadena modificada: %s\n", cadena);

    return 0;
}

void convertirCadena(char *cadena)
{
    int i = 0;
    while (cadena[i] != '\0')
    {
        if (islower(cadena[i])) /* Si es min�scula, convertir a may�scula. */
        {
            cadena[i] = toupper(cadena[i]);
        }
        else if (isupper(cadena[i])) /* Si es may�scula, convertir a min�scula. */
        {
            cadena[i] = tolower(cadena[i]);
        }
        i++;
    }
}
