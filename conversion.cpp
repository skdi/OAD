#include <stdio.h>
#include <conio.h>

/*variables globales*/
short i;
unsigned short binario[7];/*tamanyo de un bit pero se adapta a un tamanyo mayor*/
unsigned short hexadecimal[10];
unsigned short octal[10];
int main()
{
    /*variables */
    int numero=0;
    
    int binarios(int); /*funcion para convertir a binario */
    int hexadecimales(int);
    int octales(int);
    /*obtener el numero entero*/
    printf("Teclee el numero entero: ");
    scanf("%u",&numero);
    printf("\n******************************\n");
    
    binarios(numero);
    hexadecimales(numero);
    octales(numero);
    getch();
    return 0;
}

int binarios(int numero)
{
    i=0; /*iniciando el contador*/
    
    while (numero!=0)/*ciclo para obtener los residuos de las divisiones*/
    {
          binario[i]=numero % 2;
          numero=numero / 2;
          i++;
    }
    i--;/* resta al contador debido a que su valor es mayor al tamaño del valor binario*/
    printf("Binario: ");   
    /*reordenar el valor de binario*/
    while (i>=0)
    {
          printf("%u",binario[i]);
          i--;
    }
}
 int hexadecimales(int numero)
 {
     i=0; /*iniciando el contador*/
     while (numero!=0)
     {
           hexadecimal[i]=numero%16;
           numero=numero/16;
           i++;
     }
     printf("\nHexadecimal: ");
     i--;
     while (i>=0)
     {
           switch(hexadecimal[i])
           {
                             case 10:
                                  printf("A");
                             break;
                             case 11:
                                  printf("B");
                             break;
                             case 12:
                                  printf("C");
                             break;
                             case 13:
                                  printf("D");
                             break;
                             case 14:
                                  printf("E");
                             break;
                             case 15:
                                  printf("F");
                             break;
                             default:
                                   printf("%d",hexadecimal[i]);
                             break;
           } 
           i--;
     }
}

int octales(int numero)
{
    i=0; /*iniciando el contador*/
    while(numero!=0)
    {
          octal[i]=numero % 8;
          numero=numero / 8;
          i++;
    }
    printf("\nOctal: ");
    i--;
    while(i>=0)
    {
          printf("%u",octal[i]);
          i--;
    }
}
