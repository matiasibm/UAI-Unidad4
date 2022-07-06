#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;

    printf("Ingrese un numero: "); scanf("%d", &n);

    for(i = 1; i <= n; i++)
        printf("* ");

    return 0;
}
