#include <stdio.h>
#include <stdlib.h>

int main()
{
    //ESTE EJERCICIO TAMBIEN SE PODRIA HACER CON SWITCH
    //Variables
    int mes;

    //Ingreso mes
    printf("Ingrese el numero de mes\n");
    scanf("%d", &mes);

        if(mes == 1){
            printf("Enero\n");
        }
        else if(mes == 2){
            printf("Febrero\n");
        }
        else if(mes == 3){
            printf("Marzo\n");
        }
        else if(mes == 3){
            printf("Marzo\n");
        }
        else if(mes == 4){
            printf("Abril\n");
        }
        else if(mes == 5){
            printf("Mayo\n");
        }
        else if(mes == 6){
            printf("Junio\n");
        }
        else if(mes == 7){
            printf("Julio\n");
        }
        else if(mes == 8){
            printf("Agosto\n");
        }
        else if(mes == 9){
            printf("Septiembre\n");
        }
        else if(mes == 10){
            printf("Octubre\n");
        }
        else if(mes == 11){
            printf("Noviembre\n");
        }
        else if(mes == 12){
            printf("Diciembre\n");
        }
        else{
            printf("El numero es incorrecto");
        }

    return 0;
}
