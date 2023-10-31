#include <stdio.h>

int main(){
    int c = 5, *p, *p1;


    p = &c;                                                         // Armazena endereço de memória 


    printf("Valor de c: %d\n", c);
    printf("Endereco de memoria de c: %p\n", &c);
    printf("Valor de p: %p\n", p);
    printf("Valor da variavel c a partir de p: %d\n", *p);
    *p = 10; // c = 10
    printf("Alterando valor de c pelo ponteiro p...\n");
    printf("Valor de c: %d\n", c);
    p1 = p; // p1 recebe endereço de memória salvo em p
    printf("Valor de p1: %p\n", p1);
    printf("Valor de c pelo ponteiro p\n");

    return 0;
}