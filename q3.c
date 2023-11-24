/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    const int mxCtt = 100;
    char nomes[mxCtt][50];
    char numeros[mxCtt][15]; 
    int opcao = 0;
    int totCtt = 0;

    while (opcao != 2) {
        printf("\nMenu:\n");
        printf("1 - Adicionar número\n");
        printf("2 - Mostrar números cadastrados e sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (totCtt < mxCtt) {
                printf("Digite o nome: ");
                scanf("%s", nomes[totCtt]);

                printf("Digite o número de telefone: ");
                scanf("%s", numeros[totCtt]);

                totCtt++;
                printf("Contato adicionado com sucesso!\n");
            } else {
                printf("A agenda está cheia, não é possível adicionar mais contatos.\n");
            }
        } else if (opcao == 2) {
            printf("\nNúmeros cadastrados na agenda:\n");
            if (totCtt == 0) {
                printf("Nenhum contato cadastrado.\n");
            } else {
                for (int i = 0; i < totCtt; i++) {
                    printf("Nome: %s\nNúmero: %s\n", nomes[i], numeros[i]);
                }
            }
        } else {
            printf("Opção inválida. Digite 1 para adicionar um número, 2 para mostrar os números cadastrados e encerrar o software.\n");
        }
    }

    return 0;
}
