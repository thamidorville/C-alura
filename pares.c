//Escreva um programa em C que calcule e exiba a soma dos números pares de 1 a 100.

//if(i%2 == 0)

// #include <stdio.h>

// int main() {
//     int somapares = 0;
//     int i;

//     for (i = 1; i <= 100; i++){
//         if(i % 2 == 0){ // o numero que i ta iterando, ou seja, pocionado, e par? 
//         somapares = somapares + i; //0 + o numero que i ta posicionado e guarde em somapares
//         }
//     }
//     printf("a soma dos numeros pares e: %d\n", somapares); 
//     return 0;
// }

//Escreva um programa que imprima a soma de todos os números de 1 até 100. Ou seja, ele calculará o resultado de 1+2+3+4+...+100.

#include <stdio.h>

int main(){
    int i;
    int soma = 0;

    for (i = 1; i <= 100; i++){
        soma = soma + i; // soma , 0 + numero que i ta posicionado. mais uma vez, some o resultado com o outro numero que i esta posicionado
    
    }
    printf("a soma dos numeros e: %d\n:", soma);
    return 0;
}