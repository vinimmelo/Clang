#include <stdio.h>

int main() {
  printf("*************************************\n");
  printf("Bem vindo ao jogo da adivinhação!\n");
  printf("*************************************\n");

  int numero_secreto = 42;

  int chute;

  printf("Qual é o seu chute: ");
  scanf("%d", &chute);
  printf("O seu número foi %d\n", chute);

}
