#include <stdio.h>

// Escreva um programa que peça um inteiro ao usuário, e com esse inteiro, 
// ele imprima, linha-a-linha, a tabuada daquele número até o 10. Por exemplo, 
// se ele escolher o número 2, o programa imprimirá: 2x1=2, 2x2=4, 2x3=6, ..., 2x10=20.
int main () {
    int numero, resultado;

    printf("Digite um numero inteiro:");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++){
        resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado); //numero x posicao = resultado
    }

    return 0;
}