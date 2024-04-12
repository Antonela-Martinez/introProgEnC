///Escribir un programa que lea 5 números por teclado y los almacene en un array,
///luego, los copie a otro array multiplicados por 2 y muestre el segundo array.

#include<stdio.h>
#include<stdlib.h>

void cargaVector(int vector1[],int cantidad);
void mostrarVector(int vector1[], int vector2[], int cantidad);

void main()
{
   int vec1[5];
   int vec2[5];
   int cant=5;

   cargaVector(vec1,cant);
   printf("El doble del valor ingresado es:\n");
   mostrarVector(vec1,vec2,cant);

}

void cargaVector(int vector1[],int cantidad)
{
    int i, num;
    for(i=0; i<cantidad;i++)
    {
        printf("Ingrese numero\n");
        scanf("%d", &num);
        vector1[i]=num;

    }


}

void mostrarVector(int vector1[], int vector2[], int cantidad)
{
    int i;
   for(i=0;i<cantidad;i++)
   {
       vector2[i]=vector1[i]*2;
       printf("\t[%d]",vector2[i]);
   }

}
