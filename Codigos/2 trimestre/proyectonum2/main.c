#include <stdio.h>

void muestraMenu();
int leeOpcion();

int precio1();
int precio;
int monedas;

void main()
{
    int opcion;

    do
    {
        muestraMenu();
        opcion=leeOpcion();

        if (opcion==1)

        {
            precio1(precio);
        }
    }

    while(opcion!=0);
}

void muestraMenu()

{
    printf("\nArticulos disponibles:\n");
    printf("\n0: Devolver dinero\n1: Galletas de chocolate 0.80 Euros\n2: Bolsa de golosinas 1.15 Euros\n3: Patatas fritas 0.90 Euros\n4: Zumo de melocoton 0.45 Euros\n5: Botella agua mineral 0.40 Euros\n6: Cacahute 0.95 Euros\n7: Refresco 0.75 Euros\n8: Sandwich de York y queso 2.25 Euros\n9: Sandwich vegetal 3.15 Euros\n");
}

int leeOpcion()
{
    int opc;
    printf("\nIntroduce la opcion: ");
    scanf("%i",&opc);
    return opc;
}

int precio1(int comida)

{
int sueldo=50;

sueldo=sueldo+500;
monedas=monedas+sueldo;

   printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

   return monedas;
}
