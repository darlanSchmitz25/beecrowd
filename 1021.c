#include <stdio.h>


int main(){
    double n, aux_double;
    int quant, aux;

    scanf("%lf", &n);
    int quant_cedulas = (int) n;
    double quan_moedas = n - quant_cedulas;
    aux = quant_cedulas%2;

    printf("%d\n", quant_cedulas);

    int notas [] = {100,50,20,10,5,2};
    int moedas [] ={100,50,25,10,5,1};
    
    printf("NOTAS:\n");

    for (int i=0; i<6; i++){
        quant = quant_cedulas/notas[i];
        printf("%d nota(s) de R$ %d.00\n",quant, notas[i] );
        quant_cedulas %= notas[i];
    }


    printf("MOEDAS:\n");
    quan_moedas *= 100;
  
    aux = aux *100 + (int) quan_moedas;
    printf("%d\n", aux);
    for (int i = 0; i < 6; i++){
        quant = aux/moedas[i];
        aux %= moedas[i];
        aux_double = (double) moedas[i]/100.00;
        printf("%d moeda(s) de R$ %.2lf\n",quant, aux_double );
    }
    

    return 0;
}