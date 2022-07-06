    #include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    int cond1, cond2, cond3, cond4;
    int dia,mes,anio;

    //Ingreso fecha
    printf("Ingrese una fecha dd/mm/aaaa\n");
    scanf("%d/%d/%d", &dia,&mes,&anio);

    cond1 = ((mes == 1) || (mes == 3) || (mes == 5) || (mes == 7) || (mes == 8) || (mes == 10) || (mes == 12)) && (dia <= 31);//Meses de 31 dias
    cond2 = ((mes == 4) || (mes == 6) || (mes == 9) || (mes == 11)) && (dia <= 30); // //Meses de 30 dias
    cond3 = (mes == 2) && (dia <= 28); //Mes de 28 dias
    cond4 = (mes == 2) && ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) && (dia <= 29); //Anio bisiesto de 29 dias

    if (cond1 || cond2 || cond3 || cond4){
        printf("%d/%d/%d es correcta",dia,mes,anio);
    }
    else{
        printf("Usted ha ingresado una fecha incorrecta\n");
    }

    return 0;
}
