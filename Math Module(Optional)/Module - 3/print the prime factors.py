num = int(input())
factors = []
i = 2
while num > 1:
    if num % i == 0:
        factors.append(i)
        num = num // i
    else:
        i += 1

print(factors.count(100))
