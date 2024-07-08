#include <stdio.h>

int main() {

    int x, y, z, i, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    if (x > y) {

        z = x;
        x = y;
        y = z;
    }

    soma = 0;

    for (i=x+1; y-1; i++){

        if (i % 2 != 0){

            soma = soma + i;

        }
    }

    printf("Soma dos impares: %d", soma);

    return 0;
}
