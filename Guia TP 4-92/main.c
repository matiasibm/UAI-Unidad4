#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valorPeaje,tipoVehiculo,nPasajeros,horaCongA,horaCongB,horaCongC,horaCongD,horas,minutos;

    printf("Ingrese tipo de vehiculo\n\t1-Auto\n\t2-Camion\n");
    scanf("%d", &tipoVehiculo);

    printf("Ingrese numero de pasajeros\n");
    scanf("%d", &nPasajeros);

    printf("Ingrese hora actual hh-mm\n");
    scanf("%d-%d", &horas,&minutos);

    printf("Ingrese franja horaria congestionada por la manana AA-BB\n");
    scanf("%d-%d",&horaCongA,&horaCongB);

    printf("Ingrese franja horaria congestionada por la tarde AA-BB\n");
    scanf("%d-%d",&horaCongC,&horaCongD);

    if(((horas > horaCongA) && (horas < horaCongB )) || ((horas >  horaCongC) && (horas < horaCongD))){ //Peaje alta congestion
        if(tipoVehiculo == 1){                                                                          //Auto
            if(nPasajeros >= 3)                                                                         //3 o + pasajeros
                valorPeaje = 0;
            else                                                                                        //2 o 1 pasajeros
                valorPeaje = 15;
        }
        else{
            valorPeaje = 100;                                                                            //Camion
        }
    }
    else{                                                                                               //Peaje baja congestion
        if(tipoVehiculo == 1)                                                                           //Auto
            valorPeaje = 30;
        else                                                                                            //Camion
            valorPeaje = 50;
    }
    printf("Usted debera abonar %d",valorPeaje);

    return 0;
}
