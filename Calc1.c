#include <stdio.h>


int main(){                                         //Variáveis.
    int operador;
    int num1, num2;
    float res;


printf("escolha operacao(+,-,*,/)\n");              //Selecionar operação.
scanf("%c, &operador");


if(operador == '1')                                 //Fazer cálculos.
{
    printf("voce escolheu 'soma'");
    printf("Escolha o primeiro numero");
    scanf("%d", &num1);
    printf("Escolha o segundo numero");
    scanf("%d", &num2);
    res = num1 + num2;
}
else if(operador == '-')
{
    printf("voce escolheu 'subtracao'");
    printf("Escolha o primeiro numero");
    scanf("%d", &num1);
    printf("Escolha o segundo numero");
    scanf("%d", &num2);
    res = num1 - num2;
}
else if(operador == '*')
{
    printf("voce escolheu 'multiplicacao'");
    printf("Escolha o primeiro numero");
    scanf("%d", &num1);
    printf("Escolha o segundo numero");
    scanf("%d", &num2);
    res = num1 * num2;
}
else if(operador == '/')
{
    printf("voce escolheu 'divisao'");
    printf("Escolha o primeiro numero");
    scanf("%d", &num1);
    printf("Escolha o segundo numero");
    scanf("%d", &num2);
    res = num1 / num2;
}


return 0;
}