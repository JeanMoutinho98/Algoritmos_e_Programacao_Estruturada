#include <stdio.h>

int main(){
    int nota1, nota2, nota3, media;


    printf("Digite 3 notas:\n");

    
    printf("nota1:  ");
    scanf("%d", &nota1); 
    printf("nota2:  ");
    scanf("%d", &nota2);
    printf("nota3:  ");
    scanf("%d", &nota3);


    media = (nota1 + nota2 + nota3)/3;


    if(media == 8){
        printf("Parabens, voce recebeu um bonus!\n");
        media = media +1;
    }
    else if(media == 9){
        printf("Parabens, voce recebeu um bonus!\n");
        media = media +1;
    }


    printf("Media Final: %d\n", media);


    if(media < 7){
        printf("Reprovado\n");
    }
    else if(media == 10){
        printf("Tu e brabo mesmo hein mlk\n");
    }
    else if(media >8){
        printf("Espetacular");
    }
    else{
        printf("Aprovado\n");
    }


return 0;
}