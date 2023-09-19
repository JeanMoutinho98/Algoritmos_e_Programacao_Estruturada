#include <stdio.h>                                                      //Falta apenas descobrir como forçar o código a usar 4 digitos sempre.

int main(){
    int senha_valida, tentativa;


    printf("Cadastre uma senha:");
    scanf("%d", &senha_valida);
    printf("Senha cadastrada: %d\n", senha_valida);
    printf("Insira novamente a senha cadastrada:");
    scanf("%d", &tentativa);


    while(tentativa != senha_valida){
        printf("Senha invalida!\nInsira novamente a senha cadastrada:");
        scanf("%d", &tentativa);
    }


    if(tentativa = senha_valida){
        printf("Senha valida!\n");
    }

    
return 0;
}