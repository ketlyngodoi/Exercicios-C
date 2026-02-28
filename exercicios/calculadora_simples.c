#include <stdio.h> 
#include <windows.h>

int main() { 
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    int num1; 
    int num2; 
    int escolha; 

    printf("--------- CALCULADORA ---------\n"); 
    printf("Digite um número inteiro: "); 
    scanf("%d", &num1); 
    fflush(stdin); 

    printf("Digite outro número inteiro: "); 
    scanf("%d", &num2); 
    fflush(stdin); 

    printf("\nQue operação deseja fazer:\n[1] SOMAR \n[2] SUBTRAIR \n[3] MULTIPLICAR \n[4] DIVIDIR\n"); 
    scanf("%d", &escolha); 
    fflush(stdin); 

    switch(escolha) { 
        case 1:  
        printf("%d + %d = %d", num1, num2, num1+num2); 
        break; 

        case 2:  
        printf("%d - %d = %d", num1, num2, num1-num2); 
        break; 

        case 3:  
        printf("%d x %d = %d", num1, num2, num1*num2); 
        break; 

        case 4:  
        if (num2 != 0) { 
            float divisao; 
            divisao = (float)num1 / num2; 
            printf("%d : %d = %.1f", num1, num2, divisao); 
        } else { 
            printf("Erro na divisão\n."); 
        }
        break; 

        default: 
            printf("Opção inválida! Não é possível dividir por 0.\n"); 
    }    
    return 0; 

} 