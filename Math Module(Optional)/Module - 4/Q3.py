# You and your friends in class might be choosing different values for P. Can
# anybody choose a P that is an odd number? Explain your answer.


import math as m

for p in range(50, 101):
    c = 0
    for j in range(2, int(m.sqrt(p)) + 1):
        if p % j == 0:
            c += 1
            break
    if c == 0:
        if p % 2 != 0:
            print(p, "is odd number.")
        break
