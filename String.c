#include <stdio.h>                                                      // Descobrir o que não funcionou.
#include <stdlib.h>                                                 

int main(){
    // Primeira forma de inicializar uma string.
    char string1[10] = {'a', 'b', 'c'};
    // Caso não coloque \0, pode aparecer valores aleatórios na string.
    
    // Segunda forma de inicializar uma string.
    char string2[10] = "def";
    // Não precisa se preocupar com o \0 nessa forma.

    // Terceira forma de inicializar uma string.
    char string3[10];
    char lixo;

    printf("Insira um string usando a funcao for:");
    for(int pos = 0; pos < 3; pos++){
        scanf("%c", &string3[pos]);
        scanf("%c", &lixo);
    }
    // Pouco usada, melhor nem perder tempo com isso.
    // Estabelecerá caractéres aleatórios até fechar o vetor.

    // Quarta forma de inicializar uma string.
    char string4[20];
    
    printf("Insira uma string usando a funcao 'gets':");
    gets(string4);

    // Quinta forma de inicializar uma string.
    char string5[20];
    printf("Insira uma string usando a funcao 'fgets':");
    fgets(string5, 20, stdin);
    // Corta os caractéres que excederem o limite delimitado.
    // Evita problemas com o buffer.
    // Lê o enter como '\n'.


    printf("String 1 (Lista de chars): %s\n", string1);
    printf("String 2 (String literal): %s\n", string2);
    printf("String 3 (For): %s\n", string3);
    printf("String 4 (Gets): %s\n", string4);
    printf("Imprimindo uma string usando a funcao 'puts(variavel)':");
    puts(string4);
    printf("String 5 (Fgets): %s\n", string5);
    printf("Imprimindo uma string usando a funcao 'fputs(variavel, stdout)':");
    fputs(string5, stdout);                              // Pode ser usada para ler Strings.


    // Funções para manipular strings.

        // Tamanho da string.
    printf("Tamanho da string 4:" strlen(string4));

        // Copiar uma string para outra string.
    char string6[50];
    // string5 = string6 não é permitido em C.
    // Pega o valor da string 5 e joga na string 6.
    strcpy(string6, string5);                          // strcpy(char destino, char origem);
    printf("String 6 (Strcpy): %s\n", string6);

        // Concatenar strings.
    strcat(string1, string2);                           // strcat(char destino, char origem);
    printf("String 1 concatenada com a String 2: %s\n", string1);

        // Comparar strings.
    char s1[5] = 'abc';
    char s2[2] = 'def';
    // if(s1 == s2){} não é permitido.
    if(strcmp(s1,s2) == 0){
        printf("%s eh igual a %s\n", s1, s2);
    }
    else if(strcmp(s1,s2) < 0){
        printf("%s vem antes %s alfabeticamente.\n", s1, s2);
    }
    else if(strcmp(s1,s2) > 0){
        printf("%s vem depois de %s alfabeticamente.\n", s1, s2);
    }
    // A função strcmp() é case sensitive.


    return 0;
}