#include <stdio.h>
#include <string.h>
int main(void) {
    char nome[50], perfil[20], copia[50], mensagem[100] = "Bem-vindo, ";
    printf("Primeiro nome: ");
    scanf("%49s", nome);
    printf("Perfil (ADMIN ou COMUM): ");
    scanf("%19s", perfil);
    strcpy(copia, nome);
    strcat(mensagem, copia);
    printf("Nome: %s\n", copia);
    printf("Caracteres no nome: %zu\n", strlen(nome));
    if (strcmp(perfil, "ADMIN") == 0) printf("Perfil: Administrador\n");
    else if (strcmp(perfil, "COMUM") == 0) printf("Perfil: Comum\n");
    else printf("Perfil invalido\n");
    printf("%s!\n", mensagem);
    return 0;
}
