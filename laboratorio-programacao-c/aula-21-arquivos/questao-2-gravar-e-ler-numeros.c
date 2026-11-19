#include <stdio.h>
int main(void) {
    int numero;
    FILE *arquivo = fopen("numeros.txt", "w");
    if (arquivo == NULL) {
        perror("Erro ao criar numeros.txt");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numero);
        fprintf(arquivo, "%d\n", numero);
    }
    fclose(arquivo);

    arquivo = fopen("numeros.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao ler numeros.txt");
        return 1;
    }
    printf("Numeros armazenados:\n");
    while (fscanf(arquivo, "%d", &numero) == 1) printf("%d\n", numero);
    fclose(arquivo);
    return 0;
}
