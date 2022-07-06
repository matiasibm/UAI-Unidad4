#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    float precioProducto,precioTotal,ivaDiscriminado;
    int situacion;

    //Ingreso precio del producto
    printf("Ingrese el precio del producto\n");
    scanf("%f",&precioProducto);

    //Ingreso situacion fiscal
    printf("Ingrese su situacion fiscal para continuar\n");
    printf("\t1- para consumidor final\n");
    printf("\t2- para iva discriminado\n");
    printf("\t3- para iva al 50 %%\n");
    scanf("%d", &situacion);

    //Situacion para consumidor final
    if (situacion == 1){
        precioTotal = (precioProducto * 0.21) + precioProducto;
        printf("\tSituacion: Consumidor final\n");
        printf("\tTotal a pagar: $%g\n",precioTotal);
    }
    //Situacion para iva discriminado
    else if(situacion == 2){
        ivaDiscriminado = precioProducto * 0.21;
        precioTotal = ivaDiscriminado + precioProducto;
        printf("\tSituacion: Iva discriminado\n");
        printf("\tPrecio del producto: $%g\n",precioProducto);
        printf("\tIva del producto: $%g\n",ivaDiscriminado);
        printf("\tTotal a pagar: $%g\n",precioTotal);
    }
    //Situacion para iva al 50%
    else if(situacion == 3){
        ivaDiscriminado = precioProducto * (0.5 * 2);
        precioTotal = ivaDiscriminado + precioProducto;
        printf("\tSituacion: 50%% de iva\n");
        printf("\tPrecio del producto: $%g\n",precioProducto);
        printf("\tIva del producto: $%g\n", ivaDiscriminado);
        printf("\tTotal a pagar: $%g\n",precioTotal);
    }
    //Situacion invalida
    else{
        printf("Situacion invalida, vuelva a intentar\n");
    }

    return 0;
}
