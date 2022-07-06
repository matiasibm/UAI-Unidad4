#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, numero;

    for(i = 1; i <= 100; i++)
        if(i % 10 == 0)
            printf("%d\n", i);
        else
            printf("%2d ", i);

    printf("\n\n");

    numero = 1;
    for(j = 1; j <= 10; j++){
        for(i = 1; i <= 10; i++){
            printf("%2d ", numero);
            numero++;
        }
        printf("\n");
    }


    return 0;
}
