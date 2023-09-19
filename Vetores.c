#include <stdio.h>                                      // Vetores se assemelham a uma lista.
                                            
int main(){                                             // Primeira forma de fazer vetores.
    int vetor[4] = {1, 2, 3, 4};                        // Tipo de variavel[Tamanho do vetor] = {Componentes do vetor}.


    printf("Valor da posicao 0: %d\n", vetor[0]);       // Evitar usar posições inferiores ou superiores as estabelecidas.
    printf("Valor da posicao 1: %d\n", vetor[1]);
    printf("Valor da posicao 2: %d\n", vetor[2]);
    printf("Valor da posicao 3: %d\n", vetor[3]);

//
return 0;
}