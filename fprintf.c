#include <stdio.h>

int main(){
    FILE* arquivo;
    char nome[30] = "Jean";
    int idade = 25;
    char matricula[20] = "101010";
    float nota = 10.0;


    arquivo = fopen("teste.txt", "w");                            


    if(arquivo == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }


    printf("Imprimindo dados usando a funcao fprintf:\n");
    fprintf(arquivo, "Nome: %s\n", nome);
    fprintf(arquivo, "Idade: %d\n", idade);
    fprintf(arquivo, "Matricula: %s\n", matricula);
    fprintf(arquivo, "Nota: %f\n", nota);    

    
    fclose(arquivo);
    

    return 0;
}