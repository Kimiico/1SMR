#include <stdio.h>

void main()
{
    int i;
    int multi2=0;
    int multi3=0;
    int multi5=0;

    for(i=1; i<=100; i++)
    {






        if(i%2==0)
        {
            multi2++;
        }

        if(i%3==0)

        {
            multi3++;
        }

        if(i%5==0)

        {
            multi5++;
        }
    }
    printf("%i,%i,%i", multi2,multi3,multi5);






}
