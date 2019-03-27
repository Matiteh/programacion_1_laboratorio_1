#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,z,result=1;
    printf("\nIngrese numero:");
    scanf("%d",&z);
    if (z<0)
    {
        printf("ERROR");
        return 0;
    }
    else
    {
        for (i=1; i<=z; i++ )
        {
            result*=i;
        }
    }
    printf("factorial de %d = %d\n",z,result);
    return 0;
}
