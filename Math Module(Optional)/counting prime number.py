# Do you need any discussion with me?
# Join: https://chat.whatsapp.com/E2iFdzBnw1KAJukwd7Y5Pz

import math as ma
import collections


# ------------------------------------------
# Driver Code
# ------------------------------------------


def solve():
    # n = int(input())
    n, k= map(int, input().split())
    a = [int(i) for i in input().split()][:n]
    # s = input()

    if k in a:
        print("YES")
    else:
        print("NO")


def main():
    t = int(input())
    # t = 1
    for _ in range(t):
        # check()
        solve()


# ------------------------------------------
# Driver Code
# ------------------------------------------

def check():
    s = "abc"
    r = s[0]
    r += "d"
    print(r)


def euclidean_algo(a, b):
    if b == 0:
        return a
    else:
        return euclidean_algo(b, a % b)


def prime_number(n):
    # O(sqrt(n))
    if n <= 1:
        return False

    for i in range(2, int(ma.sqrt(n)) + 1):
        if n % i == 0:
            return False

    return True


def quick_sort(nums):
    nums = list(nums)

    if len(nums) <= 1:
        return nums
    else:
        pivot = nums[0]
        less = [i for i in nums[1:] if i <= pivot]
        high = [i for i in nums[1:] if i > pivot]

        sortedNums = quick_sort(less)
        sortedNums.extend([pivot])
        sortedNums.extend(quick_sort(high))

        return sortedNums


def binary_search(nums, element):
    # nums = quick_sort(nums)     # if nums not sorted
    left = 0
    right = len(nums) - 1

    while left <= right:
        mid = (left + right) // 2
        if nums[mid] < element:
            left = mid + 1
        elif nums[mid] > element:
            right = mid - 1
        else:
            print("Item found at {}".format(mid))
            exit()
    print("Item is not found.")


def lexicographical_small(x, y):
    i = 0
    while i < len(x) and i < len(y):
        if x[i] < y[i]:
            return x
        elif y[i] < x[i]:
            return y
        i += 1

    if len(x) < len(y):
        return x
    elif len(y) < len(x):
        return y
    else:  # equal
        return x


def sumOfDigit(num):
    total = 0
    while num != 0:
        div = num % 10
        total += div
        num = num // 10
    return total

    # or
    # nums = list(map(int, str(num))
    # return sum(nums)


def subLists(value):
    # res = [[]]
    for i in range(len(value) + 1):
        for j in range(i):
            yield value[j:i]
            # res.append(value[j:i])

    return value[1:]  # skip empty sublist


def stringPalindrome(s):
    if s == s[::-1]:
        return True
    else:
        return False


def frequencyCount(s):
    fre = dict(collections.Counter(s))

    return fre

    # sortedDict = {k: fre[k] for k in sorted(fre)}
    # return sortedDict


def checkForSubsequence(STR, target):
    s = []  # stack
    for i in target:
        s.append(i)  # pushing the character of target into the stack

    for i in range(len(STR) - 1, -1, -1):
        if len(s) == 0:
            return True  # if the stack is empty

        if STR[i] == s[-1]:
            s.pop()  # removing the top of element of the stack

    if len(s) == 0:
        return True
    else:
        return False


""" 
<<< MATH FORMULA HUB >>>
1. Arithmetic sum formula to calculate the sum of the first 'n' natural numbers:
(n * (n + 1)) // 2.

2. Summation of all the odd numbers between a to b (inclusive):
(((b + 1) // 2) * ((b + 1) // 2)) - ((((a-1)+1) // 2) * (((a-1)+1) // 2))

3. Summation of all the even numbers between a to b (inclusive):
((n * (n + 1)) // 2) - ((((b + 1) // 2) * ((b + 1) // 2)) - ((((a-1)+1) // 2) * (((a-1)+1) // 2)))

4. 
"""

if __name__ == "__main__":
    main()