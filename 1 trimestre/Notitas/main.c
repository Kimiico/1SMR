#include <stdio.h>

void main()
{
    float nota;
    printf("\n Introduce la nota: ");
    scanf("%f",&nota);
    if (nota >= 0.0 && nota < 5.0)

    {
        printf("suspenso\n");

    }

    else if (nota >=5.0 && nota < 6.5)
    {

        printf("suficiente\n");
    }

    else if (nota >=6.5 && nota < 8.5)
    {

        printf("\nnotable");
    }


    else if (nota >=8.5 && nota <= 10.0)
    {

        printf("sobresaliente\n");
    }
     else
    {



        printf("La nota no es valida\n");

     }
}
