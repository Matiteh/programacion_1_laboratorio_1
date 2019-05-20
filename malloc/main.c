#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pnum;
    int* paux;

    pnum=(int*)malloc(sizeof(int)*5);

    if(pnum==NULL){
        printf("No se pudo conseguir memoria");
        system("pause");
        exit(1);
    }
    for(int i=0;i<5;i++){
        printf("Ingrese un numero\n");
        scanf("%d",(pnum+i));
        system("cls");
    }
    printf("El array de numeros es: \n");
    for(int i=0;i<5;i++){
        printf("%d ",*(pnum+i));
    }

    paux=(int*)realloc(pnum,sizeof(int)*10);

    if(paux!=NULL){
        pnum=paux;
    }else{
        printf("No se pudo conseguir memoria");
        system("pause");
        exit(1);
    }
    for(int f=5;f<10;f++){
        printf("\nIngrese 5 numeros mas\n");
        scanf("%d",(pnum+f));
        system("cls");
    }
    printf("El array de numeros nuevo es: \n");
    for(int i=0;i<10;i++){
        printf("%d ",*(pnum+i));
    }


    return 0;
}
