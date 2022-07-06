#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    int notaAlumno;

    //Ingreso nota
    printf("Ingrese la nota para ver su situacion\n");
    scanf("%d", &notaAlumno);

    if (notaAlumno <= 3) {
        printf("Insuficiente\n");
    }
    if ((notaAlumno > 3) && (notaAlumno <= 6)){
        printf("Aprobado\n");
    }
    if ((notaAlumno > 6) && (notaAlumno <= 9)){
        printf("Notable\n");
    }
    if (notaAlumno == 10){
        printf("Sobresaliente\n");
    }
    if (notaAlumno > 10) {
        printf("La nota ingresada se encuentra fuera de rango\n");
    }

    return 0;
}
