#include <stdio.h>
#include <stdlib.h>

int potencia (x,y)
{
    if(y==0){
        return 1;
    }
    else{
        return (x * potencia(x, y-1));
    }
}
int main()
{
    int resultado, b, c;
    printf("Entre com a base:");
    scanf("%d", &b);
    printf("Entre com o expoente:");
    scanf("%d", &c);
    resultado = potencia (b,c);
    printf("\nO RESULTADO EH: %d\n", resultado);
    return 0;
}


 
    

     
 

     