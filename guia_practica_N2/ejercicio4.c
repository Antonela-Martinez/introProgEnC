#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int  numLibreta;
    float nota1, nota2, nota3,promedio;
    char nombre[15];

    printf("Ingrese nombre y numero de libreta del alumno\n");
    scanf("%s%d",nombre ,&numLibreta);
    printf("Ingrese notas\n");
    scanf("%f%f%f",&nota1,&nota2,&nota3);

    promedio = (nota1+nota2+nota3)/3;

    printf("El alumno %s tuvo como promedio %f\n",nombre, promedio);

    if (promedio>=6 && promedio<9)

        {
          printf("APROBADO\n");
          printf("Numero de libreta:%d",numLibreta);
        }

        if (promedio>=9&&promedio<=10){
            printf("SOBRESALIENTE\n");
            printf("Numero de libreta:%d",numLibreta);}
        else
            if(promedio<4)
           {
             printf("DESAPROBADO\n");
             printf("Numero de libreta:%d",numLibreta);
           }

    return 0;
}
