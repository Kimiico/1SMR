#include <stdio.h>

void muestraMenu();
int leeOpcion();

int precio1();
int precio0();
int preciosNo;
int monedas;

int cambio;
int monedaser;

void main()
{

    int opcion;


    do
    {
        muestraMenu();
        opcion=leeOpcion();

        if (opcion==0)
        {
            precio0 (preciosNo);
        }

        else if (opcion==1)

        {
            precio1(preciosNo);


        }
    }

    while(opcion!=9);
}

void muestraMenu()

{
    printf("\nArticulos disponibles:\n");
    printf("\n0: 2 euros\n1: Galletas de chocolate 0.80 Euros\n2: Bolsa de golosinas 1.15 Euros\n3: Patatas fritas 0.90 Euros\n4: Zumo de melocoton 0.45 Euros\n5: Botella agua mineral 0.40 Euros\n6: Cacahute 0.95 Euros\n7: Refresco 0.75 Euros\n8: Sandwich de York y queso 2.25 Euros\n9: Sandwich vegetal 3.15 Euros\n");
}

int leeOpcion()
{
    int opc;
    printf("\nIntroduce la opcion: ");
    scanf("%i",&opc);
    return opc;
}



int precio0(int comida)

{
    int sueldo=0;
    sueldo=sueldo+200;

    monedaser=monedaser+sueldo;

    printf("Saldo: %d Euros y %d Centimos\n",monedaser/100,monedaser%100);

    return monedaser;
}


int precio1(int comida)
{
int saldo;

    saldo=precio0-80;
    printf("Saldo: %d Euros y %d Centimos\n",monedaser/100,monedaser%100);

    return monedaser;
}

