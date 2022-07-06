#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,numeroAct,numeroLimite;

    printf("Ingrese el primer numero\n"); scanf("%d", &n1);
    printf("Ingrese el segundo numero\n"); scanf("%d", &n2);

    if(n1 < n2){
        numeroLimite = n2;
        if(n1 % 2 == 0)
            numeroAct = n1;
        else
            numeroAct = n1 + 1;
    }
    else{
        numeroLimite = n1;
        if(n2 % 2 == 0)
            numeroAct = n2;
        else
            numeroAct = n2 + 1;
    }

    while(numeroAct <= numeroLimite){
        printf("%d\n", numeroAct);
        numeroAct = numeroAct + 2;
    }

    return 0;
}
