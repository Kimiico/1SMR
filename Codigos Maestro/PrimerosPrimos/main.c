#include <stdio.h>
#define MAX 1000

void main()
{
    int contador=0,i,num=1,primo;

    while(contador<MAX)
    {
        primo=1;
        i=2;
        while(i<=(num/2) && primo)
        {
            if(num%i==0)
            {
                primo=0;
            }
            else
            {
                i++;
            }
        }
        if(primo)
        {
            printf("%i ",num);
            contador++;
        }
        num++;
    }
}
