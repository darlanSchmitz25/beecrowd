#include <stdio.h>


int main(){
    int x;
    double y, media;
    scanf("%d %lf", &x, &y);
    x = (double) x;
    media = x/y;
    printf ("%.3lf km/l\n", media);

    return 0;
}