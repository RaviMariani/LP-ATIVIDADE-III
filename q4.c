/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int numeros[5];
    int qtdImpares = 0, qtdNegativos = 0;
    int maior, menor, somaPares = 0, qtdPares = 0, somaTotal = 0;

    printf("Digite 5 números inteiros:\n");
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
        
        if (numeros[i] % 2 != 0) {
            qtdImpares++;
        }
        if (numeros[i] < 0) {
            qtdNegativos++;
        }
        
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }
        if (i == 0 || numeros[i] < menor) {
            menor = numeros[i];
        }
        
        somaTotal += numeros[i];
        
        if (numeros[i] % 2 == 0) {
            somaPares += numeros[i];
            qtdPares++;
        }
    }
    
    float mediaPares = 0.0;
    if (qtdPares > 0) {
        mediaPares = (float)somaPares / qtdPares;
    }
    
    float mediaTotal = (float)somaTotal / 5;

    printf("\nQuantidade de números ímpares: %d\n", qtdImpares);
    printf("Quantidade de números negativos: %d\n", qtdNegativos);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média de números pares: %.2f\n", mediaPares);
    printf("Média de números inseridos: %.2f\n", mediaTotal);

    return 0;
}
