#include <stdio.h>

int main(){
    int numero;
    int tabuada;

    printf("Bem-Vindo a TABUADA AUTOMATICA\n");
    printf("Coloque um numero:");
    scanf("%d", &numero);


    for(int i = 1; i <= 10; i++){
        tabuada = i;
        int conta = numero * tabuada;

        printf("%d x %d = %d\n", numero, tabuada, conta);

    };
};