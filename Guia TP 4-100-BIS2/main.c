#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,numeroAct, numeroLimite;

    printf("Ingrese el primer numero: "); scanf("%d", &n1);
    printf("Ingrese el segundo numero: "); scanf("%d", &n2); printf("\n");

    if(n1 < n2){            //n1 más chico que n2
        numeroLimite = n2;
        numeroAct = n1;
    }
    else{                   //n2 mas chico que n1
        numeroLimite = n1;
        numeroAct = n2;
    }

    while(numeroAct <= numeroLimite){
        if(numeroAct % 2 != 0)
            printf("%d \n", numeroAct);
        numeroAct++;
    }

    return 0;
}
