#include <stdio.h>

int main(){
    
    int i, n;

    double vet[10];
    double soma, count, media;

    printf("Quantos numeros vai digitar?: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    soma = 0;
    count = 0;
    for ( i = 0; i < n; i++)
    {
        soma = soma + vet[i];
        count = count + 1;
    }

    media = soma / count;
    printf("Valores: ");
    for ( i = 0; i < n; i++)
    {
        printf("%.1lf ", vet[i]);
    }
    
    printf("\nSoma = %.1lf\n", soma);
    printf("Media = %.1lf", media);

    
    return 0;
}