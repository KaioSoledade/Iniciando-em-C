#include <stdio.h>

int main() {
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    printf("o numero %d é numero secreto, não diga a ninguem\n", numerosecreto);

    int chute;
    printf("Tente adivinhar o numero");
    scanf("%d", &chute);
    printf("seu chute foi %d\r", chute);

    if(chute == numerosecreto) {
        printf("Parabens, Voce acertou\r");
    }
    else{
        printf("Voce errou\r");
        printf("Tente Novamente\r");
    };
};
