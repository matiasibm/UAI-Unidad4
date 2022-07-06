#include <stdio.h>
#include <stdlib.h>


//Ejercicio 96 y 97 junto


int main()
{
    //Variables
    int dia,mes,anio,diaSiguiente,mesSiguiente,anioSiguiente,b1,b2,b3;

    //Ingreso
    printf("Ingrese una fecha dd/mm/aaaa\n"); scanf("%d/%d/%d", &dia, &mes, &anio);

    if((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)){                                                         //Anio bisiesto
        anioSiguiente = anio;
        b1 = (mes == 2 && dia == 29);
        b2 = (dia == 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11);
        b3 = (dia == 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12);
        if(b1 || b2 || b3){                                                                                              //Ultimo dia, mes siguiente
            diaSiguiente = 1;
            mesSiguiente = mes + 1;
        }
        else{                                                                                                            //Dias restantes
            diaSiguiente = dia + 1;
            mesSiguiente = mes;
        }
        if (mesSiguiente == 13){                                                                                         //Anio siguiente
            mesSiguiente = 1;
            anioSiguiente = anio + 1;
        }
    }
    else{                                                                                                                //Anio no bisiesto
        anioSiguiente = anio;
        b1 = (mes == 2 && dia == 28);
        b2 = (dia == 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11);
        b3 = (dia == 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12);
        if(b1 || b2 || b3){                                                                                              //Ultimo dia , mes siguiente
            diaSiguiente = 1;
            mesSiguiente = mes + 1;
        }
        else{                                                                                                            //Resto de dias
            diaSiguiente = dia + 1;
            mesSiguiente = mes;
        }
        if (mesSiguiente == 13){                                                                                         //Anio siguiente
            mesSiguiente = 1;
            anioSiguiente = anio + 1;
        }
    }

    printf("%d/%d/%d", diaSiguiente, mesSiguiente, anioSiguiente);                                                       //Salida pantalla

    return 0;
}
