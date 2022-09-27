#include <stdio.h>
#define TAM 7

void  main()
{
    int temperatura [TAM];

    int num;

    int dia;

    float media;

    float suma=0.0;

    for(num=0; num<=7; num++)
    {


        printf("\nIntroduce la Temperatura: ", num+1);

        scanf("%i", &temperatura[num]);
    }


    switch(num)

    {
    case 1 :
        printf( "\n   Lunes:%i",temperatura[1]);
        break;

    case 2 :
        printf( "\n   Martes %i",temperatura[2] );
        break;

    case 3 :
        printf( "\n   Miercoles %i",temperatura[3] );
        break;

    case 4 :
        printf( "\n   Jueves %i", temperatura[4] );
        break;

    case 5 :
        printf( "\n   Viernes %i", temperatura[5] );
        break;

    case 6 :
        printf( "\n   Sabado %i", temperatura[6] );
        break;

    case 7 :
        printf( "\n   Domingo  %i", temperatura[7] );

    }

    for(num=0; num<=7; num++)

    {
        suma=suma+temperatura[num];

             media=suma/7;

        printf("La media es %f", media);
    }








}
