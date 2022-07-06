#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    int notaAlumno;

    //Ingreso notaAlumno
    printf("Ingrese la nota para ver su situacion \n");
    scanf("%d", &notaAlumno);

    if (notaAlumno <= 3){
        printf("Insuficiente\n");
    }
    else if (notaAlumno <= 6){
        printf("Aprobado\n");
    }
    else if (notaAlumno <= 9){
        printf("Notable\n");
    }
    else if (notaAlumno == 10){
        printf("Sobresaliente\n");
    }
    else{
        printf("La nota esta fuera de rango\n");
    }

    return 0;
}
