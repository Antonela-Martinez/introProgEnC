/*2. A partir de las notas correspondientes a la cursada de N alumnos de un curso, se pide
desarrollar un programa que lea el número de matrícula, las dos notas e indique si esta
aprobado o no (se considera aprobado promedio >= 7). Mostrar por pantalla promedio
mas alto del curso.
Desarrollar una función que a partir de las dos notas ingresadas devuelva el promedio
y condición (A=aprobado o D=desaprobado) de cada alumno.*/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
void promedio(float n1, float n2, float *retorno, char *calificacion);

void main()

{
    int  i, n,numLibreta,libreta ;
    float nota1, nota2,prom=0,promMax=0;
    char nombre[15],calif='N',nomb[15];

    printf("Ingrese cantidad de alumnos");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nIngrese nombre y numero de libreta del alumno\n");
        scanf("%s %d",nombre ,&numLibreta);
        printf("Ingrese notas\n");
        scanf("%f %f",&nota1,&nota2);

        promedio(nota1,nota2,&prom,&calif);

        if(prom>promMax)
            {promMax=prom;
            libreta=numLibreta;}
             //nomb=nombre;}

        printf("El alumno %s con libreta %d tuvo como promedio %f\n",nombre,numLibreta, prom);
        printf("\nSu calificacuin es: %c\n",calif);
    }

        printf("El alumno con libreta %d obtuvo el promedio mas alto:%f",libreta,promMax);

}

void promedio(float n1, float n2, float *retorno, char *calificacion)
{

   *retorno = (n1+n2)/2;
   if(*retorno>=7)
    *calificacion='P';
   else
    *calificacion='D';
}



