#include <stdio.h>
int main(void) {
    int matriz[3][3], maior;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            printf("Valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i == 0 && j == 0) maior = matriz[i][j];
            else if (matriz[i][j] > maior) maior = matriz[i][j];
        }
    printf("Maior valor: %d\n", maior);
    return 0;
}
