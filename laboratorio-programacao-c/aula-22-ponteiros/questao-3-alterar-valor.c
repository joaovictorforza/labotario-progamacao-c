#include <stdio.h>
int main(void) {
    int numero = 15;
    int *ponteiro = &numero;
    printf("Antes: %d\n", numero);
    *ponteiro = 50;
    printf("Depois: %d\n", numero);
    return 0;
}
