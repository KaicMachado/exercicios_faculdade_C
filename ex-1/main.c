// Construa um programa que leia um número inteiro e apresente seu antecessor e seu sucessor

#include <stdio.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL, " ");
  int num;

  printf("Digite um numero : \n");
  scanf("%d", &num);

  printf("O sucessor de %d = %d", num, num + 1);
  printf("\nO antecessor de %d = %d", num, num -1); 


  return 0;
}
