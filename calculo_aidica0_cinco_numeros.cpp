#include <stdio.h> // Biblioteca que permite usar printf() e scanf()

int main() { // Função principal do programa

    int numero; // Variável para armazenar cada número digitado
    int soma = 0; // Variável acumuladora que começa em 0
    int i; // Variável de controle do laço

    for(i = 1; i <= 5; i++) {
        // O laço será executado 5 vezes

        printf("Digite o %d numero: ", i);
        // Solicita um número ao usuário

        scanf("%d", &numero);
        // Lê o número digitado

        soma = soma + numero;
        // Adiciona o número digitado ao valor atual da soma
    }

    printf("\nA soma total dos numeros e: %d\n", soma);
    // Exibe o resultado final da soma

    return 0;
    // Indica que o programa terminou com sucesso
}
