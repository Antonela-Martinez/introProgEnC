#include <stdio.h>
#include <stdlib.h>

void cargaVector(int vector[], int cantidad);
void mostrarVector (int vector[], int cantidad);
int suma (int vector[], int cantidad);
int mayor (int vector[], int cantidad);


int main ()
{
    int vector[5];
    int cantidad, i, total=0;

    printf("Ingrese cantidad de elementos del vector ");
    scanf("%d", &cantidad);//5

    cargaVector(vector,cantidad);

    mostrarVector(vector, cantidad);

    total= suma(vector, cantidad);
    printf("\nLa suma de elementos del vector es... %d", total);

 //   printf("\nLa suma de elementos del vector es... %d", suma(vector,cantidad));

    //promedio de elementos
    float promedio= total/cantidad;
    printf("\nEl promedio de elementos es ... %.2f", promedio);

    printf("\nEl valor maximo es ... %d\n\n", mayor(vector,cantidad));
    system("pause");

    return 0;
}

void cargaVector(int vector[], int cantidad)
{
    int i;

    for (i=0;i<cantidad;i++)
    {
        printf("\nIngrese elemento ");
        scanf("%d", &vector[i]);
    }
}


void mostrarVector (int vector[], int cantidad)
{
    int i;
    printf("\nLos elementos del vector son ...");

    for (i=0;i<cantidad;i++)
    {
        printf("%d - ", vector[i]);
    }
}

int suma (int vector[], int cantidad)
{
    //suma elementos
    int a=0, pos;

    for (pos=0; pos<cantidad;pos++)
    {
        a=a + vector[pos];
    }
    return a;
}


int mayor (int vector[], int cantidad)
{
     //Encontrar el elemento mas grande
    int pos,max=0;

    for(pos=0; pos<cantidad; pos++)
    {
        if (vector[pos]>max)
            max=vector[pos];
    }

    return max;

/*    int max=vector[0];
    for(pos=1; pos<cantidad; pos++)
    {
        if (vector[pos]>max)
            max=vector[pos];
    }*/
}

