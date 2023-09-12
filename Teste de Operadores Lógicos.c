#include <stdio.h>


int main(){
    int nota, frequencia;


    printf("Insira nota final:\n");
    scanf("%d", &nota);
    printf("Insira a porcentagem da frequencia:\n");
    scanf("%d", &frequencia);


    if(nota >= 6 && frequencia >= 75){
        printf("Aluno aprovado");
    }
    else{
        printf("kkkkkkkkjota se lascou");
    }


return 0;
}