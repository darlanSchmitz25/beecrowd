#include <stdio.h>

int main(){
    int hrs, speed;
    double lt;

    scanf("%d %d", &hrs, &speed);

    lt = (double) ((hrs*speed)/12.0);

    printf("%.3lf\n", lt);


    return 0;
}