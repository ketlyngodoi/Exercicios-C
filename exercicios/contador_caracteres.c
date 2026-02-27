/*  Exercício: Contador de Caracteres

    Descrição: 
         Realiza a leitura de uma string digitada pelo usuário
        e contabiliza a quantidade de caracteres utilizando
        um laço de repetição for.

         O caractere nulo ('\0') é utilizado como critério de
        parada do laço. Espaços em branco e o caractere de
        nova linha ('\n') são desconsiderados por meio de
        uma estrutura condicional.

    Conceitos utilizados:
        - Manipulaçao de strings
        - Função fgets
        - Estrutura de repetição (for)
        - Estrutura condicional (if)
        - Caractere nulo (\0)
 */

#include <stdio.h>

int main() {
    int contador = 0;
    char texto[30];

    printf("Quer saber quantos caracteres tem o seu nome?\n");
    printf("Digite aqui para contarmos: ");
    fgets(texto, 30, stdin);

    // Percorre a string até encontrar o caractere nulo('\0')
    for (int i = 0; texto[i] != '\0'; i++) {
        // Ignora os espaços e o caractere de nova linha
        if (texto[i] != ' ' && texto[i] != '\n') {
            contador++;
        }
    }
    printf("\nO seu nome tem %d caracteres", contador);

    return 0;
}