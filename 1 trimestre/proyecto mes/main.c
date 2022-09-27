#include <stdio.h>

 int mes()
{
  printf("\nIntroduce un mes")

  scanf("%i" ,&mes);

  switch(mes)

  case 1:
      printf("\nENERO");
        break;
    case 2:
      printf("\nFEBRERO");
    case 3:
      printf("\nMARZO");
    case 4:
      printf("\nABRIL");
    case 5:
      printf("\nMAYO");
    case 6:
      printf("\nJUNIO");
    case 7:
      printf("\nJULIO");
    case 8:
      printf("\nAGOSTO");
    case 9:
      printf("\nSEPTIEMBRE");
    case 10:
      printf("\nOCTUBRE");
    case 11:
      printf("\nNOVIEMBRE");
    case 12:
      printf("\nDICIEMBRE");

}
