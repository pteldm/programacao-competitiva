n = int(input())
string = input()
lista_valores = [int(x) for x in string.split()]
movimentos = 0 

for i in range(n):
    #   verifica se o índice é maior que 0 e verifica se o termo no índice atual é menor que o termo anterior
    if((i>0) & (lista_valores[i]<lista_valores[i-1])):
        #   calcula e soma à variável movimentos, quantos movimentos(incrementos de um) 
        #   são necessários para tornar os dois valores pelo menos iguais
        movimentos += abs(lista_valores[i-1] - lista_valores[i])
        #   atribui o valor anterior mais um para garantir que o elemento tenha pelo menos o mesmo valor
        lista_valores[i] = lista_valores[i-1]        
print(movimentos)