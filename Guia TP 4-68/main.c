#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    int n;

    //Ingreso n
    printf("Ingrese un numero\n");
    scanf("%d", &n);

    //Condicion
    if (n < 0)
        printf("Su numero es negativo");

    else
        printf("Su numero es positivo");

    return 0;
}
