#include <stdio.h>
#define NUMMONEDAS
void muestraMenu();
int leeOpcion();

int add1();

int monedas;


void main()
{
    int opcion;
    int saldo;
    int monedas[NUMMONEDAS] = {200,100,50,20,10,5,2,1};
    saldo=cargarSaldo(monedas);

    do
    {
        muestraMenu();
        opcion=leeOpcion();

        if (opcion==1)
        {
            add1(monedas);
        }


    }
    while(opcion!=0);
}

void muestraMenu()
{
    printf("\n0: No quiero introducir mas monedas\n1: 2 Euros\n2: 1 Euro\n3: 50 Centimos\n4: 20 Centimos\n5: 10 Centimos\n6: 5 Centimos\n7: 2 Centimos\n8: 1 Centimo\n");
}

int leeOpcion()
{
    int opc;
    printf("\nIntroduce la opcion: ");
    scanf("%i",&opc);
    return opc;


}

int add1(int ds)
{
   int saldo=0;

   saldo=saldo+200;

   saldo=monedas+saldo;

   printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

   return monedas;
}

