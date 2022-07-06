#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pesoIzq,largoIzq,pesoDer,largoDer,parteInclinada,pesoE;

    printf("Ingrese peso izquierdo\n");
    scanf("%d", &pesoIzq);

    printf("Ingrese largo izquierdo\n");
    scanf("%d", &largoIzq);

    printf("Ingrese peso derecho\n");
    scanf("%d", &pesoDer);

    printf("Ingrese largo derecho:");
    scanf("%d", &largoDer);

    parteInclinada = (pesoDer * largoDer) - (pesoIzq * largoIzq);

    if (parteInclinada == 0){
        printf("Balanza equilibrada\n");
    }
    else if (parteInclinada > 0){
        pesoE = parteInclinada / largoIzq;
        printf("La balanza esta fuera de equilibrio, tiene que agregar %d kilos del lado derecho\n", pesoE);
    }
    else{
        pesoE = - parteInclinada / largoDer;
        printf("La balanza esta fuera de equilibrio, tiene que agregar %d kilos del lado izquierdo\n", pesoE);
    }

    return 0;
}
