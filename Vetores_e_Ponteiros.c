#include <stdio.h>
int main(){
    int v[3] = {1, 2, 3};


    printf("Endereco de memoria apontado por v: %p\n", v);
    printf("Valor apontado por v(primeiro valor do vetor): %d\n", *v);
    printf("Endereco de memoria do segundo valor do vetor: %p\n", *(v + 1));
    printf("Segundo valor de v: %d\n", *(v + 1));
    printf("Terceiro valor de v: %d\n", *(v + 2));


    return 0;
}
