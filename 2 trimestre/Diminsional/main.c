#include <stdio.h>

void main()
{
    int matriz [4] [3];

    int f;

    int c;


    for(f=0;f<4;f++)

    {
        for(c=0;c<3;c++)

        {
            printf("matriz: %i  %i:  ", f,c );

            scanf(" %i " , &matriz [0]);
        }

    }


    for(f=0;f<4;f++)

    {
        printf("\n");

        for(c=0;c<3;c++)
        {
            printf("%i\t" , matriz[f]);
        }
    }






}
