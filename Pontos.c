#include <stdio.h>
#include <math.h>

struct ponto{
    int x;
    int y;
};


int main(){
    struct ponto p1, p2;

    printf("Insira as coordenadas do ponto p1:\n");
    printf("x: ");
    scanf("%d", &p1.x);
    printf("y: ");
    scanf("%d", &p1.y);

    printf("Insira as coordenadas do ponto p2:\n");
    printf("x: ");
    scanf("%d", &p2.x);
    printf("y: ");
    scanf("%d", &p2.y);

    printf("Distancia entre Ponto 1(%d,%d) e Origem(0,0): %.2f\n", p1.x, p1.y, sqrt(pow(p1.x - 0, 2) + pow(p1.y - 0,2)));
    printf("Distancia entre Ponto 2(%d,%d) e Origem(0,0): %.2f\n", p2.x, p2.y, sqrt(pow(p2.x - 0, 2) + pow(p2.y - 0, 2)));
    printf("distancia entre Ponto 1(%d, %d) e Ponto 2(%d, %d): %.2f\n", p1.x, p1.y, p2.x, p2.y, sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y,2)));


    return 0;
}