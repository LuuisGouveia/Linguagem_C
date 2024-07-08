#include <stdio.h>

int main(){
    
    int i, j, n, m;

    printf("Quantas linhas a matriz vai ter?: ");
    scanf("%d", &m);
    printf("Quantas colunas a matriz vai ter?: ");
    scanf("%d", &n);

    int mat [m] [n];
    
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
        
    }
    
    printf("\nDiagonal Principal: \n");

    for ( i = 0; i < m; i++)
    {
        printf("%d ", mat[i][i]);
    }

    printf("\nNegativos da Matriz: \n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (mat[i][j] < 0){

                printf("%d ", mat[i][j]);
            }
        }
        
    }
    
    
    
    return 0;
}