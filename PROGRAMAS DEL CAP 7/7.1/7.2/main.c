#include <stdio.h>
#include <ctype.h>

/* Funciones para el manejo de caracteres de la biblioteca ctype.h. */
void limpiarBuffer(void);

void main(void) {
    char p1;

    printf("\nIngrese un caracter para analizar si éste es un dígito: ");
    p1 = getchar();
    limpiarBuffer();  // Limpiar el búfer de entrada
    if (isdigit(p1))  // La función isdigit regresa 1 si p1 es un dígito y 0 en caso contrario.
        printf("%c es un dígito \n", p1);
    else
        printf("%c no es un dígito \n", p1);

    printf("\nIngrese un caracter para examinar si éste es una letra: ");
    p1 = getchar();
    limpiarBuffer();  // Limpiar el búfer de entrada
    if (isalpha(p1))  // La función isalpha regresa 1 si p1 es una letra y 0 en caso contrario.
        printf("%c es una letra \n", p1);
    else
        printf("%c no es una letra \n", p1);

    printf("\nIngrese un caracter para examinar si éste es una letra minúscula: ");
    p1 = getchar();
    limpiarBuffer();  // Limpiar el búfer de entrada
    if (isalpha(p1)) {
        if (islower(p1))  // La función islower regresa 1 si p1 es una letra minúscula y 0 en caso contrario.
            printf("%c es una letra minúscula \n", p1);
        else
            printf("%c no es una letra minúscula \n", p1);
    } else {
        printf("%c no es una letra \n", p1);
    }

    printf("\nIngrese una letra para convertirla de mayúscula a minúscula: ");
    p1 = getchar();
    limpiarBuffer();  // Limpiar el búfer de entrada
    if (isalpha(p1)) {
        if (isupper(p1))
            printf("%c fue convertida de mayúscula a minúscula \n", tolower(p1));  // La función tolower convierte de mayúscula a minúscula. Si la letra es minúscula no la modifica. La función toupper, por otra parte, convierte de minúscula a mayúscula. Si la letra es mayúscula no la modifica.
        else
            printf("%c es una letra minúscula \n", p1);
    } else {
        printf("%c no es una letra \n", p1);
    }
}

void limpiarBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


