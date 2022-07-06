#include <stdio.h>
#include <stdlib.h>

int main()
{
     //Variables
    int n,m,l;

    //Ingreso numero 1 , 2 y 3
    printf("Ingrse el primer numero\n");
    scanf("%d", &n);
    printf("Ingrse el segundo numero\n");
    scanf("%d", &m);
    printf("Ingrse el tercer numero\n");
    scanf("%d", &l);

    if ((n <= m) && (n <= l)){
        printf("%d\n", n);
        if (m <= l){
            printf("%d\n",m);
            printf("%d\n",l);
            }
        else{
            printf("%d\n",l);
            printf("%d\n",m);
        }
    }
    else if ((m <= n) && (m <= l)){
        printf("%d\n", m);
        if (n <= l){
            printf("%d\n",n);
            printf("%d\n",l);
        }
        else{
            printf("%d\n",l);
            printf("%d\n",n);
        }
    }
    else{
        printf("%d\n",l);
        if(m > n){
            printf("%d\n",m);
            printf("%d\n",n);
        }
        else{
            printf("%d\n",n);
            printf("%d\n",m);
        }
    }


    return 0;
}
