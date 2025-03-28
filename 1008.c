#include <stdio.h>

int main(){
    int NUMBER, HORAS;
    double SALARY;
    
    scanf("%d %d", &NUMBER, &HORAS);
    scanf("%lf", &SALARY);
    SALARY = SALARY*HORAS;

    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", NUMBER, SALARY);

    return 0;
}