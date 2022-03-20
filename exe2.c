/*
2. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, z;
    int soma;
  
{
    printf("Digite um numero ai: ");
    scanf("%d", &x);
    printf("Digite um numero ai: ");
    scanf("%d", &y);
    printf("Digite um numero ai: ");
    scanf("%d", &z);
    
    soma = x + y + z;
    
    printf("A soma dos numeros é de: %d", soma);

    return 0;
}
}