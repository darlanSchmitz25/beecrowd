#include <stdio.h>

int main(){

    double A,B,C, media;
    scanf("%lf %lf %lf", &A,&B, &C);

    media = A*0.2 + B*0.3 + C*0.5;
    printf("MEDIA = %.1lf\n", media);
    
    return 0;
}