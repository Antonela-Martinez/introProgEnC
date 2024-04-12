#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    float altura,peso,imc;     ///defino variable altura de tipo decimal
    printf("ingrese datos\n");

    printf("edad: ");
    scanf("%d",&edad);
    system("pause");

    printf("altura:");
    scanf("%f",&altura);

    printf("peso:");
    scanf("%f",&peso);

    imc=peso/(altura*altura);
    system("cls"); /* limpia la pantalla. una vez ingresado los datos, borra lo que esta arriba, y solo muestra lo que continua*/
    printf("\tsu edad es %d y su altura es %.2f\n", edad, altura);
    printf("Su imc es: %.2f, saludable", imc);


    return 0;
}
