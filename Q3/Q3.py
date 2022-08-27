Dado um vetor que guarda o valor de faturamento diário de uma distribuidora, faça um programa, na linguagem que desejar, que calcule e retorne:

1) O menor valor de faturamento ocorrido em um dia do mês;
2) O maior valor de faturamento ocorrido em um dia do mês;
3) Número de dias no mês em que o valor de faturamento diário foi superior à média mensal.

IMPORTANTE!

a) Usar o json ou xml disponível como fonte dos dados do faturamento mensal; 
b) Podem existir dias sem faturamento, como nos finais de semana e feriados. Estes dias devem ser ignorados no cálculo da média;




# Nessa questão optei por fazer em pyhton, pois a linguagem tem um módulo de json #

# Importando o módulo json #
import json

with open("dados.json") as file: # Puxando o arquivo json #
    arquivo = json.load(file) # O dicionario "arquivo" irá armazenar os dados contidos no documento json #

# Declarando as variaveis #
maior = 0
menor = 0
media = 0
soma = 0
acimaMedia = 0
contador = 0


# Um for que irá pegar o maior valor dentro da biblioteca #        
for dia in arquivo:
    
    if(dia['valor'] > maior ):
        maior = dia['valor']

# Um for que irá receber o menor valor da biblioteca, ignorando os valores 0"
for dia in arquivo:
    
    if(dia['valor'] < maior and dia['valor'] != 0 ):
        menor = dia['valor']

# Este for foi criado para criar um contador que irá ignorar os dias que tiveram lucro 0 e para calcular a soma dos lucros #    
for dia in arquivo:
    
    if(dia['valor'] != 0):
        contador = contador + 1 # Este contador foi criado para auxiliar no calculo da media #
        soma = soma + dia['valor'] # A variavel soma está somando todos os valores #

# Calculando a media #
media = soma/contador

# Caso o valor seja maior que a media, o contador irá somar mais 1, assim saberemos quantos dias o valor foi mais alto que a media #
for dia in arquivo:
    if(dia['valor'] > media):
        acimaMedia = acimaMedia + 1
        
# O Imprimindo o que foi solicitado #

print("\nMenor faturamento em um dia: R$", menor)

print("\nMaior faturamento em um dia: R$", maior)

print("\nNúmero de dias no mês em que o faturamento foi superior a media mensal:", acimaMedia, "dias")







