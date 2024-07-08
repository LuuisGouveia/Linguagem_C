#include <stdio.h>

int main() {

    int idade, cont, soma;
    double media;

    soma = 0;
    cont = 0;
    printf("Digite as idades: \n");
    
    while (idade >= 0) {
        soma = soma + idade;
        cont = cont + 1;
        scanf("%d", &idade);
    }

    if (cont == 0) {
        printf("Impossivel Calcular");
    }
    else{
        media = (double)soma / cont;
        printf("MEDIA: %.2lf", media);
    }

    return 0;
}