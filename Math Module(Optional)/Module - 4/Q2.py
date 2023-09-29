# Find the binary representation of P. You must show the process.
import math as m


def binary_representation(n):
    b = []
    while n != 0:
        b.append(n % 2)
        n = n // 2
    b.reverse()
    return b


for i in range(50, 101):
    c = 0
    for j in range(2, int(m.sqrt(i)) + 1):
        if i % j == 0:
            c += 1
            break
    if c == 0:
        print(i)
        print(binary_representation(i))
        break
