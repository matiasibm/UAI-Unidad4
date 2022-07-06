#include <stdio.h>
#include <stdlib.h>

//Ejercicio 110

int main()
{
    int n, a, b, c;

    printf("Ingrese un numero: "); scanf("%d", &n);

    a = 0;
    b = 1;
    while(a <= n){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    return 0;
}
