//Desarrollar un algoritmo que cargue en un vector los números impares que se encuentran entre 0 y 100.
//Luego mostrar el vector resultante.

#include <stdio.h>

int main()
{
    int numeros[50];
    int i, indice=0;

    printf("Se muestran numeros impares\n\n");

    for (i=1; i<100; i=i+2)
    {
        numeros[indice]=i;
        indice++;
    }

    for (i=0; i<50; i++)
    {
        printf("%d ", numeros[i]);
    }

    return 0;
}
