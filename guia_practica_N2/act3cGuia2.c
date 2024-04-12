/*c Ingresar tres datos de tipo carácter (letras), escribirlos ordenados
alfabéticamente.
*/
#include<stdio.h>

int main()
{
    char a, b, c, mayor='a', menor='z', medio='f';
    printf ("\n Ingrese TRES caracteres\n");
    scanf("%c %c %c", &a, &b, &c);
    if (a > b) {
        if (a > c)
        { mayor = a;
            if (b > c)
            { medio =b;
              menor =c;
            }
            else
            {medio =c; menor =b; } }
            else
            {mayor =c; medio =a; menor =b; }
            }
            else
                if (b > c)
                { mayor = b;
                    if (a > c)
                    { medio =a;
                    menor =c; }
                    else
                    {medio =c; menor =a; } }
                    else
                    {mayor = c; medio = b; menor = a;}

    printf ("Mayor : %c Medio : %c Menor : %c", mayor, medio, menor);




    return 0;
}
