#include <stdio.h>

void main()
{
    int num;



    printf("Introdoze la nota del alumno: ");

    scanf("%i" , num);


    if (num<0 && num<5)
{
        printf("Es un suspenso bro");


    else if (num=5 && num<6.5)

        printf("Es un suficiente")


       else  if (num=6.5 && num<8.5)

        printf("Es un notable bro");


    else if (num=8.5 && num<=10)

        printf("Es un sobresaliente")


}
