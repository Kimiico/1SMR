#include <stdio.h>
#define TAM 5

void main()
{
    int vector [TAM];

    int i;

    int encontrado;

    for(i=0 ; i<TAM ; i++)
    {
        printf("Numero%i: " , i+1);

        scanf("%i", &vector[i]);

    }

    i=0;
    encontrado=0;


     while(i<TAM && !encontrado)

     {
         if(vector[i]<10)

             encontrado=1;

             i++;

     }

     if(encontrado)
     {
         printf("El %i  es el primer numero menor a diez y esta en la posicion %i" , vector[i],i+1);
     }
         else

         {
             printf("No se encuentra ningun numero");
         }


     }


