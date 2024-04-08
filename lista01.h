#include <stdio.h>

void lista1questao01();
void lista1questao02();
void lista1questao03();
int lista1questao04();

void lista1questao01()
{
  int minimo, posicao, valores[10];
  for (int i = 0; i < 10; i++)
  {
    printf("Insira o valor %d: ", i + 1);
    scanf("%d", &valores[i]);
    if (i == 0)
    {
      minimo = valores[i];
    }
    if (valores[i] < minimo)
    {
      minimo = valores[i];
      posicao = i;
    }
  }
  printf("O menor valor é %d e sua posição no vetor é %d\n", minimo, posicao);
}

void lista1questao02()
{
  int valor, soma = 0;
  printf("Insira o valor de N: ");
  scanf("%d", &valor);
  for (int i = 1; i <= valor; i++)
  {
    soma += i;
  }
  printf("A soma dos primeiros %d números inteiros positivos é: %d\n", valor, soma);
}

void lista1questao03()
{
  float vetor[8];
  for (int i = 0; i < 8; i++)
  {
    printf("Insira o valor %d: ", i + 1);
    scanf("%f", &vetor[i]);
  }
  printf("Vetor de entrada: [");
  for (int i = 0; i < 8; i++)
  {
    if (i == 7)
    {
      printf("%g", vetor[i]);
    }
    else
    {
      printf("%g,", vetor[i]);
    }
  }
  printf("]\n");
  printf("Vetor de saída: [");
  for (int i = 1; i < 9; i++)
  {
    if (i == 8)
    {
      printf("%g", vetor[8 - i]);
    }
    else
    {
      printf("%g,", vetor[8 - i]);
    }
  }
  printf("]\n");
}

int lista1questao04()
{
  int vetor[6], numero;
  for (int i = 0; i < 6; i++)
  {
    printf("Digite o valor %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }
  printf("Digite o número que você quer encontrar: ");
  scanf("%d", &numero);
  for (int i = 0; i < 6; i++)
  {
    if (numero == vetor[i])
    {
      printf("O índice do número é: %d\n", i);
      return 0;
    }
  }
  return -1;
}