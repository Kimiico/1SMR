#include <stdio.h>

void main()
{

    int fila,maxContador,contador,num;

    fila=1;

    maxContador=6-fila;
    contador=1;
    num=fila;
    while(contador<=maxContador)
    {
        printf("%i ",num);

        num=num+fila;

        contador++;

    }

}
