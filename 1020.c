#include <stdio.h>

int main(){
    int N, years, month, days;
    scanf("%d", &N);

    years = N/365;
    N = N%365;
    month = N/30;
    days = N%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, month, days);
    


    return 0;
}