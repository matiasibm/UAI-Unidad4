#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cantEmpleados, cantSueldos, i;
    float sueldoUltMeses, sueldoTotal, sueldoMedio, sumaTotal;
    char empleado;


    cantEmpleados = 0;
    sumaTotal = 0;
    printf("Ingrese empleado o 0 para terminar: "); fflush(stdin);scanf("%c", &empleado);
    while(empleado != '0'){
        cantEmpleados++;
        sueldoTotal = 0;
        sueldoMedio = 0;
        printf("Ingrese cuantos sueldos quiere cargar: "); scanf("%d", &cantSueldos);
        for(i = 1; i <= cantSueldos; i++){
            printf("Ingrese sueldo: "); scanf("%f", &sueldoUltMeses);
            sueldoTotal += sueldoUltMeses;
        }
        sumaTotal += sueldoTotal;
        if(cantSueldos != 0)
            sueldoMedio = sueldoTotal / cantSueldos;
        printf("\nSu sueldo hasta la fecha es $%g\nSu sueldo medio hasta la fecha es $%g\n\n", sueldoTotal, sueldoMedio);

        printf("Ingrese empleado o 0 para terminar: "); fflush(stdin);scanf("%c", &empleado);
    }

    printf("\nLa cantidad total de empleados cargados fue: %d ", cantEmpleados);
    printf("\nLa suma total de sueldos fue: %g \n", sumaTotal);
}
