#include <stdio.h>

int main(){
    FILE* arquivo;


    arquivo = fopen("teste.txt", "a");                             // fopen("nome do arquivo", "modo");
    // Se o arquivo não existir, modos 'a' e 'w' criam arquivo;

    if(arquivo == NULL){
        printf("Erro na abertura do arquivo!\n");
        exit(1);
    }


    //Funções para Escrita/Leitura de arquivos;
    //int fputc(int c, FILE *fp);
    //int fgetc(int c, FILE *fp);
    //eof();
    //rewind(arquivo);
    //fputs(string, arquivo);
    //fputs imprimindo no terminal: fputs(string, stdout);
    //fgets(string, tamanho, arquivo); 
    //fprintf(arquivo, oq vai ser imprimido, variavel);


    fclose(arquivo);
    

    return 0;
}