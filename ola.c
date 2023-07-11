#include <stdio.h>

int main (){
    
    int numero1;
    int numero2;

    printf("Enter a number:");
    scanf("%d", &numero1);
    printf("Enter a second number:");
    scanf("%d", &numero2);

    printf("The first number you entered was: %d\n, and the second number you entered was: %d\n", numero1, numero2);

    int result = numero1 * numero2;
    printf("The resulf of multiplying the two numbers you entered is: %d", result);
}