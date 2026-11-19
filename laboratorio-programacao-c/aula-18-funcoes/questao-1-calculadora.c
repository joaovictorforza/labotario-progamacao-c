#include <stdio.h>
void exibirMenu(void) {
    printf("\n1-Somar  2-Subtrair  3-Multiplicar  4-Dividir  0-Sair\n");
}
float somar(float a, float b) { return a + b; }
float subtrair(float a, float b) { return a - b; }
float multiplicar(float a, float b) { return a * b; }
float dividir(float a, float b) { return a / b; }
int main(void) {
    int opcao;
    float a, b;
    do {
        exibirMenu();
        printf("Opcao: ");
        scanf("%d", &opcao);
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &a, &b);
        }
        switch (opcao) {
            case 1: printf("Resultado: %.2f\n", somar(a, b)); break;
            case 2: printf("Resultado: %.2f\n", subtrair(a, b)); break;
            case 3: printf("Resultado: %.2f\n", multiplicar(a, b)); break;
            case 4:
                if (b == 0) printf("Nao e possivel dividir por zero.\n");
                else printf("Resultado: %.2f\n", dividir(a, b));
                break;
            case 0: printf("Encerrando.\n"); break;
            default: printf("Opcao invalida.\n");
        }
    } while (opcao != 0);
    return 0;
}
