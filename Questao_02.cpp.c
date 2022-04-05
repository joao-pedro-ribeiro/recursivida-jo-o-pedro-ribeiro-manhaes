#include <stdio.h>
#include <stdlib.h>
int fibonacci(int n){
    int x;
    if (n==1){
        return 1;
    }
    else{
        if(n == 2){
            return 1;
        }
        else{
           x = fibonacci(n-1) + fibonacci(n-2);
        }
    }
}
int main()
{
    int n, i;
    printf("Digite a quantidade de termos:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
    printf("%d ", fibonacci(i));
  }
  printf("\n");
  return(0);
}
        