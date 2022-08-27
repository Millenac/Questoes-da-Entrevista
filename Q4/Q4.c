Dado o valor de faturamento mensal de uma distribuidora, detalhado abaixo por estado:

SP – R$67.836,43

RJ – R$36.678,66

MG – R$29.229,88

ES – R$27.165,48

Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual de representação que cada estado teve 
dentro do valor de faturamento total mensal da distribuidora.




#include <stdio.h>

int main()
{
    float sp, rj, mg, es, outros;
    
    sp = 67.83643;
    rj = 36.67866;
    mg = 29.22988;
    es = 27.16548;
    outros = 19.84953;
    
    float total = sp + rj + mg + es + outros;
        printf("Valor total mensal da distribuidora: R$%.3f", total);
    
    float p1 = (sp*100)/total;
    float p2 = (rj*100)/total;
    float p3 = (mg*100)/total;
    float p4 = (es*100)/total;
    float p5 = (outros*100)/total;
    
    printf("\nO percentual de SP é: %f%%", p1);
    printf("\nO percentual de RJ é: %f%%", p2);
    printf("\nO percentual de MG é: %f%%", p3);
    printf("\nO percentual de ES é: %f%%", p4);
    printf("\nO percentual dos outros Estados é: %f%%", p5);

    return 0;
}

