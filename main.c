#include "lista01.h"
#include <math.h>
#include <stdio.h>

int main()
{
  int lista, questao;
  do
  {
    printf("Escolha a lista (1) (0 para encerrar): ");
    scanf("%d", &lista);
    switch (lista)
    {
    case 1:
      printf("Escolha a questão (1-4) (0 para encerrar): ");
      scanf("%d", &questao);
      switch (questao)
      {
      case 1:
        printf("1. identifique o menor valor dentre 10 valores obtidos por uma entrada de dados e armazenados em um vetor. O resultado do programa deve mostrar o valor mínimo e a sua posição no vetor.\n");
        lista1questao01();
        break;
      case 2:
        printf("2. calcule a soma dos N primeiros números inteiros positivos. O valor de N deve ser obtido através da entrada de dados.\n");
        lista1questao02();
        break;
      case 3:
        printf("3. receba por entrada dados um vetor de números reais com 8 elementos e inverta a ordem dos elementos desse vetor.\n");
        lista1questao03();
        break;
      case 4:
        printf("3. tenha uma entrada de elementos (vetor de 6 números inteiros) com uma função para realizar a busca de um elemento K nesse vetor. Depois retorne a posição do elemento encontrado e caso o elemento não seja encontrado retorne -1.\n");
        lista1questao03();
        break;
      default:
        break;
      }
      break;
    default:
      break;
    }
  } while (lista > 0 && questao > 0);
}