# Choose a prime number from the range of 50 to 100. We will call it P. Write
# in Details

import math as m

for i in range(50, 101):
    c = 0
    for j in range(2, int(m.sqrt(i))+1):
        if i % j == 0:
            c += 1
            break
    if c == 0:
        print(i, "is prime number as it has only two factors are 1 and itself.")
        break


