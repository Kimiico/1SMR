#include <stdio.h>
int main()
{

void Muestra_Menu();
int Lee_Opcion();
int Lee_Entero();

void main()

{
    int opcion;

    do
    {
        Muestra_Menu();
        opcion = Lee_Opcion();

        if (opcion==0)

        {
            printf("No quiero introducir mas monedas");
        }

        else if (opcion==1)

        {
            printf("2 Euros");
        }

        else if (opcion==2)

        {
            printf("1 Euro");
        }

        else if (opcion==3)

        {
            printf("50 centimos");
        }

        else if (opcion==4)

        {
            printf("20 centimos");
        }

        else if (opcion==5)

        {
            printf("10 centimos");
        }

        else if (opcion==6)

        {
            printf("5 centimos");
        }

        else if (opcion==7)

        {
            printf("2 centimos");
        }

        else if   (opcion==8)

        {
            printf("1 centimos");
        }
    }

    while(opcion!=0);

}

void Muestra_Menu()

{
    printf("\nMENU\N");

    printf("1:")
}




}
