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
    if (n % 2 == 0)
        printf("Ingreso un numero par");
    else
        printf("Ingreso un numero impar");

    return 0;
}
