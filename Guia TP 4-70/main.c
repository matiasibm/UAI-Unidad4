#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    int n,m;

    //Ingreso numero 1 y 2
    printf("Ingrse el primer numero\n");
    scanf("%d", &n);
    printf("Ingrse el segundo numero\n");
    scanf("%d", &m);

    //Seleccion mayor de los dos
    if (n > m){
        printf("%d\n", n);
        printf("%d\n", m);
    }
    else {
        printf("%d\n", m);
        printf("%d\n", n);
    }
    return 0;
}
