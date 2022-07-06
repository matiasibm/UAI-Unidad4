#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,n3,suma,i,n4,n5;

    printf("Ingrese el primer numero\n"); scanf("%d", &n1);
    printf("Ingrese el segundo numero\n"); scanf("%d", &n2);
    printf("Ingrese el tercer numero\n"); scanf("%d", &n3);
    printf("Ingrese el cuarto numero\n"); scanf("%d", &n4);
    printf("Ingrese el quinto numero\n"); scanf("%d", &n5);

//    suma = 0;
//    numero = n2;
//    while(numero <= n3){
//        if(numero % n1 == 0)
//              if(!(numero > n4 && numero < n5))
//                  suma = suma + numero;
//        numero++;
//    }
//    printf("%d\n", suma);

    suma = 0;
    for(i = n2; i <= n3; i++){
        if(i % n1 == 0)
            if(!(i > n4 && i < n5))
                suma+= i;
    }
    printf("%d\n", suma);


    suma = 0;
    for(i = n2; i <= n3; i++){
        if(i % n1 == 0 && !(i > n4 && i < n5))
            suma+= i;
    }
    printf("%d\n", suma);


    return 0;
}
