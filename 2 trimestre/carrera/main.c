#include <stdio.h>

void main()
{
    int numcorredores,i,edad;

    float sumaEdad=0.0,media;

    printf("Introduce numero corredores: ");
    scanf("%i",&numcorredores);

    for(i=1;i<=numcorredores;i++)

    {
        printf("Edad corredor %i: ",i);

        scanf("%i" ,&edad);

        sumaEdad=sumaEdad+edad;

        media=sumaEdad/numcorredores;

        printf("\nLa media es %f" ,media);

    }
}
