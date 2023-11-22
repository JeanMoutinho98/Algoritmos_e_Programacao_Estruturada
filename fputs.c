#include <stdio.h>

int main(){
    FILE* arquivo;


    arquivo = fopen("teste.txt", "w");                             

    if(arquivo == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }


    fputs("Lista de compras usando fputs:\n", arquivo);                                
    fputs("Arroz: 2\n", arquivo);
    fputs("Feijao: 1\n", arquivo);
    fputs("Oleo: 1\n", arquivo);


    fputs("Lista de compras usando fputs no terminal:\n", stdout);                                ;
    fputs("Arroz: 2\n", stdout);
    fputs("Feijao: 1\n", stdout);
    fputs("Oleo: 1\n", stdout);

    
    fclose(arquivo);
    

    return 0;
}