#include <stdio.h>
typedef struct {
    char nome[50];
    int matricula;
} Funcionario;
int main(void) {
    Funcionario f;
    FILE *arquivo = fopen("funcionarios.txt", "a");
    if (arquivo == NULL) {
        perror("Erro ao abrir funcionarios.txt");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("Nome do funcionario %d: ", i + 1);
        scanf(" %49[^\n]", f.nome);
        printf("Matricula: ");
        scanf("%d", &f.matricula);
        fprintf(arquivo, "Nome: %s | Matricula: %d\n", f.nome, f.matricula);
    }
    fclose(arquivo);
    printf("Dados gravados com sucesso em funcionarios.txt\n");
    return 0;
}
