#include <stdio.h>
#define NUM 5


void main()
{
    int vector[NUM],i,encontrado;

    for(i=0; i<5; i++)
    {
        printf("introduce el valor %i:", i+1);
        scanf("%i", &vector[i]);
    }
    i=0;
    encontrado=0;
    while(i<5&&!encontrado)
    {

        if(vector[i]<10)
        {

            encontrado=1;

        }
        else
        {
            i++;
        }
    }
    if(encontrado)
    {
        printf("\nel primer numero menor a 10 es:%i y esta en la posicion %i",vector[i],i+1);
    }
    else
    {
        printf("no hay ningun numero menor a 10");
    }

}





