#include <stdio.h>

int main() {
    char nome_vendedor[20];
    double salario_fixo, total_vendas, comissao, total_receber;

    // Lendo entrada
    scanf("%s", &nome_vendedor);
    scanf("%lf %lf", &salario_fixo, &total_vendas);

    // Calculando comissão (15% sobre o total de vendas)
    comissao = total_vendas * 0.15;
    total_receber = salario_fixo + comissao;

    // Exibindo resultado formatado com duas casas decimais
    printf("TOTAL = R$ %.2lf\n", total_receber);

    return 0;
}
