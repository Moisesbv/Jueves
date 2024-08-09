#include <stdio.h>
#include <stdlib.h>

int longitud(char *); /* Prototipo de función. */

void main(void)
{
    int i, n, l = -1, p, t;
    char cad[50], FRA[20][50];

    printf("\nIngrese el número de filas del arreglo: ");
    scanf("%d", &n);

    getchar(); // Consumir el carácter de nueva línea pendiente en el buffer

    for (i = 0; i < n; i++)
    {
        printf("Ingrese la línea %d de texto. Máximo 50 caracteres: ", i + 1);
        fgets(FRA[i], sizeof(FRA[i]), stdin); /* Se lee la cadena de caracteres dentro del ciclo. */

        // Eliminar el salto de línea final de la cadena leída por fgets si existe
        FRA[i][strcspn(FRA[i], "\n")] = '\0';
    }

    printf("\n");

    for (i = 0; i < n; i++)
    {
        strcpy(cad, FRA[i]);
        t = longitud(cad);

        if (t > l)
        {
            l = t;
            p = i;
        }
    }

    printf("La cadena con mayor longitud es: ");
    puts(FRA[p]);
    printf("Longitud: %d\n", l);
}

int longitud(char *cadena)
/* Esta función calcula la longitud de la cadena. */
{
    int cue = 0;

    while (cadena[cue] != '\0')
        cue++;

    return cue;
}
