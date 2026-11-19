#include <stdio.h>
int verificarPar(int numero) { return numero % 2 == 0 ? 1 : 0; }
int main(void) {
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    if (verificarPar(numero)) printf("Par\n");
    else printf("Impar\n");
    return 0;
}
