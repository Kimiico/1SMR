#include <stdio.h>


void main()
{

int x = 10, y = 20;
printf("x vale %d e y vale %d\n", x, y);
x=y;
y=x;
printf("Después del intercambio, x vale %d e y vale %d\n", y, x);

}
