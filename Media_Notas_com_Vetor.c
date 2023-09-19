#include <stdio.h>                                          // Não funcionou :(

int main(){
    double notas[4], soma_notas = 0;
    char nome_aluno[20];


    scanf("%[^\n]s", &nome_aluno);
    printf("Nome do aluno %s:", nome_aluno);


    printf("Insira 4 notas:");
    for(int i = 0; i <= 3; i++){
        printf("Nota %d: ", i + 1);
        scanf("%lf", &notas[i]);
        somas_notas = soma_notas + notas[i];
    }


    for(int i = 0; i <= 3; i++){
        printf("Nota %d: %lf\n", i + 1, notas[i]);
    }


    printf("Media final: %lf\n", soma_notas/4);


return 0;
}