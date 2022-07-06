#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Varibales
    int anio;

    //Ingreso anio
    printf("Programa para determinar si un anio es bisiesto\n");
    printf("Ingrese anio\n");
    scanf("%d",&anio);

        if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0){
            printf("El anio es bisiesto\n");
        }
        else{
            printf("El anio no es bisiesto");
        }

    return 0;
}
