#include <stdio.h>
#include <math.h>

int main(){
    double x1,y1,x2,y2, norma;
    scanf("%lf %lf %lf %lf",&x1, &y1, &x2, &y2);
    norma = sqrt( pow((x2-x1),2) + pow((y2-y1),2));

    printf("%.4lf\n", norma);

    return 0;
}