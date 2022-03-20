#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct funcionario{
int ID;
char nome[20];
int idade;
float salario;
};

void main(){

    struct funcionario f[5];

    printf("Qual é o ID do funcionario? ");
    scanf("%d", &f[0].ID);
    getchar();
    printf("Qual é o nome do funcionario? ");
    fgets (f[0].nome,20, stdin);
    printf("Qual a idade do funionário? ");
    scanf("%d", &f[0].idade);
    printf("Qual é o salário do funionário? ");
    scanf("%f", &f[0].salario);
    
    printf("ID: %d\n", f[0].ID);
    printf("O nome do funcionário é: %s\n", f[0].nome);
    printf("A idade do funcionário é: %d\n", f[0].idade);
    printf("O salário do funcionário é: %f\n", f[0].salario);
    

}

