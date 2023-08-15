#include <stdio.h>

int main(){;

       int nota1;
       int nota2;
       int nota3;
       int media;

       printf("Digite 3 notas:\n");         

       printf("nota1:  ");
       scanf("%d", &nota1);
       printf("nota2:  ");
       scanf("%d", &nota2);
       printf("nota3:  ");
       scanf("%d", &nota3);

       media = (nota1 + nota2 + nota3)/3;
       printf("Media final: %d\n", media);

       if (media < 7){
        printf("Reprovado\n");
       } else if (media >= 9){
        printf("Sensacional");
       } else {
        printf("Aprovado\n");
        }

    

return 0;
}