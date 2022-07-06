#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    float numero1,numero2,resultado;
    char operador;

    //Ingreso valores
    printf("Ingrese la operacion que desea realizar (+ - * /)\n");
    scanf("%f%c%f", &numero1, &operador,&numero2);

    if ((operador == '+') && (numero1 < 10) && (numero2 < 10)){
        resultado = numero1 + numero2;
        printf("El resultado es %g\n", resultado);
    }
    else if((operador == '-') && (numero1 < 10) && (numero2 <10)){
        resultado = numero1 - numero2;
        printf("El resultado es %g\n", resultado);
    }
    else if((operador == '*') && (numero1 <10) && (numero2 <10)){
        resultado = numero1 * numero2;
        printf("El resultado es %g\n",resultado);
    }
    else if((operador = '/') && (numero1 <10) && (numero2 <10)){
        resultado = numero1 / numero2;
        printf("El resultado es %g\n",resultado);
    }
    else{
        printf("Numero fuera de rango, vuelva a intentar\n");
    }

    return 0;
}
