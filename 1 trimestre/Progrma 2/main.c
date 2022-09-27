#include <stdio.h>


void main()
{
  int x;
  int y;
  int resultado;
  printf("Introduce el valor de la variable x: ");
  scanf("%d" , &x) ;
  printf (" El valor de la variable x es: %d\n" ,x);
  y=x+2;
  x=y-8;
  resultado=x+y;
  printf("El valor de resultado es: %d\n",resultado);
printf("El valor de la variable x es: %d\n" ,x);
printf("El valor de la variable y es: %d\n" ,y);
}

