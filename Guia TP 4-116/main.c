#include <stdio.h>
#include <stdlib.h>
//Desarrollar un programa que calcule el promedio de 10 número
//ingresados por el usuario
int main()
{
    int num, i, sumaNum;
    float prom;

    sumaNum = 0;
    prom = 0;
    for(i = 0; i < 10; i++){
        printf("Escriba un numero: "); scanf("%d", &num); // pide 10 ingresos
        sumaNum = sumaNum + num;    //suma de ingresos
    }

    prom = sumaNum / 10; // calculo promedio
    printf("%g", prom); // salida a pantalla

    return 0;
}
