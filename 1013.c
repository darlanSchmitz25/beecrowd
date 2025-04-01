#include <stdio.h>
#include <stdlib.h>

int conta(int a, int b){
    return (a+b + abs(a-b))/2;
}




int main(){
    int a,b,c, maior;
    scanf("%d%d%d", &a, &b, &c);
    maior = conta(a,b);
    maior = conta(maior,c);

    printf("%d eh o maior\n", maior);
    return 0;
}