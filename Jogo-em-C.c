#include <stdio.h>

int main() {
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

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
            printf("Seu chute foi MAIOR\r");
        } else{
            printf("Seu chute foi MENOR\r");
        }
    };
};
