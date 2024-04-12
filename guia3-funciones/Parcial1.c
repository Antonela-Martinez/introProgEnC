#include<stdio.h>
void caracter(int edad, float peso,char *cat);
float porcentaje(int cantCat,int cantidad);
char catMasAlta(int cA,int cB,int cC);

int main()
{
    int n, cantidad,edad,contadorCatA=0,contadorCatB=0,contadorCatC=0;
    float peso,xa=0,xb=0,xc=0;
    char cat,xMayor;
    printf("Ingrese cantidad de personas ingresadas al Club\n\n");
    scanf("%d",&cantidad);

    for (n=1; n<=cantidad;n++)
       {
    printf("\nIngrese Edad y peso de la persona\n");
    scanf("%d%f",&edad,&peso);

    caracter(edad,peso,&cat);

    if (cat=='A')
    {contadorCatA++;
    xa= porcentaje(contadorCatA,cantidad);}
    else
       if(cat=='B')
    {contadorCatB++;
    xb= porcentaje(contadorCatB,cantidad);}
       else
        {contadorCatC++;
    xc= porcentaje(contadorCatC,cantidad);}

       }

        printf("\nEl porcentaje de personas en la Categoria A es: %.2f", xa);
        printf("\nEl porcentaje de personas en la Categoria B es: %.2f", xb);
        printf("\nEl porcentaje de personas en la Categoria C es: %.2f", xc);

      xMayor= catMasAlta(contadorCatA,contadorCatB,contadorCatC);
      printf("\nLa mayor cantidad de personas esta en la Categoria:\t%c", xMayor);

      return 0;
}

void caracter(int edad, float peso,char *cat)

{
    if (edad>=15&&edad<=20&&peso>=45&&peso<=55)
    *cat='A';
    else
    if(edad>=25&&edad<=40&&peso>=55&&peso<=60)
     *cat='B';
     else
        if(edad>=40&&peso>=65)
      *cat='C';

}
float porcentaje(int cantCat,int cantidad)
    {
        return ((cantCat*100)/cantidad);
    }

char catMasAlta(int cA,int cB,int cC)

{
    if (cA>cB&&cA>cC)
    return'A';
    if(cB>cA&&cB>cC)
    return'B';
    else
        return'C';

}

