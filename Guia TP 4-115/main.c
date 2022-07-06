#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,fact;

    printf("Ingrese un numero: "); scanf("%d", &num); // pide un numero

    fact = 1;
    for(i = 1; i <= num; i++){  // i recorre hasta el numero inclusive y se incrementa en 1
        fact = fact * i;        //multiplicacion de 1 hasta los numeros que vaya recorriendo  "i"
    }
    printf("El factorial es: %d \n", fact);

    fact = 1;
    for(i = num; i > 0; i--){
        fact = fact * i;
    }
    printf("El factorial es: %d \n", fact);

    return 0;

}
        //num = 5
        //i = 1
        //fact = 1 * 1
        //fact = 1
        //i = 2
        //fact = 1 * 2
        //fact = 2
        //i = 3
        //fact = 2 * 3
        //fact = 6
        //i = 4
        //fact = 6 * 4
        //fact = 24
        //i = 5
        //fact = 24 * 5
        //fact = 120

        //num = 5
        //fact = 1
        //i = 1
        //fact = fact * i = 1 * 1
        //i = 2
        //fact = fact * i = 1 * 1 * 2
        //i = 3
        //fact = fact * i = 1 * 1 * 2 * 3
        //i = 4
        //fact = fact * i = 1 * 1 * 2 * 3 * 4
        //i = 5
        //fact = fact * i = 1 * 1 * 2 * 3 * 4 * 5

