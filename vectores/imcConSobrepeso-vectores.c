/*En una Clínica de Tratamientos de Nutrición se desea seleccionar un grupo de
pacientes para realizar un tratamiento nutricional.
Para ello se evalúa a 100 pacientes y se seleccionaran para formar parte del
tratamiento, solo a quienes tengan sobrepeso. Cuentan con una planilla que contiene
los datos de los pacientes atendidos: HC, peso, altura.
El Director de la Clínica necesita que se procesen los datos para obtener el TOTAL de
pacientes que se someterán al tratamiento.
Se pide:
Procesar la planilla de datos almacenando en un vector de tipo entero la HC solo de
los pacientes que tienen sobrepeso. Un paciente tiene sobrepeso si su IMC (índice de
masa corporal) es superior a 25. Se calcula de la siguiente manera: peso /
(altura*altura).*/


#include<stdio.h>
#include<stdlib.h>

#define MAX 2


float indiceDeMasaCorporal(float peso, float altura);
void cargaVector(int vector[],int *cantidad);
void muestraVector(int vector[],int cantidad);

void main()
{

    int vectorHC[MAX];
    int cant=MAX;

    cargaVector(vectorHC,&cant);

    printf("HC de los paciente con sobrepeso:\n");

    muestraVector(vectorHC,cant);
}


float indiceDeMasaCorporal(float peso, float altura)
{
    return peso/(altura*altura);
}

void cargaVector(int vector[],int *cantidad)
{
    float peso, altura, IMC=0;
    int hc,i, cont=0;

        for (i=0;i<*cantidad;i++)
        {
            printf("Ingrese datos del paciente: HC, peso, altutra");
            scanf("%d %f %f", &hc,&peso,&altura);

            IMC=indiceDeMasaCorporal(peso,altura);

            if(IMC>25)
            {
                 vector[cont]=hc;
                 cont++;

            }
        }
    *cantidad=cont;
}

void muestraVector(int vector[],int cantidad)
{
    int i;
        printf("Los pacientes con sobrepeso son:\n");
        for(i=0;i<cantidad;i++)

            printf("\t[%d]",vector[i]);

}
