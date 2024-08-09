#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Funciones para el manejo de caracteres de la biblioteca stdlib.h. */
void main(void)
{
    int i;
    double d;
    long l;
    char cad0[20], *cad1;

    printf("\nIngrese una cadena de caracteres: ");
    fgets(cad0, sizeof(cad0), stdin); /* Ingrese una cadena de caracteres utilizando fgets. */
    cad0[strcspn(cad0, "\n")] = '\0'; /* Elimina el salto de línea al final de cad0. */

    i = atoi(cad0); /* Convierte la cadena cad0 a entero utilizando atoi. */
    printf("\n%s \t %d", cad0, i+3); /* Imprime cad0 y el valor de i+3. */

    printf("\nIngrese una cadena de caracteres: ");
    fgets(cad0, sizeof(cad0), stdin); /* Ingrese una cadena de caracteres utilizando fgets. */
    cad0[strcspn(cad0, "\n")] = '\0'; /* Elimina el salto de línea al final de cad0. */

    d = atof(cad0); /* Convierte la cadena cad0 a double utilizando atof. */
    printf("\n%s \t %.2lf ", cad0, d+1.50); /* Imprime cad0 y el valor de d+1.50 con dos decimales. */

    d = strtod(cad0, &cad1); /* Convierte la cadena cad0 a double utilizando strtod. */
    printf("\n%s \t %.2lf", cad0, d+1.50); /* Imprime cad0 y el valor de d+1.50 con dos decimales. */
    puts(cad1); /* Imprime el resto de la cadena almacenada en cad1. */

    l = atol(cad0); /* Convierte la cadena cad0 a long utilizando atol. */
    printf("\n%s \t %ld ", cad0, l+10); /* Imprime cad0 y el valor de l+10. */

    l = strtol(cad0, &cad1, 0); /* Convierte la cadena cad0 a long utilizando strtol. */
    printf("\n%s \t %ld", cad0, l+10); /* Imprime cad0 y el valor de l+10. */
    puts(cad1); /* Imprime el resto de la cadena almacenada en cad1. */
}

