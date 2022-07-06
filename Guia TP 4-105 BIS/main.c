#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, suma;

    suma = 0;
    for(i = 12; i <= 48; i++){
        if(i % 4 == 0)
            suma += i;
    }

    printf("%d", suma);

    return 0;
}
