#include <stdio.h>


int main(){

    int i, n, countMenores, count;

    double media, percentual, soma;
    
    printf("Dados de quantas pessoas serão digitadas?: ");
    scanf("%d", &n);

    char nomes[n] [50];
    int idades[n];
    double alturas[n];

    countMenores = 0;
    count = 0;

    for ( i = 0; i < n; i++)
    {
        printf("Dados da pessoa %d: \n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        if (idades[i] < 16){
            countMenores = countMenores + 1;
        }
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
        count = count + 1;
    }

    soma = 0;

    for ( i = 0; i < n; i++)
    {
        soma = soma + alturas[i];
    }

    media = soma / count;
    
    percentual = (countMenores * 100) / count;

    printf("Altura média: %.2lf\n", media);
    printf("Pessoas com menos de 16 anos: %.2lf %%\n", percentual);

    for ( i = 0; i < n; i++)
    {
        if (idades[i] < 16){
            printf("%s\n", nomes[i]);
        }
    }
    


    return 0;
}