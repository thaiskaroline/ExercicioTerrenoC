#include <stdio.h>

int main()
{
    double largura, preco, valor, area, comprimento;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);

    printf("Digite o valor do terreno: ");
    scanf("%lf", &valor);

    area = largura * comprimento;
    preco = area * valor;

    printf("Area do Terreno = %.2lf\n", area);
    printf("Preco do Terreno = %.2lf\n", preco);

    return 0;
}
