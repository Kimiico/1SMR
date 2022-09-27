#include <stdio.h>

void main()
{
    int num;
    printf("Inserte un numero:");
    scanf("%d", &num);
    if (num%2==0)
    {
        printf("El numero %d es par ,num\n");

    }
    else
    {
        printf("El numero %d es impar ,num\n");
    }
    printf("Final\n");
}


