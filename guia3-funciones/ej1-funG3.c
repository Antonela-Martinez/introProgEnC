#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float promedio (int x);

int main()
{
    char nombre[30], maxNombre[30];
    int cantidad, x, codigo, alumno;
    float maxProm=0, prom;

    printf("\nIngrese cantidad de alumnos ");
    scanf("%d", &cantidad);
    for (alumno=1; alumno<=cantidad; alumno++)
    {
        system("cls");
        printf("\nIngrese nombre alumno ");
        fflush(stdin);
        gets(nombre);
        printf("\nIngrese codigo de carrera ");
        scanf("%d",&codigo);
        printf("\nIngrese cantidad de materias ");
        scanf("%d", &x);
        prom=promedio(x);
        printf("\nEl promedio del alumno es %.2f", prom);
        if (prom>maxProm)
        {
            maxProm=prom;
            strcpy(maxNombre,nombre); //funcion para copiar cadenas
        }
    }
    printf("\nEl mayor promedio es: %.2f", maxProm);
    printf("\nEl nombre del mejor alumno es: ");
    puts(maxNombre);

    return 0;
}

float promedio (int x)
{
    int n;
    float suma, nota;

    for (n=1;n<=x;n++)
    {
        printf("\nIngrese nota: ");
        scanf("%f",&nota);
        suma=suma+nota;
    }
    return (suma/x);
}



