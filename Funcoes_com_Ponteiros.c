#include <stdio.h>

void multiplicaValorPor2(int* valor){
    printf("endereco de memoria do parametro 'valor': %p\n", valor);
    *valor = *valor * 2;
}


int main(){
    int a = 10;
    

    printf("Valor de a: %d\n", a);
    printf("Enderco de memoria de 'a': %p\n", &a);


    multiplicaValorPor2(&a);
    printf("Valor de a apos funcao: %d\n", a);


    return 0;
}