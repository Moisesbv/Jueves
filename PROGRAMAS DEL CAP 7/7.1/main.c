#include <stdio.h>

void main (void)
{
    char p1, p2, p3 = '$';
    /* Declaracion de las variables de tipo caracter p1, p2, p3. Observa que a p3 se le asgina el simbolo $. */
    printf ("\nIngrese un caracter: ");
    p1 = getchar ();
    /* Se utiliza la funcion getchar para leer un caracter. */
    printf("\nEl caracter ingresado es: ");
    putchar (p1);
    /* Se utiliza la funcion putchar para escribir el caracter leído. */
    printf ("\n");

    // Limpiar el buffer de entrada
    while (getchar() != '\n');

    printf ("\nEl caracter p3 es: ");
    putchar (p3);
    /* Se utiliza la funcion putchar para escribir el caracter almacenado en p3. */
    printf ("\n");

    printf ("\nIngrese otro caracter: ");
    p2 = getchar();
    /* Se puede utilizar getchar para leer un caracter. */
    printf ("\nEl caracter ingresado es: ");
    putchar (p2);
    /* Se puede utilizar putchar para escribir un caracter. */
    printf ("\n");
}
