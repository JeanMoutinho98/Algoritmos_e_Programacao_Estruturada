#include <stdio.h>

int main(){
    int nota;

    
    do{                                                             //Mais rápido e mais curto do que o "while".
        printf("Insira uma nota positiva:\n");
        scanf("%d", &nota);
    } while(nota < 0);                                                   
    
        

    printf("Nota lida:%d\n", nota);

return 0;
}