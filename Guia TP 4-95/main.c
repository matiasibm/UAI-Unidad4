#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia,mes;

    printf("Ingrese su dia y mes de nacimiento dd/mm\n");
    scanf("%d/%d",&dia,&mes);

    if((mes == 1 && dia >= 21) || (mes == 2 && dia <= 19))
        printf("Acuario\n");
    else if((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20))
        printf("Piscis\n");
    else if((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19))
        printf("Aries\n");
    else if((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20))
        printf("Tauro\n");
    else if((mes == 5 && dia >= 21) || (mes == 6 && dia <= 21))
        printf("Geminis\n");
    else if((mes == 6 && dia >= 22) || (mes == 7 && dia <= 21))
        printf("Cancer\n");
    else if((mes == 7 && dia >= 22) || (mes == 8 && dia <= 21))
        printf("Leo\n");
    else if((mes == 8 && dia >= 22) || (mes == 9 && dia <= 22))
        printf("Virgo\n");
    else if((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
        printf("Libra\n");
    else if((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
        printf("Escorpio\n");
    else if((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
        printf("Sagitario\n");
    else if((mes == 12 && dia >= 22) || (mes == 1 && dia <= 20))
        printf("Capricornio\n");
    else{
        printf("Fecha invalida\n");
    }

    return 0;
}
