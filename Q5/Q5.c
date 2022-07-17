#include<stdio.h>
#define t 7 //O t está recebendo o tamanho da string

int main() {
    
    //A string está recebendo a palavra amizade//
    
    char a[] = "amizade";
    int i;
    
    //A variavel i irá iniciar no último indice da nossa string//
    //Enquanto nosssa varivel i for maior ou igual ao primeiro indice da string que é 0//
    //A variavel i irá remover uma unidade do seu valor, fazendo com que o programa funcione de trás para frente// 
    
    for(i = t; i >= 0; i--){
        printf("%c", a[i]);
    }
    return (0);
}