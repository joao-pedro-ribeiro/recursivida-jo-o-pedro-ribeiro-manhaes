#include<stdio.h>

int expoenteA(int n1, char a)
{
  if(n1 > 0)
  {
    return expoenteA(n1-1, a);
  }
}

int expoenteB(int n2, char b)
{
  if(n2 > 0)
  {
    return expoenteB(n2-1, b);
  }
}

int main()
{
  int numero, contadorA, contadorB;
  char a='a',b='b';

  printf("Digite o numero que serah os 2 expoentes:");
  scanf("%d",&numero);
  for(contadorA = 0; contadorA < numero; contadorA++)
  {
    printf("%c", expoenteA(numero,a));
  }
  for(contadorB = 0; contadorB < numero; contadorB++)
  {
    printf("%c", expoenteB(numero,b));
  }
  return 0;
}