#include <stdio.h>
#include <stdlib.h>

#define consumoDiarioExp 1.3

int main()
{
    int cantidadExp, diasTravesia, probabilidadSup;
    float cantidadComida, consumoDia, consumoTotal,diasRestantes;
    char clima;

    //Ingreso de datos
    printf("Ingrese cantidad de exploradores\n"); scanf("%d",&cantidadExp);
    printf("Ingrese los dias de la travesia\n"); scanf("%d",&diasTravesia);
    printf("Ingrese en (kg) la cantidad de comida que lleva\n"); scanf("%f",&cantidadComida);
    printf("Ingrese el estado del tiempo\nI-Intrasendente\nB-Bueno\nM-Malo\n"); fflush(stdin);scanf("%c",&clima);

    //Calculo de consumo esperado de comida
    consumoDia = cantidadExp * consumoDiarioExp;
    consumoTotal = consumoDia * diasTravesia;

    //Determinacion de la probabilidad de supervivencia
    if(cantidadComida < consumoTotal){                                          //Comida no alcanza
        diasRestantes = (consumoTotal - cantidadComida) / consumoDia;
        if(diasRestantes <= 3 && clima == 'I')                                  //0-3 dias restantes y clima Intrasendente
            probabilidadSup = 100;
        else if(diasRestantes > 5 && clima == 'I')                              //mayor 5 dias restantes y clima Intrasendente
            probabilidadSup = 0;
        else if(diasRestantes >= 4 && diasRestantes <= 5 && clima == 'B')       //entre 4-5 dias y clima Bueno
            probabilidadSup = 50;
        else if(diasRestantes >= 4 && diasRestantes <= 5 && clima == 'M')       //entre 4-5 dias y clima Malo
            probabilidadSup = 0;
    }
    else                                                                        //Comida alcanza
        probabilidadSup = 100;

    //Impresion de resultado
    printf("La probabilidad de supervivencia es: %d%%\n", probabilidadSup);
    printf("La cantidad que va a sobrevivir es: %d\n", (cantidadExp * probabilidadSup) / 100);

    return 0;
}
