#include <stdio.h>

int main() {
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;

for (int i = 1; i <= 3; i++) {
        printf("-----------------------------------\n");
        printf("Tentativa %d de 3\n", i);
        printf("Qual o seu chute?\n");

        scanf("%d", &chute);
        
        int acertou = (chute == numerosecreto);

        if(acertou) {
            printf("Parabens, Voce acertou\n");
        }
        else{
            int maior = (chute > numerosecreto);
            if (maior)
            {
                printf("Seu chute foi MAIOR\n");
            } else{
                printf("Seu chute foi MENOR\n");
            }
        };
    };
};
