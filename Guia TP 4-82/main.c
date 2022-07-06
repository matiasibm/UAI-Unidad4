#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    int dia,mes,anio;

    //Ingreso fecha
    printf("Ingrese una fecha dd/mm/aaaa\n");
    scanf("%d/%d/%d", &dia,&mes,&anio);

    //Meses de 31 dias
    if(((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)) && (dia < 32)){
        printf("%d/%d/%d es correcta",dia,mes,anio);
    }
    //Meses de 30 dias
    else if(((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11)) && (dia <= 30)){
        printf("%d/%d/%d es correcta",dia,mes,anio);
    }
    //Mes de 28 dias
    else if((mes == 2) && (dia <= 28)){
        printf("%d/%d/%d es correcta",dia,mes,anio);
    }
    //Anio bisiesto de 29 dias
    else if(((mes == 2) && ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0)) && (dia <= 29)){
        printf("%d/%d/%d es correcta",dia,mes,anio);
    }
    //Fecha invalida
    else{
        printf("Usted ha ingresado una fecha incorrecta\n");
    }

    return 0;
}
