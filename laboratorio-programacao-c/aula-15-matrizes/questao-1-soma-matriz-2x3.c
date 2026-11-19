#include <stdio.h>
int main(void) {
    int matriz[2][3], soma = 0;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++) {
            printf("Valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    printf("Soma: %d\n", soma);
    return 0;
}
