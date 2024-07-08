#include <stdio.h>

int main() {

    int x, y;

    printf("Digite dois numeros: \n");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y) {
        printf("Descrescente\n");
    }
    else {
        printf("Crescente\n");
    }

    while (x != y)
    {
        printf("Digite outros dois numeros: \n");
        scanf("%d", &x);
        scanf("%d", &y);

        if (x > y) {
            
            printf("Descrescente\n");
        
        }
        else if (x < y) {
            
            printf("Crescente\n");

        }

    }

    return 0;
    
}