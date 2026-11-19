#include <stdio.h>
void dobrar(int *numero) { *numero = *numero * 2; }
int main(void) {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    dobrar(&numero);
    printf("Resultado em dobro: %d\n", numero);
    return 0;
}
