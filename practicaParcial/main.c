#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

#define CANT 5

typedef struct
{

    int legajo;
    char nombre[20];
    char apellido[20];
    char sexo;
    float sueldo;
    int idSector;
    int ocupado;

} eEmpleado;

typedef struct
{

    int id;
    char descripcion[20];

} eSector;

void initSectores(eSector Sectores[],int cantidad);

int main()
{
    initSectores(Sectores, CANT);
    return 0;
}

void initSectores(eSector Sectores[],int cantidad){
   eSector sec[]={1,"RRHH"};
   for(int i=0;i<cantidad;i++){
    Sectores[i]=sec[i];
   }
}
