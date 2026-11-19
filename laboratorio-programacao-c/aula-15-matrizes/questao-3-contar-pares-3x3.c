#include <stdio.h>
int main(void) {
    int matriz[3][3], pares = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            printf("Valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] % 2 == 0) pares++;
        }
    printf("Quantidade de valores pares: %d\n", pares);
    return 0;
}
