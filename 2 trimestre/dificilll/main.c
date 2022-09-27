#include <stdio.h>
#define TAM 6

void main()
{
    int combGanadora[]= {3,10,18,21,43,48};
    int boleto[TAM];
    int i,j,aciertos=0,encontrado;

    for(i=0; i<TAM; i++)
    {
        do
        {

            printf("Num %i: ",i+1);
            scanf("%i",&boleto[i]);
            if (boleto[i]<1 || boleto[i]>49){
                printf("\nERROR: Numero no valido\n");

            }
        }
        while(boleto[i]<1 || boleto[i]>49);

    }

    for(i=0; i<TAM; i++)
    {
        j=0;
        encontrado=0;
        while(j<TAM && !encontrado)
        {
            if (boleto[i]==combGanadora[j])
            {
                encontrado=1;
                aciertos++;
            }
            else
            {
                j++;
            }
        }
    }
    printf("\nTu boleto tiene %i aciertos\n",aciertos);
}

