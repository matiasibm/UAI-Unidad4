#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    float horasTrabajadas,precioHora,sueldoBruto,sueldoNeto,deduccionA,deduccionB;

    //Ingreso horas trabajadas
    printf("Por favor ingrese la cantidad de horas trabajadas\n");
    scanf("%f",&horasTrabajadas);

    //Ingreso costo por hora
    printf("Ingrese el precio de la hora\n");
    scanf("%f",&precioHora);

    if (horasTrabajadas <= 120){
        sueldoBruto = horasTrabajadas * precioHora;
    }
    else{
        sueldoBruto = (120 * precioHora) + (horasTrabajadas - 120) * (precioHora * 2);
    }
    if (sueldoBruto <= 5000){
        deduccionA = 0;
        deduccionB = 0;
    }
    else if(sueldoBruto <= 20000){
        deduccionA = sueldoBruto * 0.3;
        deduccionB = 0;
    }
    else{
        deduccionA = sueldoBruto * 0.3;
        deduccionB = ((sueldoBruto - deduccionA) * 0.08 ) - 2000;
    }

    sueldoNeto = sueldoBruto - deduccionA - deduccionB;
    printf("\tCantidad de horas trabajadas: %g \n \tValor de su hora: %g\n\tSueldo Bruto: %g\n\tDeduccion A: %g\n\tDeduccion B: %g\n",horasTrabajadas,precioHora,sueldoBruto,deduccionA,deduccionB);

    return 0;
}
