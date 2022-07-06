#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,contador;

    printf("Ingrese el primer numero\n"); scanf("%d", &n1);
    printf("Ingrese el segundo numero\n"); scanf("%d", &n2);

    if(n1 < n2){
        contador = n1;
        while(contador <= n2){
            printf("%d\n", contador);
            contador++;
        }
    }
    else{
        contador = n2;
        while(contador <= n1){
            printf("%d\n", contador);
            contador++;
        }
    }

    return 0;
}
