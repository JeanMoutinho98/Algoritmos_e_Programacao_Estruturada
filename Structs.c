#include <stdio.h>  
struct endereco {                                                       //Typedef serve para adicionar um apelido para os tipos.
    char cidade[50];
    char rua[50];
    int numero;
};                                                                     //Apelido após o {.


struct aluno {                                                          //Estrutura da Struct: 
    char nome[20];
    int matricula;
    float nota1, nota2, nota3;
    struct endereco endereco;
};


int main(){
    struct aluno aluno1;                                                        //Declarando variável do tipo Struct.
    struct aluno aluno2 = {"Maria Eduarda", 5678, 2, 3.4, 5, "Rua x casa y"};   //Inicializando uma strut na própria declaração.
    struct aluno aluno3;
    aluno3 = aluno2;

    printf("Insira dados do aluno:\n");
    printf("Nome: ");
    fgets(aluno1.nome, 50, stdin);
    printf("Matricula: ");
    scanf("%d", &aluno1.matricula);
    printf("Notas: ");
    scanf("%f %f %f", &aluno1.nota1, &aluno1.nota2, &aluno1.nota3);
    

    printf("Cidade: ");
    fflush(stdin);                                                              //Limpa a entrada do teclado pro fgets funcionar corretamente.
    fgets(aluno1.endereco.rua, 50, stdin);
    printf("Rua: ");
    fgets(aluno1.endereco.rua, 50, stdin);
    printf("Numero: ");
    scanf("%d", &aluno1.endereco.numero);



    printf("\nInformacoes do aluno 1\n");
    printf("Nome: %s\nMatricula: %d\nNotas: %.2f %.2f %.2f\n", aluno1.nome, aluno1.matricula, aluno1.nota1, aluno1.nota2, aluno1.nota3);
    printf("Endereco: %s, %s, %d\n", aluno1.endereco.cidade, aluno1.endereco.rua, aluno1.endereco.numero);


    printf("\nInformacoes do aluno 2\n");
    printf("Nome: %s\nMatricula: %d\nNotas: %.2f %.2f %.2f\nEndereco: \n", aluno2.nome, aluno2.matricula, aluno2.nota1, aluno2.nota2, aluno2.nota3, aluno2.endereco);


    printf("\nInformacoes do aluno 3\n");
    printf("Nome: %s\nMatricula: %d\nNotas: %.2f %.2f %.2f\nEndereco: \n", aluno2.nome, aluno2.matricula, aluno2.nota1, aluno2.nota2, aluno2.nota3, aluno2.endereco);


return 0;
}