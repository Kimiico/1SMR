#include <stdio.h>

void main()


{

    int num1,i,a;

    a=0;

    printf("Introduce un numero: ");
    scanf("%d",&num1);

    for(i=1; i<=num1; i++)
    {
        if(num1%i==0)
            a++;
    }


    if(a==2)
    {
        printf("El número es primo");
    }
    else
    {
        printf("El número no es primo");
    }


}
