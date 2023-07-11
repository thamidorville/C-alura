
// Exercício: Cálculo de média

// Escreva um programa em C que solicite ao usuário a quantidade de números que serão 
// inseridos e, em seguida, peça para que ele digite esses números. 
// O programa deverá calcular a média dos números e exibir o resultado na saída padrão.

#include <stdio.h>

int main() {
    int quantidadeNumeros;
    float numero, soma = 0.0, media;

    printf("Digite a quantidade de números: ");
    scanf("%d", &quantidadeNumeros);

    for (int i = 1; i <= quantidadeNumeros; i++) {
        printf("Digite o número %d: ", i);
        scanf("%f", &numero);
        soma += numero;
    }

    media = soma / quantidadeNumeros;
    printf("A média é: %.2f\n", media);

    return 0;
}


  
