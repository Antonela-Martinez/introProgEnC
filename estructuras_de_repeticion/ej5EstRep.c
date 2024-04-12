/*Ejercicio 5
Escribir un programa en C que permita ingresar para cada uno de los meses del añolas
temperaturas máximas y mínimas de cada día. Suponiendo que las mismas se ingre
san ordenadas por mes:
∙ Mostrar por pantalla para cada uno de los meses, el día en que se produjeron
lamáxima y la mínima y el valor de cada una de ellas.
∙ Mostrar por pantalla el día, mes y el valor de la temperatura máxima anual.*/

int main()
{
    int max, min,i,j,tempMax=0,tempMin=50;
    int d,m,diaMax=0,mesMax=0,diaMin=0,mesMin=0;

    for(j=0;j<2;j++)
    {
        printf("\t#########\n");

        for (i=0; i<2;i++)
            {
                printf("Ingrese temperatura maxima y minima de: \nDia: %d \nMes:%d\n", d=i+1,m=j+1);
                scanf("%d%d",&max,&min);
                //printf("dia:%dmes:%d",d,m);
                if (max>tempMax)
                    {tempMax=max;
                    diaMax=d;
                    mesMax=m;}
                if(min<tempMin)
                   {
                    tempMin=min;
                    diaMin=d;
                    mesMin=m;
                   }
            }
    }
        printf("\nTemperatura maxima fue el mes:%d, en el dia:%d\n\tTEMPERATURA MAXIMA:%d",mesMax,diaMax,tempMax);
        printf("\nTemperatura minima fue el mes:%d, en el dia:%d\n\tTEMPERATURA Minima:%d",mesMin,diaMin,tempMin);


    return 0;
}
