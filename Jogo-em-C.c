#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 5
int main() {
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;

for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {
        printf("-----------------------------------\n");
        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual o seu chute?\n");

        scanf("%d", &chute);
        
        int acertou = (chute == numerosecreto);

        if(acertou) {
            printf("Parabens, Voce acertou\n");
            break;
        }
        else{
            int maior = (chute > numerosecreto);
            if (maior)
            {
                printf("Seu chute foi MAIOR, Tente Novamente\n");
            } else{
                printf("Seu chute foi MENOR, Tente Novamente\n");
            }
        };
    };
};
