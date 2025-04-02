#include <stdio.h>


int main(){
    int n, quant;
    scanf("%d", &n);

    int notas [] = {100,50,20,10,5,2,1};

    for (int i=0; i<7; i++){
        quant = n/notas[i];
        printf("%d nota(s) de R$ %d,00\n",quant, notas[i] );

        n %= notas[i];
    }
    return 0;
}