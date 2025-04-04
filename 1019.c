#include <stdio.h>

int main(){
    int N, hrs, min,seg, aux;
    scanf("%d", &N);
    
    hrs = N/3600;
    aux = N%3600;
    min = aux/60;
    aux = aux%60;
    seg = aux%60;

    printf("%d:%d:%d\n", hrs, min, seg);


    return 0;
}