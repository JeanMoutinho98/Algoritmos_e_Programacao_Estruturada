#include <stdio.h>
int main(){
    int matriz1[2][3];                                              // Primeira forma de inicializar uma matriz.


    for(int linha = 0; linha < 2; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("Insira o valor da matriz[%d][%d]: ", linha, coluna);
            scanf("%d", &matriz1[linha][coluna]);
        }
    }

    printf("Matriz 1:\n");
    for(int linha = 0; linha < 2; linha++){
        for(int coluna = 0; coluna < 3; coluna++){
            printf("%d", matriz1[linha][coluna]);
        }
        printf("\n");
    }


    int matriz2[2][3];                                              // Segunda forma de inicializar strings.
    matriz2[0][0] = 7;
    matriz2[0][1] = 8;
    matriz2[0][2] = 9;
    matriz2[1][0] = 10;
    matriz2[1][1] = 11;
    matriz2[1][2] = 12;


    printf("Matriz 2:\n");                                          // Descobrir o que não funcionou.
    for(int linha = 0; linha < 1; linha++){
        for(int coluna = 0; coluna < 2; coluna++){
            printf("%d", &matriz2[linha][coluna]);
        }
        printf("\n");
    }


return 0;
}