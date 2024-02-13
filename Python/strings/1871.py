def soma_remove_0(num, num2):
    sum = num + num2
    sum = str(sum)
    sum = sum.replace('0', "")
    return sum


if __name__ == "__main__":
    while True:
        numeros = list(map(int, input().split(" ")))
        if numeros[0] == 0 and numeros[1] == 0:
            break
        else:
            print(soma_remove_0(numeros[0], numeros[1]))
