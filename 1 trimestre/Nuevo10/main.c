#include <stdio.h>


void main()
{
    int num;
    printf("Intoduce un numero: ");
    scanf("%d", &num);
    if (num>0)
    {
        printf("El numero %d es positivo",num);
    }
    else if (num<0)
    {
        printf("\nEl numero %d es negativo",num);
    }

    else
    {
        printf("Es cero");

    }
    printf("\nFinal");

}

