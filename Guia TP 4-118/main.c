#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantEmpleados, cantSueldos, i, j;
    float sueldoUltMeses, sueldoTotal, sueldoMedio;
    char empleado;

    printf("Ingrese cantidad de empleados a verificar: "); scanf("%d", &cantEmpleados);
    printf("Ingrese cuantos sueldos quiere cargar: "); scanf("%d", &cantSueldos);

    for(i = 1; i <= cantEmpleados; i++){
        printf("Ingrese empleado: "); fflush(stdin);scanf("%c", &empleado);
        sueldoTotal = 0;
        for(j = 1; j<= cantSueldos ; j++){
            printf("Ingrese sueldo: "); scanf("%f", &sueldoUltMeses);
            sueldoTotal += sueldoUltMeses;
        }
        sueldoMedio = sueldoTotal / cantSueldos;
        printf("\nSu sueldo hasta la fecha es $%g\nSu sueldo medio hasta la fecha es $%g\n\n", sueldoTotal, sueldoMedio);
    }

    return 0;
}
