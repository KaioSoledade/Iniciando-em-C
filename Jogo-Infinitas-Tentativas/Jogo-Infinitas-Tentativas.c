#include <stdio.h>
int main() {
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf("******************************************\n");

    int numerosecreto = 42;
    int chute;
    int tentativa = 1;

    while(1){
        printf("-----------------------------------\n");
        printf("Tentativa %d\n", tentativa);
        printf("Qual o seu chute?\n");

        scanf("%d", &chute);
        
        if(chute < 0){
            printf("Seu chute nao vale como uma tentativa\n");
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

        tentativa++;
    };
    
    printf("Voce usou %d tentativas\n", tentativa);
    printf("FIM DE JOGO");

};
