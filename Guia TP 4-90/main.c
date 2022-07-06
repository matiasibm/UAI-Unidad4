#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prestamo,totalConInteres,totalCuota,cantidadCuotas;

    printf("Ingrese el monto de su prestamo\n");
    scanf("%d", &prestamo);

    if(prestamo < 4000){
        totalConInteres = (prestamo * 0.15) + prestamo;

    }
    else{
        totalConInteres = (prestamo * 0.08) + prestamo;
    }
    if(prestamo > 60000){
        totalCuota = totalConInteres / 4;
        cantidadCuotas = 4;
    }
    else if(prestamo < 10000){
        totalCuota = totalConInteres / 1;
        cantidadCuotas = 1;
    }
    else if((prestamo >= 20000) && (prestamo <= 30000)){
        totalCuota = totalConInteres / 2;
        cantidadCuotas = 2;
    }
    else if((prestamo >= 10000) && (prestamo <= 60000)){
        totalCuota = totalConInteres / 5;
        cantidadCuotas = 5;
    }

    printf("\tCantidad de cuotas: %d\n\tValor: %d\n",cantidadCuotas,totalCuota);

    return 0;
}
