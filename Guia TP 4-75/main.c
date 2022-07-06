#include <stdio.h>
#include <stdlib.h>

int main()
{

        //Variables
    int k,n,m,l;

    //Ingreso numero 1 , 2 , 3 y 4
    printf("Ingrse el primer numero\n");
    scanf("%d", &k);
    printf("Ingrse el segundo numero\n");
    scanf("%d", &l);
    printf("Ingrse el tercer numero\n");
    scanf("%d", &m);
    printf("Ingrse el cuarto numero\n");
    scanf("%d", &n);

        if((k <= n) && (k <= m) && (k <= l)){
            printf("%d\n",k);
            if((l <= m) && (l <= n)){
                printf("%d\n",l);
                if(m <= n){
                    printf("%d\n", m);
                    printf("%d\n", n);
                }
                else{
                    printf("%d\n",n);
                    printf("%d\n",m);
                }
            }
            else if ((m <= n) && (m <= l)){
                printf("%d\n",m);
                if(l <= n){
                    printf("%d\n",l);
                    printf("%d\n",n);
                }
                else{
                    printf("%d\n",n);
                    printf("%d\n",l);
                }
           }
            else if((n <= m) && (n <= l)){
                printf("%d\n",n);
                if(l <= m){
                    printf("%d\n",l);
                    printf("%d\n",m);
                }
                else{
                    printf("%d\n",m);
                    printf("%d\n",l);
                }
            }
        }
        else if((l <= k) && (l <= m) && (l <= n)){
            printf("%d\n",l);
            if((m <= n) && (m <= k)){
                printf("%d\n",m);
                if(n <= k){
                    printf("%d\n",n);
                    printf("%d\n",k);
               }
                else{
                    printf("%d\n",k);
                    printf("%d\n",n);
               }
            }
            else if((n <= m) && (n <= k)){
                printf("%d\n",n);
                if (m <= k){
                    printf("%d\n",m);
                    printf("%d\n",k);
                }
                else{
                    printf("%d\n",k);
                    printf("%d\n",m);
                }
            }
            else if ((k <= n) && (k <= m)){
                printf("%d\n",k);
                if(n <= m){
                    printf("%d\n",n);
                    printf("%d\n",m);
                }
                else{
                    printf("%d\n",m);
                    printf("%d\n",n);
                }
            }
        }
        else if((m <= k) && (m <= n) && (m <= l)){
            printf("%d\n",m);
            if((n <= k) && (n <= l)){
               printf("%d\n",n);
                if(k <= l){
                    printf("%d\n",k);
                    printf("%d\n",l);
               }
                else{
                    printf("%d\n",l);
                    printf("%d\n",k);
                }
            }
            else if((l <= k) && (l <= n)){
                printf("%d\n",l);
                if(k <= n){
                    printf("%d\n",k);
                    printf("%d\n",n);
                }
                else{
                    printf("%d\n",n);
                    printf("%d\n",k);
                }
            }
            else if((k <= l) && (k <= n)){
                printf("%d\n",k);
                if(l <= n){
                    printf("%d\n",l);
                    printf("%d\n",n);
                }
                else{
                    printf("%d\n",n);
                    printf("%d\n",l);
                }
            }
        }
        else if((n <= k) && (n <= l) && (n <= m)){
            printf("%d\n",n);
            if((m <= l) && (m <= k)){
                printf("%d\n",m);
                if(l <= k){
                    printf("%d\n",l);
                    printf("%d\n",k);
                }
                else{
                    printf("%d\n",k);
                    printf("%d\n",l);
                }
            }
            else if ((l <= m) && (l <= k)){
                printf("%d\n",l);
                if(m <= k){
                    printf("%d\n",m);
                    printf("%d\n",k);
                }
                else{
                    printf("%d\n",k);
                    printf("%d\n",m);
                }
            }
            else if((k <= l) && (k <= m)){
                printf("%d\n",k);
                if (l <= m){
                    printf("%d\n",l);
                    printf("%d\n",m);
                }
                else{
                    printf("%d\n",m);
                    printf("%d\n",l);
                }
            }
        }

    return 0;
}
