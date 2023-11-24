/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
   
    int mxPessoas = 5;
    
    int indMV;
    int indMN;
    int indMaiorP;
    int indMenorP;
    int indMaisA;
    int indMaisB;
    int TAM_NOME;

    char nomes[mxPessoas][TAM_NOME];
    int idades[mxPessoas];
    float pesos[mxPessoas];
    float alturas[mxPessoas];

    for (int i = 0; i < mxPessoas; i++) {
        printf("Informe o nome do usuário %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Informe a idade do usuário %d: ", i + 1);
        scanf("%d", &idades[i]);

        printf("Informe o peso do usuário %d : ", i + 1);
        scanf("%f", &pesos[i]);

        printf("Informe a altura do usuário em centimetros: %d: ", i + 1);
        scanf("%f", &alturas[i]);
    }

    for (int i = 1; i < mxPessoas; i++) {
        if (alturas[i] > alturas[indMaisA]) {
            indMaisA = i;
        }
        if (alturas[i] < alturas[indMaisB]) {
            indMaisB = i;
        }
    }

    
    for (int i = 1; i < mxPessoas; i++) {
        if (pesos[i] > pesos[indMaiorP]) {
            indMaiorP = i;
        }
        if (pesos[i] < pesos[indMenorP]) {
            indMenorP = i;
        }
    }

   
    for (int i = 1; i < mxPessoas; i++) {
        if (idades[i] > idades[indMV]) {
            indMV = i;
        }
        if (idades[i] < idades[indMV]) {
            indMV = i;
        }
    }

    printf("\n Usuário mais alto:\nNome: %s\nAltura: %.2f metros\n", nomes[indMaisA], alturas[indMaisA]);
    printf("\n Usuário mais baixo:\nNome: %s\nAltura: %.2f metros\n", nomes[indMaisB], alturas[indMaisB]);
    printf("\n Usuário com maior peso:\nNome: %s\nPeso: %.2f kg\n", nomes[indMaiorP], pesos[indMaiorP]);
    printf("\n Usuário com menor peso:\nNome: %s\nPeso: %.2f kg\n", nomes[indMenorP], pesos[indMenorP]);
    printf("\n suário mais velho:\nNome: %s\nIdade: %d anos\n", nomes[indMV], idades[indMV]);
    printf("\n Usuário mais novo:\nNome: %s\nIdade: %d anos\n", nomes[indMV], idades[indMV]);

    return 0;
}
