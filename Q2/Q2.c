Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores 
(exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, 
ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.




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
