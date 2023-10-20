#include <stdio.h>                                          //Código funcionou porém o cálculo não
#include <math.h>

struct ponto{
    int x,y;
};


struct retangulo{
    struct ponto ponto_a;
    struct ponto ponto_d;
};


float calcula_distancia_entre_pontos(struct ponto ponto1, struct ponto ponto2){
    float distancia = sqrt(pow(ponto1.x - ponto2.y, 2) + pow(ponto1.y - ponto2.y,2));


    return distancia;
}


float calcula_area_do_retangulo(struct retangulo r){
    struct ponto ponto_b = {r.ponto_a.x, r.ponto_d.y};


    float altura = calcula_distancia_entre_pontos(r.ponto_a, ponto_b);
    float base = calcula_distancia_entre_pontos(ponto_b, r.ponto_d);


    return base * altura;
}


float calcula_diagonal_do_retangulo(struct retangulo r){                    //Igual.
    float diagonal = calcula_distancia_entre_pontos(r.ponto_a, r.ponto_d);
    

    return diagonal;
}


float calcula_perimetro_do_retangulo(struct retangulo r){                   //Igual.
    struct ponto ponto_b = {r.ponto_a.x, r.ponto_d.y};


    float altura = calcula_distancia_entre_pontos(r.ponto_a, ponto_b);
    float base = calcula_distancia_entre_pontos(ponto_b, r.ponto_d);


    return 2 * base + 2 * altura;
}


int main(){
    struct retangulo ret;


    printf("Insira o ponto A (canto superior esquerdo) do retangulo:\n");
    printf("Cordenada x do ponto A:");
    scanf("%d", &ret.ponto_a.x);
    printf("Cordenada y do ponto A:");
    scanf("%d", &ret.ponto_a.y);


    printf("Insira o ponto d (canto inferior direito) do retangulo:\n");
    printf("Cordenada x do ponto D:");
    scanf("%d", &ret.ponto_d.x);
    printf("Cordenada y do ponto D:");
    scanf("%d", &ret.ponto_d.y);


    printf("Comprimento da diagonal do retangulo: %d\n", calcula_diagonal_do_retangulo(ret));
    printf("Area do retangulo: %d\n", calcula_area_do_retangulo(ret));
    printf("Perimetro do retangulo: %d\n", calcula_perimetro_do_retangulo(ret));

    return 0;
}