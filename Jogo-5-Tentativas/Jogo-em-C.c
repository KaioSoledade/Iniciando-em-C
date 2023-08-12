#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMERO_DE_TENTATIVAS 5

int main() {
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int segundo = time(0);
    srand(segundo);

    int pontos = 1000;

    int numerobruto = rand();
    int numerosecreto = numerobruto % 100;

    int chute;
    printf("%d\n", numerosecreto);

for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++) {
        printf("-----------------------------------\n");
        printf("Tentativa %d de %d\n", i, NUMERO_DE_TENTATIVAS);
        printf("Qual o seu chute?\n");

        scanf("%d", &chute);
        
        if(chute < 0){
            printf("Seu chute nao vale como uma tentativa\n");
            i--;
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);


        if(acertou) {
            printf("Parabens, Voce acertou\n");
            break;
        }
        else if (maior){
            printf("Seu chute foi MAIOR, Tente Novamente\n");

        } else{
            printf("Seu chute foi MENOR, Tente Novamente\n");

        }

        int pontosperdidos = abs(chute - numerosecreto) / 2;
        pontos = pontos - pontosperdidos;
    };
    printf("FIM DE JOGO\n");
    printf("Sua Pontuacao: %d\n", pontos);

};
