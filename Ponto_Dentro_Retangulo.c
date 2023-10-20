#include <stdio.h>                                          //Código funcionou porém o cálculo não
#include <math.h>

struct ponto{                                                               //Igual.
    int x,y;
};


struct retangulo{
    struct ponto ponto_a;
    struct ponto ponto_d;
};


float ponto_dentro_do_retangulo(struct retangulo ret, struct ponto p){      //Igual.
    if(p.y >= r.ponto_d.y && p.y <= r.ponto_a.y && p.x >= r.ponto_a.x && p.x <= ponto_d.x){
        return 1;
    }


    return 0;
}



int main(){                                                                 //Igual.
    struct retangulo ret;
    struct ponto ponto_x;


    printf("Insira o ponto A (canto superior esquerdo) do retangulo:\n");
    printf("Cordenada x .do ponto A:");
    scanf("%d", &ret.ponto_a.x);
    printf("Cordenada y do ponto A:");
    scanf("%d", &ret.ponto_a.y);


    printf("Insira o ponto d (canto inferior direito) do retangulo:\n");
    printf("Cordenada x do ponto D:");
    scanf("%d", &ret.ponto_d.x);
    printf("Cordenada y do ponto D:");
    scanf("%d", &ret.ponto_d.y);


    printf("Insira o ponto X do retangulo:\n");
    printf("Cordenada x do ponto 1:");
    scanf("%d", &ret.ponto_x.x);
    printf("Cordenada y do ponto 1:");
    scanf("%d", &ret.ponto_x.y);


    int ponto_x_dentro_do_retangulo = ponto_dentro_do_retangulo(ret, ponto_x);


    if(ponto_x_dentro_do_retangulo){
        printf("Ponto X esta dentro do retanguko ret\n");
    }
    else {
        printf("Ponto X nao esta dentro do retangulo ret\n");
    }


    return 0;
}