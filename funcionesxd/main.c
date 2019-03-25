#include <stdio.h>
#include <stdlib.h>
int maximo (int x, int y, int h, int j);
int minimo (int x, int y, int h, int j);
int main()
{
    int num1;
    int num2;
    int num3;
    int num4;
    int rta;
    int rta2;

    printf("Ingrese el primer numero ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero ");
    scanf("%d", &num2);
    printf("Ingrese el tercer numero ");
    scanf("%d", &num3);
    printf("Ingrese el cuarto numero ");
    scanf("%d", &num4);

    rta= maximo(num1,num2,num3,num4);
    printf("El maximo es: %d\n",rta);

    rta2=minimo(num1,num2,num3,num4);
    printf("El minimo es: %d",rta2);

    return 0;

}

int maximo (int x, int y, int h, int j)
{
    int maximo;
    if (x>y && x>h && x>j)
    {
        maximo=x;
    }
    else if(y>x && y>h && y>j)
    {
        maximo=y;
    }
    else if(h>y && h>x && h>j)
    {
        maximo=h;
    }
    else
    {
        maximo=j;
    }

    return maximo;
}
int minimo (int x, int y, int h, int j)
{
    int minimo;
    if (x<y && x<h && x<j)
    {
        minimo=x;
    }
    else
    {
        if(y<x && y<h && y<j)
        {
            minimo=y;
        }
        else
        {
            if(h<y && h<x && h<j)
            {
                minimo=h;
            }
            else
            {
                minimo=j;
            }
        }
    }

    return minimo;
}
