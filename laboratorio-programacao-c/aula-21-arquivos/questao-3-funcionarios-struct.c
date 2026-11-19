#include <stdio.h>
typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;
int main(void) {
    Funcionario f;
    FILE *arquivo = fopen("funcionarios.txt", "a");
    if (arquivo == NULL) {
        perror("Erro ao abrir funcionarios.txt");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("Nome: ");
        scanf(" %49[^\n]", f.nome);
        printf("Salario: ");
        scanf("%f", &f.salario);
        printf("Horas extras: ");
        scanf("%d", &f.horasExtras);
        fprintf(arquivo, "%s;%.2f;%d\n", f.nome, f.salario, f.horasExtras);
    }
    fclose(arquivo);

    arquivo = fopen("funcionarios.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao ler funcionarios.txt");
        return 1;
    }
    printf("\nFuncionarios cadastrados:\n");
    while (fscanf(arquivo, " %49[^;];%f;%d", f.nome, &f.salario, &f.horasExtras) == 3)
        printf("Nome: %s | Salario: %.2f | Horas extras: %d\n",
               f.nome, f.salario, f.horasExtras);
    fclose(arquivo);
    return 0;
}
