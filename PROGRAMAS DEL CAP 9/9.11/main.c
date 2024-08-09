#include <stdio.h>
#include <stdlib.h>



typedef struct {
    int clave;
    int departamento;
    float salario;
    float ventas[12];
} empleado;

void incrementa(FILE *);

void main(void)
{
    FILE *ar;
    if ((ar = fopen("ad5.dat", "r+")) != NULL) {

        incrementa(ar);
        fclose(ar);
    } else {
        printf("\nEl archivo no se puede abrir\n");
    }
}

void incrementa(FILE *ap)

{
    empleado emple;


    while(fread(&emple, sizeof(empleado), 1, ap) == 1) {
        float sum = 0;
        for (int j = 0; j < 12; j++) {
            sum += emple.ventas[j];
        }

        if (sum > 1000000) {
            emple.salario *= 1.10;


            fseek(ap, -sizeof(empleado), SEEK_CUR);
            fwrite(&emple, sizeof(empleado), 1, ap);
            fseek(ap, 0, SEEK_CUR);
        }
    }
}
