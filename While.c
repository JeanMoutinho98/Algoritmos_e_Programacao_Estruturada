#include <stdio.h>

int main(){
    int i = 0;
    int nota;

    
    while(1){                                                   //0 = Falso; 1 = Verdadeiro;
        printf("Insira uma nota posita:\n");
        scanf("%d", &nota);
        if(nota > 0){
            break;
        }
    }


    printf("Nota lida:%d\n", nota);


     while(i <= 4){
        printf("Valor de i:%d\n", i);
        i++;
    }


   


}