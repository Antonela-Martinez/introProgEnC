#include<stdio.h>
int main()

{
    int a, b, c, mayor, menor, medio;
    printf ("\n Ingrese TRES valores\n");
    scanf("%d %d %d", &a, &b, &c);
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

    printf ("Mayor : %d Medio : %d Menor : %d", mayor, medio, menor);

return 0;
}

