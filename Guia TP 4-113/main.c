#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, multp;

    for(n1 = 1 ; n1 <= 10; n1++){       //n1 = 1 recorre las 10 vuetlas de n2 y sigue con n1 = 2
        for(n2 = 1; n2 <= 10; n2++){    //n2 hace de segundo operador n1 que representa a las tablas
            multp = n1 * n2;
            printf("\n%3d x %d = %d", n1, n2, multp);
        }
        printf("\n");
    }

    return 0;
}
