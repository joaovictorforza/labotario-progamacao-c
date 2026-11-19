#include <stdio.h>
#include <string.h>
int main(void) {
    char nome[50], codigo[10], copia[50], mensagem[100] = "Ola, ";
    printf("Primeiro nome: ");
    scanf("%49s", nome);
    printf("Codigo do curso (CC ou SI): ");
    scanf("%9s", codigo);
    strcpy(copia, nome);
    strcat(mensagem, copia);
    strcat(mensagem, "!");
    printf("Nome: %s\n", copia);
    printf("Caracteres no nome: %zu\n", strlen(nome));
    if (strcmp(codigo, "CC") == 0) printf("Curso: Ciencia da Computacao\n");
    else if (strcmp(codigo, "SI") == 0) printf("Curso: Sistemas de Informacao\n");
    else printf("Codigo de curso invalido\n");
    printf("%s\n", mensagem);
    return 0;
}
