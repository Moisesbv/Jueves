#include <stdio.h>
#include <stdlib.h>

/* Calcula longitud en forma recursiva. El programa calcula de manera recursiva la longitud de la cadena sin utilizar la función strlen. */
int cuenta(char *);

/* Prototipo de función. */
void main(void)
{
    int i;
    char cad[50];
    printf("\nIngrese la cadena de caracteres: ");
    fgets(cad, sizeof(cad), stdin);
    if (cad[strlen(cad) - 1] == '\n') /* Eliminar el salto de línea final generado por fgets si existe */
        cad[strlen(cad) - 1] = '\0';
    i = cuenta(cad); /* Llamada a la función para calcular la longitud de la cadena */
    printf("\nLongitud de la cadena: %d", i);
}

/* Esta función calcula la longitud de la cadena en forma recursiva. Es importante tener conocimientos tanto de pilas como de recursividad para comprender la solución propuesta, aunque ésta sea muy simple. Observa que mientras no lleguemos al último caracter de la cadena, incrementamos la cuenta en uno y llamamos a la función con el siguiente caracter. */
int cuenta(char *cadena)
{
    if (cadena[0] == '\0')
        return 0;
    else
        return (1 + cuenta(&cadena[1]));
}
