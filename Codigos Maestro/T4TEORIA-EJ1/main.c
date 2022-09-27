#include <stdio.h>
#define TAM 5

void main()
{
    int vector[TAM], i, suma=0;

    for(i=0;i<TAM;i++){
        printf("Introduce el dato %i: ",i+1);
        scanf("%i",&vector[i]);
    }

    for(i=0;i<TAM;i++){
        suma+=vector[i]; //suma=suma+vector[i];
    }

    printf("\nLa suma es %i",suma);
}
