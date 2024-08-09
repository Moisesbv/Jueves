#include <stdio.h>
#include <stdlib.h>


void sumypro(FILE *);

void main(void)
{
    FILE *ap;
    if ((ap = fopen("arc2.txt", "r")) != NULL)
    {
        sumypro(ap);
        fclose(ap);
    }
    else
        printf("No se puede abrir el archivo\n");
}

void sumypro(FILE *ap1)
{
    char cad[30];
    int i = 0;
    float sum = 0.0, r;
    while (!feof(ap1))
    {
        fgets(cad, 30, ap1);
        r = atof(cad);
        if (r != 0.0)
        {
            i++;
            sum += r;
        }
    }
    printf("\nSuma: %.2f", sum);
    if (i != 0)
        printf("\nPromedio: %.2f\n", sum / i);
}
