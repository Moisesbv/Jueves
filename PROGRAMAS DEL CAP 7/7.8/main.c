#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Min�sculas y may�sculas. El programa, al recibir como dato un arreglo unidimensional de tipo cadena de caracteres, determina el n�mero de min�sculas y may�sculas que hay en cada cadena. */
void minymay(char *cad); /* Prototipo de funci�n. */

void main(void)
{
    int i, n;
    char FRA[20][50]; /* Observa c�mo se declara el arreglo unidimensional de cadena de caracteres. */

    printf("Ingrese el n�mero de filas del arreglo: ");
    scanf("%d", &n);

    /* Limpieza del buffer de entrada */
    while(getchar() != '\n');

    for (i = 0; i < n; i++)
    {
        /* Para cada fila se lee la cadena correspondiente. */
        printf("Ingrese la l�nea %d de texto: ", i + 1);
        fgets(FRA[i], 50, stdin);
        FRA[i][strlen(FRA[i]) - 1] = '\0'; // Eliminar el salto de l�nea al final de la cadena
    }

    printf("\n\n");

    for (i = 0; i < n; i++)
        minymay(FRA[i]);
}

void minymay(char *cadena) /* Esta funci�n se utiliza para calcular el n�mero de min�sculas y may�sculas que hay en cada cadena. */
{
    int i = 0, mi = 0, ma = 0;

    while (cadena[i] != '\0')
    {
        if (islower(cadena[i]))
            mi++;
        else if (isupper(cadena[i]))
            ma++;
        i++;
    }

    printf("\n\nN�mero de letras min�sculas: %d", mi);
    printf("\nN�mero de letras may�sculas: %d", ma);
}

