/*5. En N ciudades (numeradas de 1 a N) se han registrado los porcentajes de habitantes
fumadores en 1999 y en 2005. Realizar un programa que:
a. Determine, a partir del promedio de ambos años, que ciudad tiene el mayor
promedio de fumadores.
b. Indique en que ciudad ha disminuido más la cantidad de fumadores.*/

#include<stdio.h>
#include<stdlib.h>

void cargaVectores(int v1999[], int v2005[], int N);
//void cargaV(int vec[], int N);
void maxProm(int v1999[], int v2005[], int N, int *maximo);
int minCant(int v1999[], int v2005[], int N);
void muestraVectores(int v1999[], int v2005[], int N);

int main()
{
  int v1999[100];
  int v2005[100];
  int N,max, min;

  printf("ingrese cantidad de ciudad a evaluar ");
  scanf("%d", &N);

  cargaVectores(v1999, v2005, N);
 // cargaV(v1999, N);
 // cargaV(v2005, N);

  maxProm (v1999, v2005, N, &max);
  printf("\n\n##############\n\n");
  printf ("La ciudad con mayor promedio de fumadores es %d ", max);

  min=minCant(v1999, v2005, N);
  printf("\n\nLa ciudad donde mas disminuyo la cantidad de fumadores es %d", min);

  muestraVectores(v1999, v2005, N);
  return 0;
}

void cargaVectores(int v1999[], int v2005[], int N)
{
  int indice;
    for (indice=0; indice<N; indice++)
    {
        printf("\n\nIngrese datos de la ciudad [%d] ", indice+1);
        printf("\nAnio 1999 "); scanf("%d",&v1999[indice]);
        printf("Anio 2005 "); scanf("%d",&v2005[indice]);
    }
}

void muestraVectores(int v1999[], int v2005[], int N)
{
  int indice;
    for (indice=0; indice<N; indice++)
    {
        printf("\n\nDatos de la ciudad [%d] ", indice+1);
        printf("\nAnio 1999 [%d]", v1999[indice]);
        printf("\nAnio 2005 [%d]", v2005[indice]);
    }
}

void maxProm(int v1999[], int v2005[], int N, int *maximo)
{
    int indice, maxi=0;
    float prom=0;

    for (indice=0; indice<N; indice++)
    {
        prom=(v1999[indice] + v2005[indice])/2;
        if ( prom > maxi)
            {
                maxi=prom;
                *maximo=indice+1;
            }
    }
}

int minCant(int v1999[], int v2005[], int N)
{
    int indice; int min, mayorDisminucion=0;
    float resultado=0;

    for (indice=0; indice<N; indice++)
    {
        if (v1999[indice]<=v2005[indice])
            resultado=(v2005[indice]-(v1999)[indice]);
        else
            resultado=((v1999)[indice]- v2005[indice]);

        if (resultado>mayorDisminucion)
        {
            mayorDisminucion=resultado;
            min=indice+1;
        }
    }
    return min;
}
