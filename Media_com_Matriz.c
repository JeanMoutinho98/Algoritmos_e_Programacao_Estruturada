#include <stdio.h>                                          // Não funcionou :(

int main(){                                                 // Número de linhas e número de colunas, respectivamente.
    double notas[2][4];                                      // Matriz representando 2 alunos, cada um com 4 notas.
    

    for(int linha = 0; linha <= 1; linha++){
        printf("Insira 4 notas do aluno %d:\n", linha + 1);
        for(int coluna = 0; coluna <= 3; coluna++){
        printf("Nota %d: ", coluna + 1);
        scanf("%.1lf", &notas[linha][coluna]);
        }
    }


    /*
    printf("Insira 4 notas do primeiro aluno:");
    for(int i = 0; i <= 3; i++){
        printf("Nota %d: ", i + 1);
        scanf("%lf", &notas[0][i]);
        
    }


    printf("Insira 4 notas do segundo aluno:");
    for(int i = 0; i <= 3; i++){
        printf("Nota %d: ", i + 1);
        scanf("%lf", &notas[1][i]);
        
    }
    */

    printf("Notas do primeiro aluno:\n");
    for(int coluna = 0; coluna <= 3; coluna++){
        printf("Nota %d: %.1lf\n", coluna + 1, notas[coluna]);
    }


    printf("Notas do primeiro aluno:\n");
    for(int coluna = 0; coluna <= 3; coluna++){
        printf("Nota %d: %.1lf\n", coluna + 1, notas[coluna]);
    }    


return 0;
}