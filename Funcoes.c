#include <stdio.h>

int soma(){
    int num1, num2;


    printf("Insira dois numeros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);


    return num1 + num2;
}


int subtracao(){
    int num1, num2;


    printf("Insira dois numeros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);


    return num1 - num2;
}


int multiplicacao(){
    int num1, num2;


    printf("Insira dois numeros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);


    return num1 * num2;
}


float divisao(){
    float num1, num2;


    printf("Insira dois numeros:\n");
    scanf("%f", &num1);
    scanf("%f", &num2);


    return num1 / num2;
}


int resto(){
    int num1, num2;


    printf("Insira dois numeros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);


    return num1 % num2;
}


int erro(){
    printf("Erro!\nTente novamente com uma operacao valida(+,-,*,/,%).");

return 0; 
}


int main(){
    char operacao;

    
    printf("Insira uma operacao:\n");
    scanf("%c", &operacao);


    if(operacao == '+'){
        printf("Resultado: %d\n", soma());
    }
    else if(operacao == '-'){
        printf("Resultado: %d\n", subtracao());
    }
    else if(operacao == '*'){
        printf("Resultado: %d\n", multiplicacao());
    }
    else if(operacao == '/'){
        printf("Resultado: %f\n", divisao());
    }
    else if(operacao == '%'){
        printf("Resultado: %d\n", resto());
    }
    else{
        printf(erro());
    }


return 0;
}