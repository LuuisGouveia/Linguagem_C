#include <stdio.h>

int main(){
    
    int i, j, m, n;

    printf("Quantas linhas a matriz vai ter? ");
    scanf("%d", &m);
    printf("Quantas colunas a matriz vai ter? ");
    scanf("%d", &n);

    int mat[m][n];
    int vet[10];

    for ( i = 0; i < m; i++)
    {
        printf("Digite os elementos da %da Linha: \n", i+1);
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
        
    }
    
    for ( i = 0; i < m; i++)
    {
        vet[i] = 0;
        for ( j = 0; j < n; j++)
        {
            vet[i] = vet[i] + mat[i][j];
        }
        
    }

    printf("\nVetor Gerado: \n");
    for ( i = 0; i < m; i++)
    {
        printf("%d \n", vet[i]);
    }
    
    return 0;
}