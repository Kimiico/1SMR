#include <stdio.h>
 int factor (int x);

void main()
{

    int numero,resultado;

    printf("Introduce numero: ");

    scanf("%i" , &numero);

    resultado = factorial(numero);

    printf("El factorial es %i" , resultado);

}

        int factorial (int x)
{



    int resultado = 1,i;

    for (i = x ; i<=1;i--)

    {
        resultado=resultado*i;


    }

    return resultado;

}
