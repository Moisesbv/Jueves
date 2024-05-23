#include <stdio.h>
#include <stdlib.h>

void main(void)
{
   int T, P, N;
   printf("Ingrese los valores de T, P, N: ");
   scanf("%d %d %d", &T, &P, &N);
   if (P != 0)
   {
       if (pow(T / P, N) == (pow(T, N) / pow(P, N)))
        printf("\nSe comprueba la igualdad");
       else
        printf("\nNo se compreuba la igualdad");
   }
   else
    printf("\nP tiene que ser diferente de cero");
}
