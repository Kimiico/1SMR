#include <stdio.h>
#define NUMPRODUCTOS 8

void muestraMenu();
int leeOpcion();

int precio1();
int precio0();
int precio2();
int precio3();
int precio4();
int precio5();
int precio6();
int precio7();
int precio8();
int precio9();
int preciosNo;

int comprarProducto();
int devolverCambio();

int saldos;

int monedas;
int cargarSaldo();
int cambio;
int monedaser;

void main()
{
    int saldo;
    int precioProducto[NUMPRODUCTOS]= {80,115,90,45,40,95,75,225,315};
    cambio=comprarProducto(saldo);


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
            precio0 (preciosNo);
        }

        else if (opcion==1 && monedaser>=80)

        {
            saldos=saldos-80;
            precio1(preciosNo);
            vendido=1;


        }

        else if (opcion==2 && monedaser>=115)
        {
            saldos=saldos-115;
            precio2(preciosNo);
            vendido=1;
        }

        else if (opcion==3 && monedaser>=90)

        {
            saldos=saldos-90;
            precio3(preciosNo);
            vendido=1;
        }

        else if (opcion==4 && monedaser>=45)

        {
            saldos=saldos-45;
            precio4(preciosNo);
            vendido=1;
        }

        else if (opcion==5 && monedaser>=40)
        {
            saldos=saldos-40;
            precio5(preciosNo);
            vendido=1;
        }

        else if (opcion==6 && monedaser>=95)

        {
            saldos=saldos-95;
            precio6(preciosNo);
            vendido=1;
        }

        else if (opcion==7 && monedaser>=75)

        {
            saldos=saldos-75;
            precio7(preciosNo);
            vendido=1;
        }

        else if (opcion==8 && monedaser>=225)

        {
            saldos=saldos-225;
            precio8(preciosNo);
            vendido=1;
        }
        else if (opcion==9 && monedaser>=315)

        {
            saldos=saldos-315;
            precio9(preciosNo);
            vendido=1;
        }
         else if (!vendido)
         {
             printf("\nNo tienes suficiente saldo\n");
         }
    }

    while(opcion!=8 && !vendido );
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

int precio0(int comida)

{
    int saldo=0;
    saldo=saldo+200;

    monedaser=monedaser+saldo;

    printf("Saldo: %d Euros y %d Centimos\n",monedaser/100,monedaser%100);

    return monedaser;
}

int precio1(int comida)
{
    int a=80;

    monedaser=monedaser-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedaser/100,monedaser%100);

    return monedaser;
}

int precio2(int comida)
{
    int a=115;

    monedaser=monedaser-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedaser/100,monedaser%100);

    return monedaser;
}

int precio3(int comida)
{
    int a=90;

    monedaser=monedaser-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedaser/100,monedaser%100);

    return monedaser;
}

int precio4(int comida)
{
    int a=45;

    monedaser=monedaser-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedaser/100,monedaser%100);

    return monedaser;
}


int precio5(int comida)
{
    int a=40;

    monedaser=monedaser-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedaser/100,monedaser%100);

    return monedaser;
}


int precio6(int comida)
{
    int a=95;

    monedaser=monedaser-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedaser/100,monedaser%100);

    return monedaser;
}


int precio7(int comida)
{
    int a=75;

    monedaser=monedaser-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedaser/100,monedaser%100);

    return monedaser;
}


int precio8(int comida)
{
    int a=225;

    monedaser=monedaser-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedaser/100,monedaser%100);

    return monedaser;
}


int precio9(int comida)
{
    int a=315;

    monedaser=monedaser-a;
    printf("Saldo: %d Euros y %d Centimos\n",monedaser/100,monedaser%100);

    return monedaser;
}



