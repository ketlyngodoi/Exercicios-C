/*  Exercício: Calculadora simples com loop

    Descrição: 
         O programa lê dois números inteiros e permite que o usuário
        escolha uma operação matemática (soma, subtração,
        multiplicação ou divisão).

         Utiliza a estrutura switch para executar a operação
        escolhida e um laço do-while para repetir o processo
        até o usuário decidir encerrar.

         Na divisão, há verificação para evitar divisão por zero.

    Conceitos utilizados:
        - Estrutura de repetição (do-while)
 */

#include <stdio.h> 

int main() { 
    int num1;  
    int num2;  
    int escolha;  
    int novaEquacao; 

    do { 
        printf("--------- CALCULADORA ---------\n");  
        printf("Digite um número inteiro: ");  
        scanf("%d", &num1);  
        fflush(stdin);  

        printf("Digite outro número inteiro: ");  
        scanf("%d", &num2);  
        fflush(stdin);  

        printf("\nQue operação deseja fazer:\n" 
        "[1] SOMAR\n" 
        "[2] SUBTRAIR\n" 
        "[3] MULTIPLICAR\n" 
        "[4] DIVIDIR\n");  
        scanf("%d", &escolha);  
        fflush(stdin); 

        switch(escolha) {  
        case 1:   
        printf("---------------------------------\n"); 
        printf("%d + %d = %d\n", num1, num2, num1+num2);  
        printf("---------------------------------\n"); 
        break;  

        case 2:   
        printf("---------------------------------\n"); 
        printf("%d - %d = %d\n", num1, num2, num1-num2); 
        printf("---------------------------------\n"); 
        break;  

        case 3:   
        printf("---------------------------------\n"); 
        printf("%d x %d = %d\n", num1, num2, num1*num2); 
        printf("---------------------------------\n"); 
        break;  

        case 4:   
        if (num2 != 0) {  
            float divisao;  
            divisao = (float)num1 / num2;  
            printf("---------------------------------\n"); 
            printf("%d : %d = %.1f\n", num1, num2, divisao);  
            printf("---------------------------------\n"); 
        } else {  
            printf("---------------------------------\n"); 
            printf("Erro na divisão\n.");  
            printf("---------------------------------\n"); 
        }  
        break;  
        default:  
            printf("Opção inválida!\n"); 
        }  

        printf("Deseja fazer uma nova equação?\n" 
        "[1] SIM\n" 
        "[2] NÃO\n"); 
        scanf("%d", &novaEquacao); 
        fflush(stdin); 

    } while (novaEquacao == 1); 

    printf("---------------------------------\n"); 
    printf("PROGRAMA ENCERRADO.\n"); 
    printf("---------------------------------\n"); 

    return 0; 
} 
