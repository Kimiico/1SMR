#include <stdio.h>


void main()


{
int acumulado=0,acumulado1=0,acumulado2=0,acumulado3=0,acumulado4=0,acumulado5=0,acumulado6=0,acumulado7=0;
int cambio=350;
int saldo;

printf("Cantidad a devolver:\n");


while (cambio!=0)

{



    if (cambio>=200)

    {
        printf("\n2 Euros\n");
        cambio=cambio-200;
        acumulado++;
    }

    else if (cambio>=100)

    {
        printf("\n1 Euro\n");
        cambio=cambio-100;
        acumulado1++;
    }

   else if (cambio>=50)

    {
        printf("\n50 Centimos\n");
        cambio=cambio-50;
        acumulado2++;
    }

  else  if (cambio>20)

    {
        printf("\n20 Centimos\n");
        cambio=cambio-20;
        acumulado3++;
    }

   else if (cambio>10)

    {
     printf("\n10 Centimos\n");
     cambio=cambio-10;
     acumulado4++;
    }

   else if (cambio>5)

    {
        printf("\n5 Centimos\n");
        cambio=cambio-5;
        acumulado5++;
    }

   else if (cambio>2)

    {
        printf("\n2 Centimos\n");
        cambio=cambio-2;
        acumulado6++;
    }

   else if (cambio>1)

    {
        printf("\n1 Centimo\n");
        cambio=cambio-1;
        acumulado7++;
    }
}
}


