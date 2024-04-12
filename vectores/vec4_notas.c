
//Desarrollar un algoritmo que solicite ingresar el nombre de un alumno y que guarde en un vector
//las calificaciones obtenidas en el primer cuatrimestre (puede tener entre 1 a 5 notas).
//Calcular el promedio. Mostrar por pantalla el nombre del alumno, las calificaciones y el promedio.

void cargaNotas (float notas[5], int *cantidad);
void mostrarNotas (float notas[5], int cantidad);
float promedio(float notas[5], int cantidad);


#include <stdio.h>
#include <string.h>

int main()
{
    float notas[5];
    int cantidad=0;
    char nombre[20];
    float prom;

    printf("\nIngrese nombre del alumno: ");
    gets(nombre);
    printf("\nIngrese las notas del alumno:");
    cargaNotas(notas, &cantidad);
    prom=promedio(notas, cantidad);
    printf("\nLas nostas del alumno ");
    puts (nombre);
    mostrarNotas(notas, cantidad);
    printf("\nEl promedio de notas es: %.2f", prom);

    return 0;
}

void cargaNotas(float notas[5], int *cantidad)
{
    int indice=0;
    float nota;

    printf("\n Ingrese nota (0=fin de datos) ");
    scanf("%f", &nota);
    while ((indice <5)&&(nota!=0))
    {
        notas[indice]=nota;
        indice++;
        printf("\n Ingrese otra nota (0=fin de datos) ");
        scanf("%f", &nota);
    }
    if (indice>4)
    {
        printf("\n No puede ingresar mas de 5 notas...");
    }


    *cantidad=indice;
}

float promedio (float notas[5], int cantidad)
{
    int i;
    float suma=0;

    for (i=0; i<cantidad; i++)
    {
        suma=suma+notas[i];
    }

    return suma/cantidad;
}

void mostrarNotas (float notas[5], int cantidad)
{
    int i;

    for (i=0; i<cantidad; i++)
    {
        printf ("%.2f ", notas[i]);
    }
}
