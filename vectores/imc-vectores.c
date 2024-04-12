/*En una Clínica de Tratamientos de Nutrición se desea seleccionar un grupo de
pacientes para realizar un tratamiento nutricional.
Para ello se evalúa a 100 pacientes que se seleccionaron para formar parte del
tratamiento. Cuentan con una planilla que contiene los datos de los pacientes
atendidos: HC, peso, altura.
El Director de la Clínica necesita que se procesen los datos para obtener el IMC de
cada paciente que se someterá al tratamiento.
Se pide:
Procesar la planilla de datos almacenando en un vector de tipo float el IMC de los
todos los pacientes. El IMC (índice de masa corporal) se calcula de la siguiente
manera: peso / (altura*altura).*/

#include<stdio.h>
#include<stdlib.h>

#define MAX 2

/*float indiceDeMasaCorporal(float peso, float altura);

void main()
{
   float vectorImc[MAX];
   float peso, altura, IMC;
   int hc,i;

    for (i=0;i<MAX;i++)
    {
        printf("Ingrese datos del paciente: HC, peso, altutra");
        scanf("%d %f %f", &hc,&peso,&altura);

        IMC=indiceDeMasaCorporal(peso,altura);

        vectorImc[i]=IMC;

    }
    printf("IMC de los pacientes:\n");
    for(i=0;i<MAX;i++)
    {
        printf("\t%.2f",vectorImc[i]);
    }
}

float indiceDeMasaCorporal(float peso, float altura)
{
    return peso/(altura*altura);

}
*/

float indiceDeMasaCorporal(float peso, float altura);
void cargaVector(float vector[],int cantidad);
void muestraVector(float vector[],int cantidad);

void main()
{

    float vectorImc[MAX];

    cargaVector(vectorImc,MAX);

    printf("IMC de los paciente:\n");

    muestraVector(vectorImc,MAX);
}


float indiceDeMasaCorporal(float peso, float altura)
{
    return peso/(altura*altura);
}

void cargaVector(float vector[],int cantidad)
{
    float peso, altura, IMC=0;
    int hc,i;

        for (i=0;i<cantidad;i++)
        {
            printf("Ingrese datos del paciente: HC, peso, altutra");
            scanf("%d %f %f", &hc,&peso,&altura);

            IMC=indiceDeMasaCorporal(peso,altura);

            vector[i]=IMC;

        }
}

void muestraVector(float vector[],int cantidad)
{
    int i;
        for(i=0;i<cantidad;i++)
        {
            printf("\t[%.2f]",vector[i]);
        }

}


