//EJERCICIO 2
/*2. Modificar el ejercicio anterior suponiendo que se analizan las calificaciones de los
alumnos de los 3 cursos de quinto año y se pide escribir un programa que permita:
a. Escribir el nombre y el promedio del mejor alumno de cada curso.
b. Escribir el nombre y el promedio del mejor alumno de quinto año.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float promedio (int x);
void mejorPromedioCurso (float *mejorPromCurso, char nombreMejorProm[]);

int main()
{
    float totalProm=0, maxTotalProm=0;
    int curso;
    char nombreMejorPromedio[30]="";
    char maxTotalNombre[30];

    for (curso=1; curso<=2; curso++)
    {
        system("cls");
        printf("Evaluando curso %d \n",curso);
        mejorPromedioCurso(&totalProm, nombreMejorPromedio);
        if (totalProm>maxTotalProm)  //evaluo si el promedio del curso es el maximo de los 3 cursos
        {
            maxTotalProm=totalProm;
            strcpy(maxTotalNombre,nombreMejorPromedio);
        }

    }
    printf("\nEl curso con mejor promedio es %.2f", maxTotalProm);
    printf("\nEl alumno con mejor promedio es %s ", maxTotalNombre);


    return 0;
}

void mejorPromedioCurso(float *mejorPromCurso, char nombreMejorProm[])
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
        system("pause");
        if (prom>maxProm)
        {
            maxProm=prom;
            strcpy(maxNombre,nombre); //funcion para copiar cadenas
        }
    }
    printf("\nEl mayor promedio es: %.2f", maxProm);
    printf("\nEl nombre del mejor alumno es: ");
    puts(maxNombre);
    *mejorPromCurso=maxProm;
    strcpy(nombreMejorProm,maxNombre);
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
