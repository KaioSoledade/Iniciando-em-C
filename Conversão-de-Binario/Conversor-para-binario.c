#include <stdio.h>

int main(){
    printf("****************************************\n");
    printf("* Bem vindo ao CONVERSOR PARA BINARIO *\n");
    printf("****************************************\n");

    int numerobruto;
    printf("Coloque seu Numero:\n");
    scanf("%d", &numerobruto);

while(1){
    if(numerobruto = 1){
     break;   
    }else{
        int arm = 0;

        int divisao_bi0 = numerobruto % 2;
        int divisao0 = numerobruto / 2;
            
        if(divisao_bi0 = 0){
            arm = 0;
        } else{
            arm = 1;
        };   

    }
};


    int arm = 0;
    int arm1 = 0;
    int arm2 = 0;
    int arm3 = 0;
    int arm4 = 0;
    int arm5 = 0;
    int arm6 = 0;


        int divisao_bi0 = numerobruto % 2;
        int divisao0 = numerobruto / 2;

        int divisao_bi1 = divisao0 % 2;
        int divisao1 = divisao0 / 2;

        int divisao_bi2 = divisao1 % 2;
        int divisao2 = divisao1 / 2;
        
        int divisao_bi3 = divisao2 % 2;
        int divisao3 = divisao2 / 2;

        int divisao_bi4 = divisao3 % 2;
        int divisao4 = divisao3 / 2;

        int divisao_bi5 = divisao4 % 2;
        int divisao5 = divisao4 / 2;

        int divisao_bi6 = divisao5 % 2;
        int divisao6 = divisao5 / 2;

        int divisao_bi7 = divisao6 % 2;
        int divisao7 = divisao6 / 2;



        if(divisao_bi0 = 0){
            arm = 0;
        } else{
            arm = 1;
        };     
        
        if(divisao_bi2 = 0){
            arm1 = 0;
        } else{
            arm1 = 1;
        };        
        
        if(divisao_bi3 = 0){
            arm2 = 0;
        } else{
            arm2 = 1;
        };        
        
        if(divisao_bi4 = 0){
            arm3 = 0;
        } else{
            arm3 = 1;
        };
                
        if(divisao_bi5 = 0){
            arm4 = 0;
        } else{
            arm4 = 1;
        };        
        
        if(divisao_bi6 = 0){
            arm5 = 0;
        } else{
            arm5 = 1;
        };        
        
        if(divisao_bi7 = 0){
            arm6 = 0;
        } else{
            arm6 = 1;
        };


    printf("%d%d%d%d%d%d%d\n", arm6, arm5, arm4, arm3, arm2, arm2, arm1, arm);
}