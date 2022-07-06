#include <stdio.h>
#include <stdlib.h>
//Desarrollar un programa que calcule la suma de los cuadrados de los
//100 primeros números
int main()
{
    int i, suma;

    suma = 0;
    for(i = 1; i <= 100; i++){
        suma = suma + (i * i);
    }
    printf("La suma de los cuadrados es %d", suma);

    return 0;
}
