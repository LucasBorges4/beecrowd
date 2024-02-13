#integer T -- input
inteiroT = int(input())
#5 numbers --input
num = input().split(" ")
# A vector to made management
vetor = [0 for a in range(5)]
#this is the fundamental logic
for a in num:
    vetor[int(a)] += 1
# display the result
print(vetor[inteiroT])