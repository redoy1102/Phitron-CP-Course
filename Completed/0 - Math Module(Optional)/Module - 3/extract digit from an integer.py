# Find the ith digit from a number (say n = 91408) from right. [i = 0,1,2,3,4]

import math as m

n = 91408
for i in range(5):
    res = m.floor(n / pow(10, i)) % 10
    print(res)
