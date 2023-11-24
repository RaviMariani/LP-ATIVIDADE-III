/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    int mxVen = 100;
    char produtos[mxVen][50];
    float precos[mxVen];
    int quantidades[mxVen];
    int opcao = 0;
    int tVen = 0;
    float tVenV = 0.0;

    while (opcao != 2) {
        printf("\nMenu:\n");
        printf("1 - Adicionar venda\n");
        printf("2 - Exibir total de vendas e sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (tVen < mxVen) {
                printf("Digite o nome do produto: ");
                scanf("%s", produtos[tVen]);

                printf("Digite o preço do produto: ");
                scanf("%f", &precos[tVen]);

                printf("Digite a quantidade vendida: ");
                scanf("%d", &quantidades[tVen]);

                tVenV += precos[tVen] * quantidades[tVen];
                tVen++;
                printf("Venda registrada com sucesso!\n");
            } else {
                printf("A capacidade máxima de vendas foi atingida.\n");
            }
        } else if (opcao == 2) {
            printf("\nTotal de vendas realizadas: %d\n", tVen);
            printf("Total arrecadado: R$ %.2f\n", tVenV);
        } else {
            printf("Opção inválida. Digite 1 para adicionar uma venda, 2 para exibir o total de vendas e sair.\n");
        }
    }

    return 0;
}
