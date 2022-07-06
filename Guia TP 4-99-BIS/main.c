#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,numeroAct, limiteSup;

    printf("Ingrese el primer numero: "); scanf("%d", &n1);
    printf("Ingrese el segundo numero: "); scanf("%d", &n2); printf("\n");

    if(n1 < n2){
        numeroAct =  n1;
        limiteSup = n2;
    }
    else{
        numeroAct = n2;
        limiteSup = n1;
    }

    while(numeroAct <= limiteSup){
        printf("%d\n", numeroAct);
        numeroAct++;
    }


    return 0;
}
