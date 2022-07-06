#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numer, suma;

    suma = 0;
    numer = 12;
    while(numer <= 48){
        if(numer % 4 == 0)
            suma+= numer;
        numer++;
    }
    printf("%d", suma);

    return 0;
}
