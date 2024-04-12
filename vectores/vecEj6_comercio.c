/*6.	En un comercio se registran las ventas por cada uno de los siete días
de la semana, de la siguiente forma: en CAJA1 se indica el dinero que ingreso
en efectivo y en CAJA2 el monto facturado en tarjetas de crédito.
Al final de la semana se desea determinar:
•	El total de las ventas
•	Cual fue el día que ingreso menos efectivo
•	El día que más se facturo, porcentaje facturado en efectivo y porcentaje
facturado en tarjetas de crédito.*/

#include<stdio.h>
#include<stdlib.h>

void cargaVectores(int caja1[], int caja2[], int dias);
int suma(int caja1[], int caja2[], int dias);
void minFacturado(int caja1[], int dias, int *minimo);
void muestraVectores(int caja1[], int caja2[], int dias);

int main()
{
    int caja1[7];
    int caja2[7];
    int dias=7, minimo;

     //printf("Ingrese la cantidad de dias trabajados ");
     //scanf("%d", &dias);
     cargaVectores(caja1, caja2, dias);
     muestraVectores(caja1,caja2,dias);

     int total=suma(caja1,caja2,dias);
     printf("\n\nEl total facturado de la semana es: %d", total);

     minFacturado(caja1,dias,&minimo);
     printf("\n\n El dia que se facturo menos efectivo es: %d\n", minimo);

     return 0;
}

void cargaVectores(int caja1[], int caja2[], int dias)
{
  int indice;
    for (indice=0; indice<dias; indice++)
    {
        printf("\n\nIngrese total facturado en el dia:  [%d] ", indice+1);
        printf("\nTotal facturado en Efectivo CAJA 1 ");
         scanf("%d",&caja1[indice]);
        printf("\nTotal facturado con Tarjeta CAJA 2 ");
         scanf("%d",&caja2[indice]);
    }

}

void muestraVectores(int caja1[], int caja2[], int dias)
{
  int indice;
    for (indice=0; indice<dias; indice++)
    {
        printf("\n\nTotal facturado dia: [%d] ", indice+1);
        printf("\nCAJA 1: [%d]", caja1[indice]);
        printf("\nCAJA 2: [%d]", caja2[indice]);
    }
}

int suma(int caja1[], int caja2[], int dias)
{
  int s=0,indice;
   for (indice=0; indice<dias; indice++)
   {
       s+= caja1[indice]+ caja2[indice];
   }
  return s;
}

void minFacturado(int caja1[], int dias, int *minimo)
{
    int indice, min=caja1[0];


    for (indice=0; indice<dias; indice++)
    {

        if ( caja1[indice] < min)
            {
                min=caja1[indice];
                *minimo=indice+1;
            }
    }
}
