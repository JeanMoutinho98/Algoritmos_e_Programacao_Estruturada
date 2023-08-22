#include <stdio.h>


int main(){;                                        //Declarar variáveis
    int num1, num2;
    char operador;

    
    printf("Por favor, insira uma operacao:");      //Escolher operação
    scanf("%c", &operador);
    
    
    if(operador == '+')                                               
    {
        printf("Voce escolheu 'Soma'\n");
    }
    else if(operador == '-')
    {
        printf("Voce escolheu 'Subtracao'\n");
    }
    else if(operador == '*')
    {
        printf("Voce escolheu 'Multiplicacao'\n");
    }
    else if(operador == '/')
    {
        printf("Voce escolheu 'Divisao'\n");
    }
    else if(operador == '%')
    {
        printf("Voce escolheu 'Resto da divisao'\n");
    }
    else{
        printf("ERRO: Operador invalido selecionado\nTente novamente com um caracter valido(+,-,*,/,%)");
        return 0;                                           //Finalizar com erro
    }


    printf("Por favor, insira dois numeros\n");             //Escoher números
    printf("Numero 1:");
    scanf("%d", &num1);
    printf("Numero 2:");
    scanf("%d", &num2); 
    

    if(operador == '+')                                    //Dar resultado             
    {
        printf("Resultado: %d\n", num1 + num2);
    }
    else if(operador == '-')
    {
        printf("Resultado: %d\n", num1 - num2);
    }
    else if(operador == '*')
    {
        printf("Resultado: %d\n", num1 * num2);
    }
    else if(operador == '/')
    {
        printf("Resultado: %d\n", num1 / num2);
    }
    else if(operador == '%')
    {
        printf("Resultado: %d\n", num1 % num2);
    }


return 0;
}