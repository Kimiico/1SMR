#include <stdio.h>
int main()
{



    int i, numero;


   printf( "\n   Introduzca un n%cmero entero: ", 163 );
        scanf( "%d", &numero );

        printf( "\n   La tabla de multiplicar del %d es:\n", numero );

         for ( i = 1 ; i <= 10 ; i++ )
            printf( "\n   %d x %d = %d", i, numero, i * numero );



}
