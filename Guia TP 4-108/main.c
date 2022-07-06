#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, contaDiv;
    float num;

    printf("Ingrese un numero: "); scanf("%d", &n);

    contaDiv = 0;
    for(i = 1; i <= n ; i++)
        if(n % i == 0)
            contaDiv++;

    if(contaDiv == 2)
        printf("Es primo");
    else
        printf("No es primo");

    return 0;
}
