/******************************************************************
* Programa: Ejemplo Clase 2
*
* Objetivo:
*   -Realizar un programa que solicite cinco números e imprima por pantalla el
*    promedio, el máximo y el mínimo.
*
* Aspectos a destacar:
*   -El uso de bucles para pedir un número tras otro
*   -El uso de acumuladores, se tiene que guardar la suma para luego hacer
*    el promedio
*   -El uso del if para preguntar si el numero ingresado es mayor o menor
*    para guardar los máximos y mínimos
*
* Version: 0.1 del 29 diciembre de 2015
* Autor: Mauricio Dávila
* Revisión: Ernesto Gigliotti
*
* *******************************************************************/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i;
    int maximo;
    int minimo;
    int acumulador;
    int numero;

    printf("Ingrese un numero:\n");
    scanf("%d/n",&numero);
    maximo=numero;
    minimo=numero;
    acumulador=numero;

    for (i=0;i<4;i++)
        {
            printf("Ingrese un numero:\n");
            scanf("%d/n",&numero);
            acumulador=acumulador+numero;

            if(numero>maximo)
            {
                maximo=numero;
            }
            if(numero<minimo)
            {
                minimo=numero;
            }
        }
        printf("El promedio es: %d\n",(acumulador/5));
        printf("El maximo es: %d\n",maximo);
        printf("El minimo es: %d\n",minimo);
    return 0;
}
