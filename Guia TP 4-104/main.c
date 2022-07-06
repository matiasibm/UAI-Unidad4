#include <stdio.h>
#include <stdlib.h>

int main()
{
    int caracter;

    caracter = 32;
    while(caracter <= 164){
        if(caracter <= 47 || caracter >= 58)
            printf("%c ", caracter);
        caracter++;
    }

    return 0;
}
