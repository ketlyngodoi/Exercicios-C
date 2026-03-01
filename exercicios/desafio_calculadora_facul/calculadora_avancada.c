/*  Exercício: Calculadora simples

    Descrição: 
         O programa solicita ao usuário a quantidade de números
        que deseja informar. Em seguida, utiliza um laço for
        para ler cada número e calcular a soma total.
 */

#include<stdio.h> 
#include <windows.h>

int main ( ) { 
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    int quantidadeNum; 
    int soma = 0; 
    int num; 

    printf("--------- CALCULADORA ---------"); 
    printf("\nQuantos números deseja calcular? "); 
    scanf("%d", &quantidadeNum); 

    for (int i = 1; i < quantidadeNum + 1; i++) { 
        printf("\nDigite o %d° número: ", i); 
        scanf("%d", &num); 
        soma = soma + num; 
    } 
    printf("\nA soma dos %d números inseridos é %d.", quantidadeNum, soma); 
    return 0; 
}   