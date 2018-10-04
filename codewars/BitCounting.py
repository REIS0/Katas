# https://www.codewars.com/kata/526571aae218b8ee490006f4

def countBits(n):
    sum = 0
    bin = str("{0:b}".format(n))

    for i in bin:
        if i == "1":
            sum += 1

        else:
            continue

    return sum


test = int(input("Digite um numero: "))

print(countBits(test))
