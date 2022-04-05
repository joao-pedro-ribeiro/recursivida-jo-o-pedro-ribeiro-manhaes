#include <stdio.h>
#include <stdlib.h>
int MDC(a,b)
{
    int x;
    if(b==0){
        return a; 
    }
    else{
        if (b!=0){
            x = MDC(b, (a % b));
        }
    } 
}
int main()
{
    int resultado, x, y;
    printf("Entre com o primeiro valor:");
    scanf("%d", &x);
    printf("Entre com o segundo valor:");
    scanf("%d", &y);
    resultado = MDC(x,y);
    printf("\nO resultado do MDC eh:%d\n", resultado);
    return 0;
}