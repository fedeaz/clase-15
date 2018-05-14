#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5];
    int* puntero;
    int i;

    puntero = &vec;



    for(i=0;i<5;i++)
    {
        printf("ingrese los numeros\n\n");
      scanf("%d",vec+i );

    }
    printf("\n\n");
        for(i=0;i<5;i++)
    {
      printf("%d",*(vec+i) );

    }


    return 0;
}
