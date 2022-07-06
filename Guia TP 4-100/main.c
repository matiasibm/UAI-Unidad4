#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,contador;

    printf("Ingrese el primer numero\n"); scanf("%d", &n1);
    printf("Ingrese el segundo numero\n"); scanf("%d", &n2);

    if(n1 < n2){        //N1 es menor a N2
        if(n1 % 2 != 0)
            contador = n1;
        else
            contador = n1 + 1;

        while(contador <= n2){
            printf("%d\n", contador);
            contador = contador + 2;
        }
    }
    else{           //N2 es menor a N1
        if(n2 % 2 != 0)
            contador = n2;
        else
            contador = n2 + 1;

        while(contador <= n1){
            printf("%d\n", contador);
            contador = contador + 2;
        }
    }

    return 0;
}
