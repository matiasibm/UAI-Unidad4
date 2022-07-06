#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    int notaAlumno;

    //Ingreso notaAlumno
    printf("Ingrese la nota para ver su situacion\n");
    scanf("%d", &notaAlumno);

    switch(notaAlumno)
    {
        case 1:
        case 2:
        case 3:
            printf("Insuficiente\n");
            break;

        case 4:
        case 5:
        case 6:
            printf("Aprobado\n");
            break;
        case 7:
        case 8:
        case 9:
            printf("Notable\n");
            break;
        case 10:
            printf("Sobresaliente\n");
            break;
        default:
            printf("La nota esta fuera de rango\n");
            break;
    }
    return 0;
}
