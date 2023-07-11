#include <stdio.h>
#include <stdlib.h>
#include <time.h> //para usar o time

// #define NUMERO_DE_TENTATIVAS 5 // definindo constante

int main()
{

    printf("**********************************\n");
    printf("Bem-vindo ao jogo de adivinhação.\n");
    printf("*********************************\n");

    int segundos = time(0); // atualiza o numero de segundos desde 1 jan 1970
    srand(segundos);        // passo isso para a funcao rand p atualizar os numeros aleatorios do jogo para numeros distintos

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100; // o resto vai ser 0 a 99

    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;

    int nivel;
    printf("What`s the level at your game?");
    printf("(1)easy (2)middle (3)hard\n\n");
    printf("Choose your level: ");
    scanf("%d", &nivel);


    int numerodetentativas;

    switch(nivel){
        case 1: 
            numerodetentativas = 20;
            break;

        case 2:
            numerodetentativas = 15;
            break;

            default: 
                numerodetentativas = 6;
                break;
    }
    

    // if(nivel == 1){
    //     numerodetentativas = 20;
    // } else if(nivel == 2){
    //     numerodetentativas = 15;
    // } else {
    //     numerodetentativas = 6;
    // }

    for (int i = 1; i <= numerodetentativas; i++)
    {

        printf("Tentativa %d\n", tentativas);
        printf("What's your guess?");
        scanf("%d", &chute);
        printf("Your guess was %d\n", chute);

        if (chute < 0)
        {
            printf("You guess cannot be a negative number!\n");

            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (acertou)
        {
            break;
        }
        else if (maior)
        {
            printf("Your guess was higuer than the secret number. Try again!\n");
        }
        else
        {
            printf("Your guess was lower than the secret number. Try again!\n");
        }
        // Vamos adicionar uma função no jogo: pontos. Ao final da partida,
        // diremos ao jogador quantos pontos ele fez, para compararmos entre jogadores
        // e sabermos quem obteve a maior pontuação. A regra será: toda partida começa
        // com 1000 pontos e, a cada rodada, pontos serão subtraídos, até que o jogador
        // acerte o número secreto.

        tentativas = tentativas + 1; // tentativas++

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }

    printf("GAME OVER!\n");

    if (acertou)
    {
        printf("You win!\n");
        printf("You guessed it in %d\n", tentativas);
        printf("Total de pontos: %.2f\n", pontos);
    }
    else
    {
        printf("You loosed! Try again!\n");
    }
}