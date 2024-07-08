#include <stdio.h>

int main() {

    double nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    media = nota1 + nota2;

    if (media >= 60.00) {

        printf("Media: %.2lf\n", media);
        printf("APROVADO\n");
    }
    else{

        printf("Media: %.2lf\n", media);
        printf("REPROVADO\n");

    }

    return 0;

}