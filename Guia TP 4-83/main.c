#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    int horas,minutos,segundos,totalSegundos;
    float totalPagar;

    //Ingreso llamada
    printf("Ingrese duracion de la llamada Horas-Minutos-Segundos\n");
    scanf("%d-%d-%d",&horas,&minutos,&segundos);

    //Calculo segundos
    totalSegundos = horas * 3600 + minutos * 60 + segundos;

    if(totalSegundos <= 300){
        totalPagar = totalSegundos * 0.01;
        printf("Deberas abonar %.2f pesos",totalPagar);
    }
    else if((totalSegundos >= 301) && (totalSegundos <= 1000)){
        totalPagar = totalSegundos * 0.005;
        printf("Deberas abonar %.2f pesos",totalPagar);
    }
    else if(totalSegundos >= 1000){
        totalPagar = totalSegundos * 0.001;
        printf("Deberas abonar %.2f pesos",totalPagar);
    }

    return 0;
}
