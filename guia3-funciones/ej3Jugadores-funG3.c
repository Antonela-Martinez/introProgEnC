/*3. Cada uno de los equipos de la primera división de futbol, tiene un plantel de 33
jugadores. De cada jugador se conoce una terna de datos: nombre, peso y edad. Los datos
correspondientes a 9 equipos se envían a la sede central para su análisis. Las 33 primeras
ternas de datos corresponden al equipo No 1, las 33 siguientes ternas al equipo No 2 y
así sucesivamente.
Ingresar el conjunto de datos y calcular los siguientes valores:
• Peso y edad promedio de cada uno de los nueve equipos.
• Peso y edad promedio de todos los jugadores.*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void calcular(float *pesoPromedio, int *edadPromedio);


void main()
{
    int i,equipo,edadPromTotal, edadProm;
    float pesoProm,pesoPromTotal;
    char nombreEquipo[30];

    printf("Ingrese cantidad de equipos\n");
    scanf("%d",&equipo);

    pesoPromTotal=0;
    edadPromTotal=0;

        for (i=0;i<equipo;i++)
            {
                pesoProm=0;
                edadProm=0;
                system("cls");
                printf("\nCalculando datos del EQUIPO %d\n", i+1);
                printf("Ingrese nombre: ");
                fflush(stdin);gets(nombreEquipo);
                calcular(&pesoProm,&edadProm);

                printf("Peso Promedio del equipo %s es: %.2f\n",nombreEquipo, pesoProm);
                printf("Edad Promedio del equipo %s es: %d\n",nombreEquipo,edadProm);
                system("pause");

                pesoPromTotal+=pesoProm;
                edadPromTotal+=edadProm;

            }
        system("cls");
        printf("\nEl promedio de edad general es:%d\n",edadPromTotal/equipo);
        printf("El promedio de peso general es:%.2f\n",pesoPromTotal/equipo);
}

void calcular(float *pesoPromedio, int *edadPromedio)
{
    int edad,sumaEdad=0, i, cantJugador;
    float peso,sumaPeso=0;
    char nombre[30];

    printf("Ingrese cantidad de jugadores\n");
    scanf("%d",&cantJugador);

    for(i=0;i<cantJugador;i++)
    {
        system("cls");
        printf("Ingrese Nombre del Jugador..\n");
        fflush(stdin);gets(nombre);
        printf("Ingrese peso y edad del jugador\n");
        scanf("%f %d", &peso, &edad);

        sumaPeso+=peso;
        sumaEdad+=edad;

    }

      *edadPromedio=sumaEdad/cantJugador;
      *pesoPromedio=sumaPeso/cantJugador;
}
