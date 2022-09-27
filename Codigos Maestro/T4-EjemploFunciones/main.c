#include <stdio.h>

void muestraMenu();
int leeOpcion();
int leeEntero();
int suma(int,int);
int resta(int,int);
void muestraResultado(int);
void muestraErroropcion();

void main()
{
    int opcion,a,b,resultado;

    do
    {
        muestraMenu();
        opcion=leeOpcion();


        if (opcion==1)
        {
            a=leeEntero();
            b=leeEntero();
        }
        else if (opcion==2)
        {
            resultado=suma(a,b);
            muestraResultado(resultado);
        }
        else if (opcion==3)
        {
            resultado=resta(a,b);
            muestraResultado(resultado);
        }
        else
        {
            muestraErroropcion();
        }
    }
    while(opcion!=0);
}

void muestraMenu()
{
    printf("\nMENU\n");
    printf("1: Lee datos\n2: Suma\n3: Resta\n0: Salir\n");
}

int leeOpcion()
{
    int opc;
    printf("Introduce opcion: ");
    scanf("%i",&opc);
    return opc;
}

int leeEntero()
{
    int dato;
    printf("Introduce dato: ");
    scanf("%i",&dato);
    return dato;
}

int suma(int x, int y)
{
    int res;
    res=x+y;
    return res;
}

int resta(int x, int y)
{
    int res;
    res=x-y;
    return res;
}

void muestraResultado(int res)
{
    printf("\nResultado %i",res);
}

void muestraErroropcion()
{
    printf("\nOpcion no valida");
}
