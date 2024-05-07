# Ternary numbers are formed with a number system with base 3. Given the
# ternary number 10212, find its decimal value. Write in Details.

num = int(input())
total = 0
i = 0
while num != 0:
    lastDigit = num % 10
    total = total + (lastDigit * pow(3, i))
    num = num // 10
    i += 1

print(total)