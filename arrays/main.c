#include <stdio.h>
#include <stdlib.h>
#define CANT 5
int main()
{
    int Vec[5]={7,5,6,2,8};
    int aux;
    for(int i=0;i<CANT-1;i++){
        for(int j=i+1;j<CANT;j++){
            if(Vec[i]>Vec[j]){
                aux=Vec[i];
                Vec[i]=Vec[j];
                Vec[j]=aux;
            }
        }

    }
    for(int i=0;i<CANT;i++){
        printf("%d",Vec[i]);
    }
    return 0;
}
