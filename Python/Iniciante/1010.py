peca1 = str(input())
peca2 = str(input())
# Giving the variables
valoresPeca1 = peca1.split(" ")
valoresPeca2 = peca2.split(" ")
# Reutilizing him
valoresPeca1 = float(valoresPeca1[1])*float(valoresPeca1[2])
valoresPeca2 = float(valoresPeca2[1])*float(valoresPeca2[2])
# display the result
print("VALOR A PAGAR: "
      f"R$ {valoresPeca1 + valoresPeca2:.2f}")