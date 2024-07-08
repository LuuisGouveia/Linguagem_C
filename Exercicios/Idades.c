#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    double idade1, idade2, soma;
    double media;
    char nome1[50];
    char nome2[50];

    printf("Digite o nome da primeira pessoa: ");
    ler_texto(nome1, 50);
    printf("Digite a idade da primeira pessoa: ");
    scanf("%lf", &idade1);

    printf("Digite o nome da segunda pessoa: ");
    limpar_entrada();
    ler_texto(nome2, 50);
    printf("Digite a idade da segunda pessoa: ");
    scanf("%lf", &idade2);

    soma = idade1 + idade2;
    media = soma / 2;

    printf("A media de idade entre %s e %s fica em: %.2lf", nome1, nome2, media);




}