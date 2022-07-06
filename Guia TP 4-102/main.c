#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,numeroAct,numeroLimite;

    printf("Ingrese el primer numero: "); scanf("%d", &n1);
    printf("Ingrese el segundo numero: "); scanf("%d", &n2);

    while(n1 <= n2){
        printf("Error, vuelva a ingresar\n");
        printf("Ingrese el primer numero: "); scanf("%d", &n1);
        printf("Ingrese el segundo numero: "); scanf("%d", &n2);
    }

    numeroLimite = n1;

    if(n2 % 2 == 0)
        numeroAct = n2;
    else
        numeroAct = n2 + 1;

    while(numeroAct <= numeroLimite){
        printf("%d ", numeroAct);
        numeroAct = numeroAct + 2;
    }


    return 0;
}
