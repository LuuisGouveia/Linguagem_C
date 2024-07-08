#include <stdio.h>
#include <tgmath.h>

int main() {

    double base, altura, area, perimetro, diag, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;

    perimetro = 2 * (base + altura);

    diag = (base * base) + (altura * altura);

    diagonal = sqrt(diag);

    printf("AREA: %.2lf\n", area);
    printf("PERIMETRO: %.2lf\n", perimetro);
    printf("Diagonal: %.4lf\n", diagonal);
}