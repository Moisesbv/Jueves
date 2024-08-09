#include <stdio.h>
#include <stdlib.h>

void contarCaracteres(char *cadena, int *count_mayusculas, int *count_minusculas, int *count_numeros);

int main(void)
{
    char cadena[100];
    int count_mayusculas = 0, count_minusculas = 0, count_numeros = 0;

    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    contarCaracteres(cadena, &count_mayusculas, &count_minusculas, &count_numeros);

    printf("\nResultados:\n");
    printf("Letras mayúsculas: %d\n", count_mayusculas);
    printf("Letras minúsculas: %d\n", count_minusculas);
    printf("Números: %d\n", count_numeros);

    return 0;
}

void contarCaracteres(char *cadena, int *count_mayusculas, int *count_minusculas, int *count_numeros)
{
    int i = 0;

    while (cadena[i] != '\0')
    {
        if (isupper(cadena[i]))
        {
            (*count_mayusculas)++;
        }
        else if (islower(cadena[i]))
        {
            (*count_minusculas)++;
        }
        else if (isdigit(cadena[i]))
        {
            (*count_numeros)++;
        }
        i++;
    }
}
