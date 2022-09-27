#include <stdio.h>

int main()
{
    int matrizsum1 [4] [3];

    int matrizsum2 [5]  [3];

    int matrizresultado;

    int f;

    int c;


    for(f=0; f<4; f++)

    {
        for(c=0; c<3; c++)

        {

            printf("\nmatrizsum1  %i  %i:  ", f, c );

            scanf("%i", &matrizsum1 [c] [f] );


        }

    }

    for(f=0; f<5; f++)

    {


        for(c=0; c<3; c++)

        {
            printf("\nmatrizsum2  %i  %i:  ", f, c );

            scanf("%i", &matrizsum2 [c] [f]);
        }


    }


         matrizsum1 [0] [0] = matrizsum1 [0] [0] + matrizsum2 [0] [0];




}

