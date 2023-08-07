#include <stdio.h>

int main() {
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    printf("o numero %d e numero secreto\n", numerosecreto);

    int chute;
    printf("Tente adivinhar o numero");
    scanf("%d", &chute);
    printf("seu chute foi %d\r", chute);

    if(chute == numerosecreto) {
        printf("Parabens, Voce acertou\r");
    }
    else{
        if (chute > numerosecreto)
        {
            printf("Voce errou\r");
            printf("O numero secreto é MENOR\r");
            printf("Tente Novamente\r");
        }
            if (chute < numerosecreto)
        {
            printf("Voce errou\r");
            printf("O numero secreto e MAIOR\r");
            printf("Tente Novamente\r");
        }
        

    };
};
