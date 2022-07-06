#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Varianbles
    char dia;

    //Ingreso dias
    printf("Ingrese la inicial del dia\n");
    scanf("%c", &dia);

    if(dia == 'l'){
        printf("Lunes\n");
    }
    else if(dia == 'm'){
        printf("Martes\n");
    }
    else if(dia == 'x'){
        printf("Miercoles\n");
    }
    else if(dia == 'j'){
        printf("Jueves\n");
    }
    else if(dia == 'v'){
        printf("Viernes\n");
    }
    else if(dia == 's'){
        printf("Sabado\n");
    }
    else if(dia == 'd'){
        printf("Domingo\n");
    }
    else{
        printf("Ingreso una inicial incorrecta");
    }

    return 0;
}
