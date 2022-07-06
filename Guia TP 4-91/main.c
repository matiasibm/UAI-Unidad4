#include <stdio.h>
#include <stdlib.h>

int main()
{
    int   tipoVehiculo,tipoMedida;
    double medidaConductor;

    printf("Ingrese tipo de vehiculo\n\t1-Moto\n\t2-Auto\n\t3-Taxi\n\t4-Colectivo\n\t5-Camion\n");
    scanf("%d", &tipoVehiculo);

    printf("Ingrese tipo de medicion\n\t1-Sangre\n\t2-Aire\n");
    scanf("%d", &tipoMedida);

    printf("Ingrese medicion del conductor\n");
    scanf("%lf", &medidaConductor);

    if((tipoVehiculo == 1) && (tipoMedida == 1)){       //moto - sangre
        if(medidaConductor <= 0.15)
            printf("\tPuede circular\n");
        else{
            printf("\tExcedido\n");
        }
    }
    else if((tipoVehiculo == 1) && (tipoMedida == 2)){  //moto - aire
        if(medidaConductor <= 0.08){
            printf("\tPuede circular\n");
        }
        else{
            printf("\tExcedido\n");
        }
    }
    else if((tipoVehiculo == 2) && (tipoMedida == 1)){  //auto - sangre
        if(medidaConductor <= 0.20){
            printf("\tPuede circular\n");
        }
        else{
            printf("\tExcedido\n");
        }
    }
    else if((tipoVehiculo == 2) && (tipoMedida == 2)){  //auto - aire
        if(medidaConductor <= 0.10){
            printf("\tPuede circular\n");
        }
        else{
            printf("\tExcedido\n");
        }
    }
    else if((tipoVehiculo == 3) && (tipoMedida == 1)){  //taxi - sangre
        if(medidaConductor <= 0.10){
            printf("\tPuede circular\n");
        }
        else{
            printf("\tExcedido\n");
        }
    }
    else if((tipoVehiculo == 3) && (tipoMedida == 2)){  //taxi - aire
        if(medidaConductor <= 0.05){
            printf("\tPuede circular\n");
        }
        else{
            printf("\tExcedido\n");
        }
    }
    else if((tipoVehiculo == 4) && (tipoMedida == 1)){  //colectivo - sangre
        if(medidaConductor <= 0.05){
            printf("\tPuede circular\n");
        }
        else{
            printf("\tExcedido\n");
        }
    }
    else if((tipoVehiculo == 4) && (tipoMedida == 2)){  //colectivo - aire
        if(medidaConductor <= 0.02){
            printf("\tPuede circular\n");
        }
        else{
            printf("\tExcedido\n");
        }
    }
    else if((tipoVehiculo == 5) && (tipoMedida == 1)){  //camion - sangre
        if(medidaConductor <= 0.04){
            printf("\tPuede circular\n");
        }
        else{
            printf("\tExcedido\n");
        }
    }
    else if((tipoVehiculo == 5) && (tipoMedida == 2)){  //camion - aire
        if(medidaConductor <= 0.02){
            printf("\tPuede circular\n");
        }
        else{
            printf("\tExcedido\n");
        }
    }

    return 0;
}
