#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco, valorTotal;
    

    printf("Informe o código do pedido: ");
    scanf("%d", &codigo);

    printf("Informe a quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 100:
            preco = 10.10;
            break;
        case 101:
            preco = 8.30;
            break;
        case 102:
            preco = 8.50;
            break;
        case 103:
            preco = 12.50;
            break;
        case 104:
            preco = 13.25;
            break;
        default:
            printf("Código de item inválido.\n");
    }
    valorTotal = preco * quantidade;
    printf("Total a pagar: R$ %.2f\n", valorTotal);

    return 0;
}
