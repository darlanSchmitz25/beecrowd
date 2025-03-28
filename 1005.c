#include <stdio.h>

int main() {
    double A, B, MEDIA;
    
    // Lê as duas notas
    scanf("%lf %lf", &A, &B);
    
    // Calcula a média ponderada
    MEDIA = ((A * 3.5) + (B * 7.5)) / 11.0;
    
    // Imprime a média com 5 casas decimais
    printf("MEDIA = %.5lf\n", MEDIA);
    
    return 0;
}