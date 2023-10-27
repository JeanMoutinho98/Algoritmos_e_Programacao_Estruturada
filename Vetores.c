#include <stdio.h>                                      // Vetores se assemelham a uma lista.
                                            
int main(){                                             // Primeira forma de inicializar vetores.
    int vetor1[4] = {1, 2, 3, 4};                       // Tipo de variavel Nome[Tamanho do vetor] = {Componentes do vetor}.


    int vetor2[4];                                      // Segunda forma de inicializar vetores.
    vetor2[0] = 5;
    vetor2[1] = 6;
    vetor2[2] = 7;
    vetor2[3] = 8;


    int vetor3[4];                                      // Terceira forma de inicializar vetores.


    for(int i = 0; i < 4; i++){
        scanf("%d", &vetor3[i]);
    }

    

    int vetor4[4];                                      // Quarta forma de inicializar vetores.
    for(int i = 0; i < 4; i++){
        vetor4[i] = i + 1;
    }

    // Imprimindo os resultados dos vetores.
    printf("\n");
    printf("Valor da posicao 0 do vetor 1: %d\n", vetor1[0]);       // Evitar usar posições inferiores ou superiores as estabelecidas.
    printf("Valor da posicao 1 do vetor 1: %d\n", vetor1[1]);   
    printf("Valor da posicao 2 do vetor 1: %d\n", vetor1[2]);
    printf("Valor da posicao 3 do vetor 1: %d\n", vetor1[3]);
    printf("\n");


    printf("Valor da posicao 0 do vetor 2: %d\n", vetor2[0]);       
    printf("Valor da posicao 1 do vetor 2: %d\n", vetor2[1]);
    printf("Valor da posicao 2 do vetor 2: %d\n", vetor2[2]);
    printf("Valor da posicao 3 do vetor 2: %d\n", vetor2[3]);
    printf("\n");

    printf("Valor da posicao 0 do vetor 3: %d\n", vetor3[0]);       
    printf("Valor da posicao 1 do vetor 3: %d\n", vetor3[1]);
    printf("Valor da posicao 2 do vetor 3: %d\n", vetor3[2]);
    printf("Valor da posicao 3 do vetor 3: %d\n", vetor3[3]);
    printf("\n");

    for(int i = 0; i < 4; i++){
        printf("Valor da posicao %d do vetor 4: %d\n", i, vetor4[i]);
    }
    printf("\n");


return 0;
}