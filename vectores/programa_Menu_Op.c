/*2. Sea B un arreglo de elementos enteros. Desarrollar un programa en C que permita
mediante el uso de un menú, seleccionar una de las siguientes opciones:
a. Asignar el valor (9) a todos los elementos de subíndice impar e imprimir el
arreglo modificado
b. Calcular la suma de todos los elementos del arreglo e imprimirla
c. Construir un arreglo C tal que sea B permutado (C[0]=A[N], C[1]=A[N-1],... )
Imprimir los elementos pares del vector B.*/

#include<stdio.h>
#include<stdlib.h>

int menu();
void cargaVector(int vector[],int cantidad);
void muestraVector(int vector[], int cantidad);
void asignarValor(int vector[],int cantidad);
int suma(int vecto[],int cantidad);
void permutar(int vector[],int vector2[],int cantidad);
void imprimirPares(int vector[], int cantidad);


void main()
{
    int vecB[50],vecC[50];
    int cant,s=0,op;

    do
    {
    op=menu();
        switch(op)
        {
        case 0:
                printf("Usted ha finalizado.\nGracias por usar nuestro programa!!!\n");
                break;
        case 1:
                system("cls");
                printf("opcion1:Carga Vector\n");
                printf("Ingrese cantidad de elementos\n");
               /* fflush(stdin)*/;scanf("%d",&cant);
                cargaVector(vecB,cant);
                muestraVector(vecB,cant);
                break;
        case 2:
                system("cls");
                printf("Opcion 2:Asigno valor\n");
                asignarValor(vecB,cant);
                muestraVector(vecB,cant);
                system("pause");
                break;
        case 3:
                system("cls");
                printf("\nOpcion 3:Suma\n");
                s=suma(vecB,cant);
                muestraVector(vecB,cant);
                printf("\nLa suma de los elementos es:%d",s);
                system("pause");
                break;
        case 4:
                system("cls");
                printf("\nOpcion 4:Permutado\n");
                permutar(vecB,vecC,cant);
                system("pause");
                break;
        case 5:
                system("cls");
                printf("\nOpcion 5:Pares\n");
                imprimirPares(vecB,cant);
               // muestraVector(vecB,cant);
                system("pause");
                break;

        default:
                printf("Opcion invalida, vuelva a elegir..\n");
                break;

       }
    }
    while(op!=0);
}

int menu()
{
    int opcion;
       do
       {
           printf("\n\t1-Carga vector.\n");
           printf("\n\t2-Asignar el valor 9 a todos los elementos de subindice impar.\n");
           printf("\n\t3-Calcular la suma de los elementos del arreglo.\n");
           printf("\n\t4-Construir un arreglo C tal que sea B permutado (C[0]=A[N], C[1]=A[N-1],... )\n");
           printf("\n\t5-Imprimir los elementos pares del vector B..\n");
           printf("\n\t0-Salida del programa.\n");
           printf("\n\nElija una opcion..\n");
           scanf("%d",&opcion);


       }
        while(opcion<0||opcion>6);

    return opcion;
}

void cargaVector(int vector[],int cantidad)
{
   int i;

   for(i=0;i<cantidad;i++)
   {
       printf("Ingrese valores..\n");
       scanf("%d",&vector[i]);
   }
}

void asignarValor(int vector[],int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        if(i%2!=0)
            vector[i]=9;
    }
}

void muestraVector(int vector[], int cantidad)
{
    int i;

    for(i=0;i<cantidad;i++)
    {
       printf("\nPosicion:%d - Elemento:[%d]\n",i,vector[i]);
    }
}

int suma(int vector[],int cantidad)
{
    int i,suma=0;
    for(i=0;i<cantidad;i++)
    {
        suma+=vector[i];
    }
return suma;
}
/*void permutar(int vector[],int vector2[],int cantidad)
{
    int i,indice=0;
    int n=cantidad-1;
    for(i=n;i<=0;i--)
    {
        vector2[indice]=vector[i];
        indice++;
    }


}
*/

void permutar(int vector[],int vector2[],int cantidad)
{
    int i;
    int n=cantidad-1;

    for (i=0;i<cantidad;i++)
        vector2[i]=vector[n-i];

    muestraVector(vector2,cantidad);
}

void imprimirPares(int vector[], int cantidad)
{
    int i,cont=0;
    for(i=0;i<cantidad;i++)
        if(vector[i]%2==0)
        {
            printf("\nElementos pares:[ %d ] \n",vector[i]);
            cont++;
        }

    //*cantidad=cont;

}
