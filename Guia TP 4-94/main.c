#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horaActual,minutoActual,segundoActual,horaComida,minutoComida,segundoComida,horaFinal,minutoFinal,segundoFinal;
    int acarreoMinutos = 0;
    int acarreoHoras = 0;

    printf("Ingrese la hora actual (hh:mm:ss)\n"); scanf("%d:%d:%d",&horaActual,&minutoActual,&segundoActual);

    printf("Ingrese el tiempo de coccion de su comida (hh:mm:ss)\n"); scanf("%d:%d:%d",&horaComida,&minutoComida,&segundoComida);

    segundoFinal = segundoActual + segundoComida;
    if(segundoFinal >= 60){
        segundoFinal = segundoFinal - 60;
        acarreoMinutos = 1;
    }

    minutoFinal = minutoActual + minutoComida + acarreoMinutos;
    if(minutoFinal >= 60){
        minutoFinal = minutoFinal - 60;
        acarreoHoras = 1;
    }

    horaFinal = horaActual + horaComida + acarreoHoras;
    if(horaFinal >= 24){
        horaFinal = horaFinal - 24;
    }

    printf("%d:%d:%d",horaFinal,minutoFinal,segundoFinal);

    return 0;
}
