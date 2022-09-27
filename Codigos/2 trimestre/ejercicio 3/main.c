#include <stdio.h>



void  main()
{
int num1,num2;

printf("Escriba el primer numero: "  );

scanf("%i" , &num1);

printf("Escriba el segindo numero: "  );

scanf("%i" , &num2);


if (num1<num2)

{
    printf("El numero 1  es menor que el nuemro 2 y es el : %i" , num1  );
}
 else if (num2<num1)

{
    printf("\nEl numero 2 es menor que el numero 1 y es el : %i" , num2 );
}
else

{
    printf("Son iguales");
}





 }








