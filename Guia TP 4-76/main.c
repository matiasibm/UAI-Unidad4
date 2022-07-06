#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    int agua;

    //Ingreso temperatura
    printf("Ingrese la temperatura del agua\n");
    scanf("%d",&agua);

        if(agua < 0){
            printf("El estado del agua es solido\n");
        }
        else if (agua < 100){
            printf("El estado del agua es liquido\n");
            }
        else if (agua >= 100){
            printf("El estado del agua es gaseoso\n");
        }

    return 0;
}
