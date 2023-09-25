#include <stdio.h>

int main() {
    float preco_abacaxi = 5.00,preco_maca = 1.00,preco_pera 
    = 4.00, total_compra = 0.0;
    int escolha, quantidade;

    printf("Escolha a fruta que deseja comprar:\n");
    printf("1 - Abacaxi (R$5.00 por unidade)\n");
    printf("2 - Maçã (R$1.00 por unidade)\n");
    printf("3 - Pera (R$4.00 por unidade)\n");
    printf("0 - Finalizar a compra\n");

    while (1) {
        printf("Digite o número da fruta (ou 0 para finalizar): ");
        scanf("%d", &escolha);

        if (escolha == 0) {
            break;
        }

        printf("Digite a quantidade desejada: ");
        scanf("%d", &quantidade);

        float valor_parcial = 0.0;

        if (escolha == 1) {
            valor_parcial = preco_abacaxi * quantidade;
        } else if (escolha == 2) {
            valor_parcial = preco_maca * quantidade;
        } else if (escolha == 3) {
            valor_parcial = preco_pera * quantidade;
        } else {
            printf("Opção inválida. Tente novamente.\n");
            continue;
        }

        total_compra += valor_parcial;
        printf("Você comprou %d unidade(s) por R$%.2f\n", quantidade, valor_parcial);
    }

    printf("Valor total da compra: R$%.2f\n", total_compra);

    return 0;
}
