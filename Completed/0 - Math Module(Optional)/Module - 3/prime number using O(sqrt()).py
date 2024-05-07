import math as ma

num = int(input())
c = 0
for i in range(2, int(ma.sqrt(num))+1):
    if num % i == 0:
        c += 1
        break

if c > 0:
    print("Not prime number.")
elif c == 0 and num != 1:
    print("Prime number.")
else:
    print("Not Prime number.")
