#include <stdio.h>

int main(){

    int a, b, c, menor;

    printf("Primeiro Valor: ");
    scanf("%d", &a);
    printf("Segundo Valor: ");
    scanf("%d", &b);
    printf("Terceiro Valor: ");
    scanf("%d", &c);

    menor = a;

    if (b < a) {

        menor = b;
    }
    else if (c < a) {
        menor = c;
    }

    printf("Menor valor dentre os tres: %d", menor);

    return 0;
}