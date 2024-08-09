#include <stdio.h>
#include <stdlib.h>



typedef struct {

    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void modifica(FILE *);

void main(void)
{
    FILE *ar;
    if ((ar = fopen("ad1.dat", "r+")) != NULL)
    {
        modifica(ar);
        fclose(ar);
    }
    else
        printf("\nEl archivo no se puede abrir");
}

void modifica(FILE *ap)

    int d;
    alumno alu;

    printf("\nIngrese el número de registro que desea modificar: ");
    scanf("%d", &d);

    fseek(ap, (d - 1) * sizeof(alumno), SEEK_SET);


    fread(&alu, sizeof(alumno), 1, ap);


    printf("\nRegistro seleccionado:\n");
    printf("Matrícula: %d\n", alu.matricula);
    printf("Nombre: %s\n", alu.nombre);
    printf("Carrera: %d\n", alu.carrera);
    printf("Promedio actual: %.2f\n", alu.promedio);

    printf("\nIngrese el nuevo promedio del alumno: ");
    scanf("%f", &alu.promedio);

    fseek(ap, (d - 1) * sizeof(alumno), SEEK_SET);


    fwrite(&alu, sizeof(alumno), 1, ap);

}

