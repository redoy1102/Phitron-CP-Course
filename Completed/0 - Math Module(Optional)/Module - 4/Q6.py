"""
Take two natural numbers X and Y. If X * Y = Z, is Z even or odd when X
and Y -
(Case 1) both are even: even / odd
(Case 2) both are odd: even / odd
(Case 3) One of them is odd, the other one is even: even / odd
Note: (Answer in even or odd) Write in Details
"""


def find_res(a, b):
    z = a * b
    if z % 2 == 0:
        return "Even"
    else:
        return "Odd"


# case 1
x, y = 10, 20
print("Even-Even:", find_res(x, y))
# case 2
x, y = 11, 21
print("Odd-Odd:", find_res(x, y))
# case 3
x, y = 11, 20
print("Odd-Even:", find_res(x, y))