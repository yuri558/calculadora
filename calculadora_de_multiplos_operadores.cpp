#include <stdio.h>

int main() {

    float num1, num2, resultado; // Variáveis do tipo float para armazenar números decimais.
    char operacao; // Variável do tipo char para armazenar um caractere.

    printf("Digite o primeiro numero: "); // Exibe uma mensagem para o usuário.
    scanf("%f", &num1); // Lê o primeiro número.

    printf("Digite o segundo numero: "); // Solicita o segundo número.
    scanf("%f", &num2); // Lê o segundo número.

    printf("Digite a operacao (+, -, *, /): "); // Solicita a operação desejada.
    scanf(" %c", &operacao); // Lê o operador escolhido.

    switch(operacao) { // Verifica qual operador foi digitado.

        case '+':
            resultado = num1 + num2; // Soma dos números.
            printf("Resultado: %.2f\n", resultado);
            break;

        case '-':
            resultado = num1 - num2; // Subtração dos números.
            printf("Resultado: %.2f\n", resultado);
            break;

        case '*':
            resultado = num1 * num2; // Multiplicação dos números.
            printf("Resultado: %.2f\n", resultado);
            break;

        case '/':
            if(num2 != 0) { // Verifica se o divisor é diferente de zero.
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero nao e permitida!\n");
            }
            break;

        default:
            printf("Operacao invalida!\n");
    }

    return 0; // Indica que o programa terminou com sucesso.
}
