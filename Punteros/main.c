#include <stdio.h>
#include <stdlib.h>
void leerPuntero(int* p);
void mostrarVector1(int vec[],int tam);
void mostrarVector2(int vec[],int tam);
void mostrarVector3(int* vec,int tam);
void mostrarVector4(int* vec,int tam);
void getChar(char* message, char* caracter);
 typedef struct{

int legajo;
char nombre[50];
char sexo;
float sueldo;
}eEmpleados;

int main()
{
    eEmpleados unEmpleado= {1234, "Juan", 'm',1000};
    eEmpleados otroEmpleado= {1154, "Ana",'f',5000};
    eEmpleados lista[]={unEmpleado,otroEmpleado};
    for(int i=0; i<2; i++){
        printf("%s \n",(lista+i)->nombre);
        printf("%d ",(lista+i)->legajo);
        printf("%c ",(lista+i)->sexo);
        printf("%f \n",(lista+i)->sueldo);
    }






    /*eEmpleados* punteroEmpleados;
    punteroEmpleados = &unEmpleado;

    printf("Legajo: %d\n", punteroEmpleados->legajo);
    printf("Nombre: %s\n", punteroEmpleados->nombre);
    printf("Sexo: %c\n", punteroEmpleados->sexo);
    printf("Sueldo: %f", punteroEmpleados->sueldo);

   /* char mensaje[]= "Hola Mundo";

    mostrarCadena(mensaje);







   /* getChar("Ingrese sexo: ", &sexo);
    printf("sexo es : %c",sexo);










    /*mostrarVector1(vec,tam);
    mostrarVector2(vec,tam);
    mostrarVector3(vec,tam);
    mostrarVector4(vec,tam);






    /*int* p=&x;
    int** r=&p;

    printf("%d\n",**r);


    printf("direc X= x=%x\n",&x);

    leerPuntero(&x);*/


}
/*void mostrarCadena(char* cadena){

    while (*cadena != '\0'){
        printf("%c",*cadena);
        cadena++;
    }
}

/*void getChar(char* message, char* caracter){
    printf("%s",message);
    fflush(stdin);
    scanf("%c",caracter);

}

/*
void mostrarVector1(int vec[],int tam){
    printf("mostrarVector1= ");
    for(int i=0; i<tam;i++){

        printf("%d",vec[i]);
    }
}
void mostrarVector2(int vec[],int tam){
    printf("\nmostrarVector2= ");
    for(int i=0; i<tam;i++){

        printf("%d",*(vec+i));
    }
}
void mostrarVector3(int* vec,int tam){
    printf("\nmostrarVector3= ");
    for(int i=0; i<tam;i++){

        printf("%d",vec[i]);
    }
}
void mostrarVector4(int* vec,int tam){
    printf("\nmostrarVector4= ");
    for(int i=0; i<tam;i++){

        printf("%d",*(vec+i));
    }
}

/*

void leerPuntero(int* p){

    printf("dire guardada en p= %x\n",p);


}*/
