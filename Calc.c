#include <stdio.h>


int main(){
    char operador;
    int num1, num2;
    float res;


printf("escolha operacao(+,-,*,/)\n");
scanf("%c, &operador");


if(operador == '+')
{
    printf("voce escolheu 'soma'");
}
else if(operador == '-')
{
    printf("voce escolheu 'subtracao'");
}
else if(operador == '*')
{
    printf("voce escolheu 'multiplicacao'");
}
else if(operador == '/')
{
    printf("voce escolheu 'divisao'");
}


printf("Escolha o primeiro numero");
scanf("%d", &num1);
printf("Escolha o segundo numero");
scanf("%d", &num2);


switch(operador)
{
case '+':
    res = num1 + num2;
    break;

case '-':
    res = num1 - num2;
    break;

case '*':
    res = num1 * num2;
    break;

case '/':
    res = num1 / num2;
    break;

default:
    printf("Erro");
}








return 0;
}