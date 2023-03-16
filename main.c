#include <stdio.h>
#include <stdlib.h>

int main()
{
  char nome[256];
  char sobrenome[256];
  int idade;

  printf("Olá! Qual seu nome?\n");
  scanf("%s",&nome);

  printf("%s Qual seu sobrenome?\n");
  scanf("%s",&sobrenome);

  printf("\n%s Qual sua idade?\n");
  scanf("%d",&idade);

  printf("Nome: %s\nSobrenome: %s\nIdade: %d\n",nome,sobrenome,idade);

  printf("\nAguarde enquanto lemos os dados...");

  printf("A primeira letra do seu nome é: %c",nome[0]);

  if(idade>= 18){
        printf("\nVoce e adulto!");
  }else if(idade >= 12){
    printf("\nVoce e adolescente!");
    }else{
        printf("\nVoce e crianca!");
    }




    return 0;
}
