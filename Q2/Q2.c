#include <stdio.h>

int main()
{
    //Declarando as variaveis//
    int f, soma = 0;
    int f1 = 1;
    int f2 = 0;
    
    //Recebendo a entrada para verificar se o valor pertence a Fibonacci//
    printf("Digite um valor: ");
    scanf("%d", &f);
    
    //Conta para calcular a sequência de Fibonacci//
    while(f > soma)
    {
        soma = f1 + f2;
        f1 = f2;
        f2 = soma;
    }
    
    //Está condição irá verificar se o número pertence ou não ao Fibonacci//
    //Caso o valor de f seja igual ao número que pertence ao Fibonacci ela irá printar que ele pertence//
    //Se não, ela irá executar o segundo comando e printar que ele não pertence ao Fibonacci//
    
    f == soma ? printf("\nO número pertence a Fibonacci.") : printf("\nO número digitado não pertence a Fibonacci.");
    
  
    return 0;
}