#include <stdio.h>

int main(){
    int COD1, NR_PECA1, COD2, NR_PECA2;
    double VAL1, VAL2, total;

    scanf ("%d %d %lf", &COD1, &NR_PECA1, &VAL1);
    scanf ("%d %d %lf", &COD2, &NR_PECA2, &VAL2);

    total = (NR_PECA1*VAL1)+(NR_PECA2*VAL2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);


    return 0;
}