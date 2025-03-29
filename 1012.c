#include <stdio.h>

int main(){
    double A,B,C, pi = 3.14159, area;
    scanf("%lf %lf %lf", &A, &B, &C);
    area = (A*C)/2;
    printf("TRIANGULO: %.3lf\n", area);
    area = C*C*pi;
    printf("CIRCULO: %.3lf\n", area);
    area = ((A+B)*C)/2;
    printf("TRAPEZIO: %.3lf\n", area);
    area = B*B;
    printf("QUADRADO: %.3lf\n", area);
    area = A*B;
    printf("RETANGULO: %.3lf\n", area);
    
}