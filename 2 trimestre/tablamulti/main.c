#include <stdio.h>

void main()

{


int numtabla,num,resultado;

for (numtabla=1;numtabla<=10;numtabla++)

{
    for(num=1;num<=10;num++)

    {
        resultado=numtabla*num;

        printf("%i*%i\n" , numtabla,num,resultado);
    }

    printf("\n");
}


}
