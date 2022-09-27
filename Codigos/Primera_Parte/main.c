#include <stdio.h>
#define NUMMONEDAS 8
#define NUMPRODUCTOS 8

void uestraMenu();
int leeOpcion();

void muestraMenu2();
int leeOpcion2();

int add1(),add2(), add3(), add4(), add5(), add6(), add7(), add8();

int precio1(), precio0(), precio2(), precio3(), precio4(), precio5(), precio6(), precio7(), precio8(), precio9();

int monedas;


int saldo,cambio,precios;
int comprarProducto();
int devolverCambio();
int cargarSaldo();



void main()
{
 int saldo,cambio;
 int monedas[NUMMONEDAS] = {200,100,50,20,10,5,2,1};
 saldo=cargarSaldo(monedas);

 int precioProducto[NUMPRODUCTOS]= {80,115,90,45,40,95,75,225,315};
 cambio=comprarProducto(saldo);
}

int  cargarSaldo()
{
    int opcion;

    do
    {
        muestraMenu();
        opcion=leeOpcion();

        if (opcion==1)
        {
            add1(monedas);
        }

       else   if  (opcion==2)
        {
            add2(monedas);
        }

       else  if (opcion==3)
        {
            add3(monedas);
        }

        else if  (opcion==4)
        {
            add4(monedas);
        }

        else if  (opcion==5)
        {
            add5(monedas);
        }

         else if  (opcion==6)
        {
            add6(monedas);
        }

         else if  (opcion==7)
        {
            add7(monedas);
        }

         else if  (opcion==8)
        {
            add8(monedas);
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

   monedas=monedas+saldo;

   printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

   return monedas;
}

int add2(int ds)
{
   int saldo=0;

   saldo=saldo+100;

   monedas=monedas+saldo;

   printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

   return monedas;
}

int add3(int ds)
{
   int saldo=0;

   saldo=saldo+50;

   monedas=monedas+saldo;

   printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

   return monedas;
}

int add4(int ds)
{
   int saldo=0;

   saldo=saldo+20;

   monedas=monedas+saldo;

   printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

   return monedas;
}

int add5(int ds)
{
   int saldo=0;

   saldo=saldo+10;

   monedas=monedas+saldo;

   printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

   return monedas;
}

int add6(int ds)
{
   int saldo=0;

   saldo=saldo+5;

   monedas=monedas+saldo;

   printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

   return monedas;
}

int add7(int ds)
{
   int saldo=0;

   saldo=saldo+2;

   monedas=monedas+saldo;

   printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

   return monedas;
}

int add8(int ds)
{
   int saldo=0;

   saldo=saldo+1;

   monedas=monedas+saldo;

   printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

   return monedas;
}

int comprarProducto()
{
int vendido=0;
    int opcion;


    do
    {
        muestraMenu();
        opcion=leeOpcion();

        if (opcion==0)
        {
            precio0 (precios);
        }

        else if (opcion==1 && monedas>=80)

        {
            saldo=saldo-80;
            precio1(precios);
            vendido=1;


        }

        else if (opcion==2 && monedas>=115)
        {
            saldo=saldo-115;
            precio2(precios);
            vendido=1;
        }

        else if (opcion==3 && monedas>=90)

        {
            saldo=saldo-90;
            precio3(precios);
            vendido=1;
        }

        else if (opcion==4 && monedas>=45)

        {
            saldo=saldo-45;
            precio4(precios);
            vendido=1;
        }

        else if (opcion==5 && monedas>=40)
        {
            saldo=saldo-40;
            precio5(precios);
            vendido=1;
        }

        else if (opcion==6 && monedas>=95)

        {
            saldo=saldo-95;
            precio6(precios);
            vendido=1;
        }

        else if (opcion==7 && monedas>=75)

        {
            saldo=saldo-75;
            precio7(precios);
            vendido=1;
        }

        else if (opcion==8 && monedas>=225)

        {
            saldo=saldo-225;
            precio8(precios);
            vendido=1;
        }
        else if (opcion==9 && monedas>=315)

        {
            saldo=saldo-315;
            precio9(precios);
            vendido=1;
        }
         else if (!vendido)
         {
             printf("\nNo tienes suficiente saldo\n");
         }
    }

    while(opcion!=0 && !vendido );
}

void muestraMenu2()

{
    printf("\nArticulos disponibles:\n");
    printf("\n0: Devolver dinero\n1: Galletas de chocolate 0.80 Euros\n2: Bolsa de golosinas 1.15 Euros\n3: Patatas fritas 0.90 Euros\n4: Zumo de melocoton 0.45 Euros\n5: Botella agua mineral 0.40 Euros\n6: Cacahute 0.95 Euros\n7: Refresco 0.75 Euros\n8: Sandwich de York y queso 2.25 Euros\n9: Sandwich vegetal 3.15 Euros\n");
}

int leeOpcion2()
{
    int opc;
    printf("\nIntroduce la opcion: ");
    scanf("%i",&opc);
    return opc;
}

int precio0(int comida)

{

}

int precio1(int comida)
{
    int a=80;

    monedas=monedas-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

    return monedas;
}

int precio2(int comida)
{
    int a=115;

    monedas=monedas-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

    return monedas;
}

int precio3(int comida)
{
    int a=90;

    monedas=monedas-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

    return monedas;
}

int precio4(int comida)
{
    int a=45;

    monedas=monedas-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

    return monedas;
}


int precio5(int comida)
{
    int a=40;

    monedas=monedas-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

    return monedas;
}


int precio6(int comida)
{
    int a=95;

    monedas=monedas-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

    return monedas;
}


int precio7(int comida)
{
    int a=75;

    monedas=monedas-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

    return monedas;
}


int precio8(int comida)
{
    int a=225;

    monedas=monedas-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

    return monedas;
}


int precio9(int comida)
{
    int a=315;

    monedas=monedas-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedas/100,monedas%100);

    return monedas;
}
