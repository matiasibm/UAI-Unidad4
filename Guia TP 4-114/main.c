#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c;

    do{
        printf("Desea salir (S/N)");
        fflush(stdin);
        scanf("%c", &c);
    }
    while (c != 's' && c != 'S');


    return 0;
}
