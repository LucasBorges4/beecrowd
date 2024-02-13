#name
nome = str(input())
#salary
salario = float(input())

#money from selling
dinheiro_vendas = float(input())

#comission
comissao = 15/100

# display the result
print(f"TOTAL = R$ {salario + dinheiro_vendas*comissao:.2f}")