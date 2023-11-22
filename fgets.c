#include <stdio.h>

int main(){
    FILE* arquivo;
    char texto[30];


    arquivo = fopen("teste.txt", "r");                             


    if(arquivo == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }


    printf("Lista de Compras usando fgets:\n");
    int linha = 1;
    while(1){
        int* result = fgets(texto, 20, arquivo);
        if(result == NULL){
            printf("Fim do arquivo!\n");
            break;
        }
        printf("Linha %d: %s", linha, texto);
        linha++;
    }

    
    fclose(arquivo);
    

    return 0;
}