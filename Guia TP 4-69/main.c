#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    int n,m,suma,resta,producto;

    //Ingreso n
    printf("Ingrese un numero\n");
    scanf("%d", &n);

    //Condicion n verdadera
    if (n > 0){
        printf("Ingrese otro numero\n");
        scanf("%d", &m);
        suma = n + m;
        resta = n - m;
        producto = n * m;
        printf("La suma de ambos es %d \nSu resta es %d\nSu multiplicacion es %d\n", suma, resta, producto);

    }
    //Condicion n falsa
    else{
        printf("Su numero es negativo, no se puede ejecutar");
    }

    return 0;
}
