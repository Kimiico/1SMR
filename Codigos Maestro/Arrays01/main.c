#include <stdio.h>
#define TAM 4

void main()
{
    float alturas[TAM];
    int i;

    for(i=0; i<TAM; i++)
    {
        printf("\nAltura %i: ",i+1);
        scanf("%f",&alturas[i]);
    }

    for(i=0; i<TAM; i++)
    {
        printf("\nAltura %i: %f ",i+1,alturas[i]);
    }
}
