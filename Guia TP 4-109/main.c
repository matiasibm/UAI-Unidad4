#include <stdio.h>
#include <stdlib.h>

//Ejercicio 109

int main()
{
    int n, i, a, b, c;
    int fn, f1, f2;

    printf("Ingrese un numero: "); scanf("%d", &n);

    a = 0;
    b = 1;
    for(i = 0; i < n; i++){
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");

    f2 = 0;
    f1 = 1;
    fn = 0;
    i = 0;
    while(i < n){
        if (i == 0)
            fn = 0;
        else if (i == 1)
            fn = 1;
        else
            fn = f1 + f2;

        printf("%d ", fn);
        f2 = f1;
        f1 = fn;
        i++;
    }

    return 0;
}
