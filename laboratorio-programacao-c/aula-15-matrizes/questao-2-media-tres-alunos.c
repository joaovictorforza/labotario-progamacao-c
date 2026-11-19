#include <stdio.h>
int main(void) {
    float notas[3][2];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 2; j++) {
            printf("Nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
    for (int i = 0; i < 3; i++)
        printf("Media do aluno %d: %.2f\n", i + 1,
               (notas[i][0] + notas[i][1]) / 2);
    return 0;
}
