#include <stdio.h>

void decimalToBinary(int numero) {
    if (numero == 0) {
        printf("0");
        return;
    }

    int binary[32]; // Armazena os dígitos binários, máximo de 32 bits para int

    int index = 0;
    while (numero > 0) {
        binary[index] = numero % 2; // Obtém o bit menos significativo
        numero /= 2; // Divide o número por 2 para obter o próximo dígito binário
        index++;
    }

    printf("Representação binária: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int numero;
    printf("Digite um número decimal: ");
    scanf("%d", &numero);

    decimalToBinary(numero);

    return 0;
}
