#include <stdio.h>
#include <string.h>
int main(void) {
    char produto[60], categoria[30], copia[60], descricao[100] = "Produto: ";
    printf("Nome do produto: ");
    scanf(" %59[^\n]", produto);
    printf("Categoria (HARDWARE ou PERIFERICO): ");
    scanf("%29s", categoria);
    strcpy(copia, produto);
    strcat(descricao, copia);
    printf("Produto: %s\n", copia);
    printf("Caracteres: %zu\n", strlen(produto));
    if (strcmp(categoria, "HARDWARE") == 0) printf("Categoria: Hardware\n");
    else if (strcmp(categoria, "PERIFERICO") == 0) printf("Categoria: Periferico\n");
    else printf("Categoria invalida\n");
    printf("Descricao: %s\n", descricao);
    return 0;
}
