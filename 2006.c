#include <stdio.h>

int main(){
    int T, A, B, C, D, E, X,I;
    int vet[5];
    scanf("%d", &T);
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
    vet[0] = A;
    vet[1] = B;
    vet[2] = C;
    vet[3] = D;
    vet[4] = E;
    I=0;
    X =0;
    while (I<=4){
        if(vet[I]==T){
            X += 1;
        }

        I++;

    }


    printf("%d\n", X);

    return 0;    
}