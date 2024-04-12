
//Desarrollar un algoritmo que lea 5 datos por teclado y los cargue en un vector.
//Luego en un segundo vector que guarde los elementos del primer vector multiplicados por 2.
//Mostrar los dos vectores por pantalla.

void cargaVector(int vec[5], int cantidad);
void cargaVector2(int vec2[5], int vec[5], int cantidad);
void mostrarVector (int vec[5], int vec2[5], int cantidad);

#include <stdio.h>

int main()
{
    int vector1[5], vector2[5];
    int cantidad=5;

    cargaVector(vector1, cantidad);
    cargaVector2(vector2, vector1, cantidad);
    mostrarVector(vector1, vector2, cantidad);

    return 0;
}

void cargaVector(int vec[5], int cantidad)
{
    int i;
    for(i=0; i<cantidad; i++)
    {
        printf("\nIngrese elemento: ");
        scanf("%d", &vec[i]);
    }
}

void cargaVector2(int vec2[5], int vec[5], int cantidad)
{
    int i;

    for (i=0; i<cantidad; i++)
    {
        vec2[i]= vec[i]*2;
    }
}

void mostrarVector (int vec[5], int vec2[5], int cantidad)
{
    int i;

    printf("\nVECTOR ORIGINAL  ");
    for (i=0; i<cantidad; i++)
    {
        printf ("%d ", vec[i]);
    }

    printf("\nVECTOR 2  ");
    for (i=0; i<cantidad; i++)
    {
        printf ("%d ", vec2[i]);
    }
}
