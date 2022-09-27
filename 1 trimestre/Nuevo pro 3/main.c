#include <stdio.h>


void main()
{
printf("\nHola mundo\n");
int x;
int y;
int resultado;
printf("\nIntroduzca la variable x: ");
scanf("%d" , &x) ;
printf("\nIntroduzca la variable y: ");
scanf("%d" , &y) ;
resultado=x+y;
printf("\nEl resultado de x e y es: %d" ,resultado);
resultado=x*y;
printf("\nEl resultado de x * y es: %d" ,resultado);
resultado=x-y;
printf("\nEl resultado de x - y es: %d" ,resultado);
resultado=x/y;
printf("\nEl resultado de x / y es: %d" ,resultado);


}


