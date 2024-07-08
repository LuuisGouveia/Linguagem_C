#include <stdio.h>

int main() {

    double largura, comprimento, valor, area, preco;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &valor);

    area = largura * comprimento;

    preco = valor * area;

    printf("AREA DO TERRENO: %2.lf\n", area);
    printf("Valor do Terreno: %2.lf\n", preco);

    return 0;

}