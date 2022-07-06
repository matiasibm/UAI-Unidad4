#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    char dia;

    //Ingreso dia
    printf("Ingrese la inicial del dia\n");
    scanf("%c", &dia);

    if ((dia == 'l') || (dia == 'L')){
        printf("Lunes\n");
    }
    else if((dia == 'm') || (dia == 'M')){
        printf("Martes\n");
    }
    else if((dia == 'x') || (dia == 'X')){
        printf("Miercoles\n");
    }
    else if((dia == 'j') || (dia == 'J')){
        printf("Jueves\n");
    }
    else if((dia == 'v') || (dia == 'V')){
        printf("Viernes\n");
    }
    else if((dia == 's') || (dia == 'S')){
        printf("Sabado\n");
    }
    else if((dia == 'd') || (dia == 'D')){
        printf("Domingo\n");
    }
    else{
        printf("Ingresaste una inicial incorrecta");
    }

    return 0;
}
