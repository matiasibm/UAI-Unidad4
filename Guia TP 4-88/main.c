#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigoIdentificacion;

    printf("Ingrese codigo de identificacion\n");
    scanf("%d", &codigoIdentificacion);

    if(codigoIdentificacion % 2 == 0 && codigoIdentificacion % 3 == 0 && codigoIdentificacion % 5 == 0){
        printf("Director\n");
    }
    else if(codigoIdentificacion % 3 == 0 && codigoIdentificacion % 5 == 0 && codigoIdentificacion % 2 != 0){
        printf("Gerente\n");
    }
    else if(codigoIdentificacion % 2 == 0 && codigoIdentificacion % 3 != 0 && codigoIdentificacion % 5 != 0){
        printf("Empleado Administrativo\n");
    }
    else{
        printf("Empleado de Seguridad\n");
    }

    return 0;
}
