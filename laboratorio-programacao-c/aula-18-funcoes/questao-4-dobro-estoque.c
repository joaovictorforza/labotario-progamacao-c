#include <stdio.h>
int dobro(int quantidade) { return quantidade * 2; }
int main(void) {
    int quantidade;
    printf("Quantidade inicial: ");
    scanf("%d", &quantidade);
    printf("Quantidade inicial: %d\n", quantidade);
    printf("Quantidade final: %d\n", dobro(quantidade));
    return 0;
}
